/*
 * This file is part of liblcf. Copyright (c) 2017 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include <cassert>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include "lcf_database.h"
#include "lsd_reader.h"

static void ToTDateTime() {
#define CheckTime(val, year, month, day, hour, minute, second) { \
			std::time_t const current = LSD_Reader::ToUnixTimestamp(val);			 \
		struct tm const* const t = std::gmtime(&current); \
		 \
		assert(t->tm_year == year - 1900); \
		assert(t->tm_mon + 1 == month); \
		assert(t->tm_mday == day); \
		assert(t->tm_hour == hour); \
		assert(t->tm_min == minute); \
		assert(t->tm_sec == second); \
	} \

	// 27468.96875   27468     1975 年 3 月 15 日    .96875    11:15:00 P.M.
	CheckTime(27468.96875, 1975, 3, 15, 23, 15, 0);
	// 36836.125     36836     2000 年 11 月 6 日    .125       3:00:00 A.M.
	CheckTime(36836.125, 2000, 11, 6, 3, 0, 0);
	// 36295.0                 1999/5/15           1999/05/15 12:00:00 AM
	CheckTime(36295.0, 1999, 5, 15, 0, 0, 0);
	// 36232.9375              1999/03/13 22:30:00 1999/03/13 10:30:00 PM
	CheckTime(36232.9375, 1999, 3, 13, 22, 30, 0);

#undef CheckTime
}

static void ToUnixTimestamp() {
	std::time_t const current = std::time(NULL);
	assert(current == LSD_Reader::ToUnixTimestamp(LSD_Reader::ToTDateTime(current)));
}

static void GenerateTimestamp() {
	double const current = LSD_Reader::ToTDateTime(std::time(NULL));
	assert(current == LSD_Reader::ToTDateTime(LSD_Reader::ToUnixTimestamp(current)));
}


#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"
#include "rapidjson/pointer.h"
#include "rapidjson/prettywriter.h"
#include "rapidjson/ostreamwrapper.h"
#include "rapidjson/error/en.h"

using namespace rapidjson;
#include <sstream>
#include <iostream>
#include <fstream>
#include "reader_lcf.h"
#include "reader_struct.h"

void ChunkReader(LcfReader& stream, Document& d, const Value& val, Writer<StringBuffer>& writer) {
	LcfReader::Chunk chunk_info;

	while (!stream.Eof()) {
		chunk_info.ID = stream.ReadInt();
		if (chunk_info.ID == 0)
			break;

		chunk_info.length = stream.ReadInt();
		if (chunk_info.length == 0)
			continue;

		const Value* next_val = nullptr;

		for (auto& v : val.GetArray()) {
			if (v.GetObject()["c"].GetInt() == chunk_info.ID) {
				next_val = &v;
				break;
			}
		}

		/*
		"n": "level",
		"s?" : false,
		"t" : "Integer",
		"i?"
		"c" : "0x01",
		"default?" : "1"
		*/

		//typename field_map_type::const_iterator it = field_map.find(chunk_info.ID);
		if (next_val) {
			// Switch on type
			std::string type = next_val->GetObject()["t"].GetString();

			writer.Key(next_val->GetObject()["n"].GetString());

			if (type.find("std::vector") == 0) {
				std::string inner_type = next_val->GetObject()["i"].GetString();

				if (inner_type == "uint8_t") {
					LcfStruct<std::vector<uint8_t>>::ReadLcf(stream, chunk_info.length, writer);
				} else if (inner_type == "int16_t") {
					LcfStruct<std::vector<int16_t>>::ReadLcf(stream, chunk_info.length, writer);
				} else if (inner_type == "uint32_t") {
					LcfStruct<std::vector<uint32_t>>::ReadLcf(stream, chunk_info.length, writer);
				} else if (inner_type == "bool") {
					LcfStruct<std::vector<bool>>::ReadLcf(stream, chunk_info.length, writer);
				} else {
					if (inner_type != "EventCommand") {
						Value::ConstMemberIterator itr = d.FindMember(inner_type.c_str());
						if (itr != d.MemberEnd()) {
							next_val = &itr->value;

							writer.StartArray();
							int count = stream.ReadInt();

							for (int i = 0; i < count; ++i) {
								writer.StartObject();
								writer.Key("ID");
								writer.Int(stream.ReadInt());
								ChunkReader(stream, d, *next_val, writer);
								writer.EndObject();
							}
							writer.EndArray();
						} else {
							//printf("UNBEKANNT: %s\n", inner_type.c_str());
							writer.String("UNKNOWN"); // Todo serialize binary
							stream.Skip(chunk_info);
						}
					} else {
						LcfStruct<std::vector<RPG::EventCommand>>::ReadLcf(stream, chunk_info.length, writer);
					}
				}
			} else if (type == "int") {
				LcfStruct<int>::ReadLcf(stream, chunk_info.length, writer);
			} else if (type == "uint8_t") {
				LcfStruct<uint8_t>::ReadLcf(stream, chunk_info.length, writer);
			} else if (type == "int16_t") {
				LcfStruct<int16_t>::ReadLcf(stream, chunk_info.length, writer);
			} else if (type == "uint32_t") {
				LcfStruct<uint32_t>::ReadLcf(stream, chunk_info.length, writer);
			} else if (type == "bool") {
				LcfStruct<bool>::ReadLcf(stream, chunk_info.length, writer);
			} else if (type == "std::string") {
				LcfStruct<std::string>::ReadLcf(stream, chunk_info.length, writer);
			} else {
				// Repoint to complex type
				Value::ConstMemberIterator itr = d.FindMember(type.c_str());
				if (type == "Parameters") {
					LcfStruct<RPG::Parameters>::ReadLcf(stream, chunk_info.length, writer);
				} else if (type == "Equipment") {
					LcfStruct<RPG::Equipment>::ReadLcf(stream, chunk_info.length, writer);
				} else if (itr != d.MemberEnd()) {
					writer.StartObject();
					next_val = &itr->value;
					ChunkReader(stream, d, *next_val, writer);
					writer.EndObject();
				} else {
					//printf("UNBEKANNT: %s\n", type.c_str());
					writer.String("UNKNOWN"); // Todo serialize binary
					stream.Skip(chunk_info);
				}
			}
#ifdef LCF_DEBUG_TRACE
			printf("0x%02x (size: %d, pos: 0x%x): %s\n", chunk_info.ID, chunk_info.length, stream.Tell(), it->second->name);
#endif
			//ChunkReader(stream, d, *next_val, writer);
		} else {
			stream.Skip(chunk_info);
		}
	}
}

