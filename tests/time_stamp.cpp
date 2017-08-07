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
			if (std::stoi(v.GetObject()["index"].GetString(), nullptr, 16) == chunk_info.ID) {
				next_val = &v;
				break;
			}
		}

		/*
		"name": "level",
		"size_field" : false,
		"type" : "Integer",
		"index" : "0x01",
		"default" : "1",
		"comment" : "Integer"
		*/

		//typename field_map_type::const_iterator it = field_map.find(chunk_info.ID);
		if (next_val) {
			// Switch on type

			std::string type = next_val->GetObject()["type"].GetString();

			/*
				int count = stream.ReadInt();
	vec.resize(count);
	for (int i = 0; i < count; i++) {
		IDReader::ReadID(vec[i], stream);
		TypeReader<S>::ReadLcf(vec[i], stream, 0);
	}
			*/
			writer.Key(next_val->GetObject()["name"].GetString());

			if (type.find("Array<") == 0) {
				std::string real_type = type.substr(6);
				real_type.pop_back();

				Value::ConstMemberIterator itr = d.FindMember(real_type.c_str());
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
					printf("UNBEKANNT: %s\n", type.c_str());
					writer.String("UNKNOWN"); // Todo serialize binary
					stream.Skip(chunk_info);
				}
			} else if (type.find("Vector<") == 0) {
				std::string real_type = type.substr(7);
				real_type.pop_back();

				if (real_type == "UInt8") {
					LcfStruct<std::vector<uint8_t>>::ReadLcf(stream, chunk_info.length, writer);
				} else if (real_type == "Int16") {
					LcfStruct<std::vector<int16_t>>::ReadLcf(stream, chunk_info.length, writer);
				} else if (real_type == "UInt32") {
					LcfStruct<std::vector<uint32_t>>::ReadLcf(stream, chunk_info.length, writer);
				} else if (real_type == "Boolean") {
					LcfStruct<std::vector<bool>>::ReadLcf(stream, chunk_info.length, writer);
				} else {
					printf("VECUNBEKANNT: %s\n", type.c_str());
					writer.String("UNKNOWN"); // Todo serialize binary
					stream.Skip(chunk_info);
				}
			} else if (type == "Integer" || type.find("Ref<") == 0 || type.find("Enum<") == 0) {
				LcfStruct<int>::ReadLcf(stream, chunk_info.length, writer);
			} else if (type == "UInt8") {
				LcfStruct<uint8_t>::ReadLcf(stream, chunk_info.length, writer);
			} else if (type == "Int16") {
				LcfStruct<int16_t>::ReadLcf(stream, chunk_info.length, writer);
			} else if (type == "UInt32") {
				LcfStruct<uint32_t>::ReadLcf(stream, chunk_info.length, writer);
			} else if (type == "Boolean") {
				LcfStruct<bool>::ReadLcf(stream, chunk_info.length, writer);
			} else if (type == "String") {
				LcfStruct<std::string>::ReadLcf(stream, chunk_info.length, writer);
			} else { // TODO Vector
				// Repoint to complex type
				Value::ConstMemberIterator itr = d.FindMember(type.c_str());
				if (itr != d.MemberEnd() && type != "Parameters" && type != "Equipment" && type != "EventCommand") {
					writer.StartObject();
					next_val = &itr->value;
					ChunkReader(stream, d, *next_val, writer);
					writer.EndObject();
				} else {
					printf("UNBEKANNT: %s\n", type.c_str());
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

	LcfReader reader("RPG_RT.ldb", "1252");
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

	std::ifstream lcf_format("lcf.json");

	std::stringstream ss;

	while (!lcf_format.eof()) {
		std::string out;
		std::getline(lcf_format, out);

		ss << out;
	}

	Document d;
	d.Parse(ss.str().c_str());

	assert(d.HasMember("Database"));

	Value& db = d.FindMember("Database")->value;

	StringBuffer s;
	PrettyWriter<StringBuffer> writer(s);
	writer.StartObject();
	ChunkReader(reader, d, db, writer);
	writer.EndObject();

	std::cout << s.GetString() << std::endl;

	Document dd;
	dd.Parse(s.GetString());

	rapidjson::Value val = dd.GetObject();

	//RPG::Database dbb(d.GetObject());

	RPG::Database dbb(val);

	auto& a = dbb.GetActors();

	auto& actor = a[1];

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