#include "rpg_database.h"

int main() {
  ToTDateTime();
  ToUnixTimestamp();
  GenerateTimestamp();

	LcfReader reader("RPG_RTHERO.ldb", "1252");
	if (!reader.IsOk()) {
		//LcfReader::SetError("Couldn't find %s database file.\n", filename.c_str());
		return false;
	}
	std::string header;
	reader.ReadString(header, reader.ReadInt());
	if (header.length() != 11) {
		//LcfReader::SetError("%s is not a valid RPG2000 database.\n", filename.c_str());
		return false;
	}
	if (header != "LcfDataBase") {
		//fprintf(stderr, "Warning: %s header is not LcfDataBase and might not be a valid RPG2000 database.\n", filename.c_str());
	}

	Document d;
	d.Parse<RAPIDJSON_PARSE_DEFAULT_FLAGS | kParseTrailingCommasFlag>(lcf_jsondb);

	if (d.GetParseError()) {
		fprintf(stderr, "The LCF JSON Database is corrupted!");
		fprintf(stderr, "\nError(offset %u): %s\n",
				(unsigned)d.GetErrorOffset(),
				GetParseError_En(d.GetParseError()));
		fprintf(stderr, "%s", std::string(lcf_jsondb).substr(std::max((int)0, (int)(d.GetErrorOffset() - 40)), 80).c_str());
		assert(false);
		exit(1);
	}

	assert(d.HasMember("Database"));

	Value& db = d.FindMember("Database")->value;

	Document dd;

	{
		StringBuffer s;
		Writer<StringBuffer> writer(s);
		writer.StartObject();
		ChunkReader(reader, d, db, writer);
		writer.EndObject();

		std::ofstream f("out.json");
		f.write(s.GetString(), strlen(s.GetString()));
		f.close();

		//std::cout << s.GetString() << std::endl;

		dd.Parse(s.GetString());
	}

	rapidjson::Value val = dd.GetObject();

	//RPG::Database dbb(d.GetObject());

	RPG::Database dbb(val);

	auto& a = dbb.GetActors();

	auto& actor = a[5];

	{
		std::string &name = actor.GetName();

		std::string test = "test";
		actor.SetName("test");
	}
	const std::string& name2 = actor.GetName();

	auto& skills = actor.GetSkills();
	auto& l = skills[0].level;

	auto& b = dbb.GetActors();

	dbb.GetActors();

	return EXIT_SUCCESS;
}
