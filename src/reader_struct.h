/*
 * This file is part of liblcf. Copyright (c) 2017 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_READER_STRUCT_H
#define LCF_READER_STRUCT_H

#include <cstdint>
#include <vector>
#include <string>

#include "reader_lcf.h"
#include "rpg_equipment.h"
#include "rpg_eventcommand.h"
#include "rpg_parameters.h"

#include "rapidjson/writer.h"

using namespace rapidjson;


/**
 * Type Lcf size.
 */
template <class T>
struct LcfSizeT {
	static const uint32_t value = sizeof(T);
};

/**
 * Type Lcf bool size.
 */
template <>
struct LcfSizeT<bool> {
	static const uint32_t value = 1;
};


/**
 * Primitive type reader template.
 */
template <class T>
struct LcfStruct {
	static void ReadLcf(LcfReader& stream, uint32_t length, Writer<StringBuffer>& writer) {
		T val;

		int dif = 0;
		// FIXME: Bug #174
		if (length != LcfSizeT<T>::value) {
			dif = length - LcfSizeT<T>::value;
			fprintf(stderr, "Reading Primitive of incorrect size %d (expected %d) at %X\n",
					length, LcfSizeT<T>::value, stream.Tell());
		}

		stream.Read(val);

		if (dif != 0) {
			// Fix incorrect read pointer position
			stream.Seek(dif, LcfReader::FromCurrent);
		}

		writer.Int(val);
	}
	/*static void WriteLcf(const T& ref, LcfWriter& stream) {
		stream.Write(ref);
	}
	static int LcfSize(const T& * ref *, LcfWriter& * stream *) {
		return LcfSizeT<T>::value;
	}
	static void WriteXml(const T& ref, XmlWriter& stream) {
		stream.Write(ref);
	}
	static void ParseXml(T& ref, const std::string& data) {
		XmlReader::Read(ref, data);
	}*/
};


/**
 * Int specialization.
 */
template <>
struct LcfStruct<int> {
	static void ReadLcf(LcfReader& stream, uint32_t length, Writer<StringBuffer>& writer) {
		int ref;

		if (length >= 1 && length <= 5) {
			ref = stream.ReadInt();
#ifdef LCF_DEBUG_TRACE
			printf("  %d\n", ref);
#endif
		} else {
			ref = 0;
#ifdef LCF_DEBUG_TRACE
			printf("Invalid integer at %X\n", stream.Tell());
#endif
			stream.Seek(length, LcfReader::FromCurrent);
		}

		writer.Int(ref);
	}
	/*static void WriteLcf(const int& ref, LcfWriter& stream) {
		stream.WriteInt(ref);
	}
	static int LcfSize(const int& ref, LcfWriter& * stream *) {
		return LcfReader::IntSize(ref);
	}
	static void WriteXml(const int& ref, XmlWriter& stream) {
		stream.WriteInt(ref);
	}
	static void ParseXml(int& ref, const std::string& data) {
		XmlReader::Read(ref, data);
	}*/
};

/**
 * String specialization.
 */
template <>
struct LcfStruct<std::string> {
	static void ReadLcf(LcfReader& stream, uint32_t length, Writer<StringBuffer>& writer) {
		std::string ref;

		stream.ReadString(ref, length);

		writer.String(ref.c_str(), length);

#ifdef LCF_DEBUG_TRACE
		printf("  %s\n", ref.c_str());
#endif
	}
	/*static void WriteLcf(const std::string& ref, LcfWriter& stream) {
		stream.Write(ref);
	}
	static int LcfSize(const std::string& ref, LcfWriter& stream) {
		return stream.Decode(ref).size();
	}
	static void WriteXml(const std::string& ref, XmlWriter& stream) {
		stream.Write(ref);
	}
	static void ParseXml(std::string& ref, const std::string& data) {
		XmlReader::Read(ref, data);
	}*/
};

// ToDo: Vector specialisation
/**
* String specialization.
*/
template<>
struct LcfStruct<std::vector<uint8_t>> {
	static void ReadLcf(LcfReader& stream, uint32_t length, Writer<StringBuffer>& writer) {
		std::vector<uint8_t> ref;

		stream.Read(ref, length);

		writer.StartArray();
		for (auto& e : ref) {
			writer.Int(e);
		}
		writer.EndArray();

#ifdef LCF_DEBUG_TRACE
		printf("  %s\n", ref.c_str());
#endif
	}
	/*static void WriteLcf(const std::string& ref, LcfWriter& stream) {
	stream.Write(ref);
	}
	static int LcfSize(const std::string& ref, LcfWriter& stream) {
	return stream.Decode(ref).size();
	}
	static void WriteXml(const std::string& ref, XmlWriter& stream) {
	stream.Write(ref);
	}
	static void ParseXml(std::string& ref, const std::string& data) {
	XmlReader::Read(ref, data);
	}*/
};

template<>
struct LcfStruct<std::vector<int16_t>> {
	static void ReadLcf(LcfReader& stream, uint32_t length, Writer<StringBuffer>& writer) {
		std::vector<int16_t> ref;

		stream.Read(ref, length);

		writer.StartArray();
		for (auto& e : ref) {
			writer.Int(e);
		}
		writer.EndArray();

#ifdef LCF_DEBUG_TRACE
		printf("  %s\n", ref.c_str());
#endif
	}
	/*static void WriteLcf(const std::string& ref, LcfWriter& stream) {
	stream.Write(ref);
	}
	static int LcfSize(const std::string& ref, LcfWriter& stream) {
	return stream.Decode(ref).size();
	}
	static void WriteXml(const std::string& ref, XmlWriter& stream) {
	stream.Write(ref);
	}
	static void ParseXml(std::string& ref, const std::string& data) {
	XmlReader::Read(ref, data);
	}*/
};

template<>
struct LcfStruct<std::vector<uint32_t>> {
	static void ReadLcf(LcfReader& stream, uint32_t length, Writer<StringBuffer>& writer) {
		std::vector<uint32_t> ref;

		stream.Read(ref, length);

		writer.StartArray();
		for (auto& e : ref) {
			writer.Int(e);
		}
		writer.EndArray();

#ifdef LCF_DEBUG_TRACE
		printf("  %s\n", ref.c_str());
#endif
	}
	/*static void WriteLcf(const std::string& ref, LcfWriter& stream) {
	stream.Write(ref);
	}
	static int LcfSize(const std::string& ref, LcfWriter& stream) {
	return stream.Decode(ref).size();
	}
	static void WriteXml(const std::string& ref, XmlWriter& stream) {
	stream.Write(ref);
	}
	static void ParseXml(std::string& ref, const std::string& data) {
	XmlReader::Read(ref, data);
	}*/
};

template<>
struct LcfStruct<std::vector<bool>> {
	static void ReadLcf(LcfReader& stream, uint32_t length, Writer<StringBuffer>& writer) {
		std::vector<bool> ref;

		stream.Read(ref, length);

		writer.StartArray();
		for (auto e : ref) {
			writer.Bool(e);
		}
		writer.EndArray();

#ifdef LCF_DEBUG_TRACE
		printf("  %s\n", ref.c_str());
#endif
	}
	/*static void WriteLcf(const std::string& ref, LcfWriter& stream) {
	stream.Write(ref);
	}
	static int LcfSize(const std::string& ref, LcfWriter& stream) {
	return stream.Decode(ref).size();
	}
	static void WriteXml(const std::string& ref, XmlWriter& stream) {
	stream.Write(ref);
	}
	static void ParseXml(std::string& ref, const std::string& data) {
	XmlReader::Read(ref, data);
	}*/
};

template<>
struct LcfStruct<RPG::Equipment> {
	static void ReadLcf(LcfReader& stream, uint32_t length, Writer<StringBuffer>& writer) {
		writer.StartObject();

		int n = length / 5;

		writer.Key("weapon_id");
		LcfStruct<int16_t>::ReadLcf(stream, n, writer);
		writer.Key("shield_id");
		LcfStruct<int16_t>::ReadLcf(stream, n, writer);
		writer.Key("armor_id");
		LcfStruct<int16_t>::ReadLcf(stream, n, writer);
		writer.Key("helmet_id");
		LcfStruct<int16_t>::ReadLcf(stream, n, writer);
		writer.Key("accessory_id");
		LcfStruct<int16_t>::ReadLcf(stream, n, writer);

		writer.EndObject();
#ifdef LCF_DEBUG_TRACE
		printf("  %s\n", ref.c_str());
#endif
	}
	/*static void WriteLcf(const std::string& ref, LcfWriter& stream) {
	stream.Write(ref);
	}
	static int LcfSize(const std::string& ref, LcfWriter& stream) {
	return stream.Decode(ref).size();
	}
	static void WriteXml(const std::string& ref, XmlWriter& stream) {
	stream.Write(ref);
	}
	static void ParseXml(std::string& ref, const std::string& data) {
	XmlReader::Read(ref, data);
	}*/
};

template<>
struct LcfStruct<RPG::Parameters> {
	static void ReadLcf(LcfReader& stream, uint32_t length, Writer<StringBuffer>& writer) {
		writer.StartObject();

		int n = length / 6;

		writer.Key("maxhp");
		LcfStruct<std::vector<int16_t>>::ReadLcf(stream, n, writer);
		writer.Key("maxsp");
		LcfStruct<std::vector<int16_t>>::ReadLcf(stream, n, writer);
		writer.Key("attack");
		LcfStruct<std::vector<int16_t>>::ReadLcf(stream, n, writer);
		writer.Key("defense");
		LcfStruct<std::vector<int16_t>>::ReadLcf(stream, n, writer);
		writer.Key("spirit");
		LcfStruct<std::vector<int16_t>>::ReadLcf(stream, n, writer);
		writer.Key("agility");
		LcfStruct<std::vector<int16_t>>::ReadLcf(stream, n, writer);

		writer.EndObject();
#ifdef LCF_DEBUG_TRACE
		printf("  %s\n", ref.c_str());
#endif
	}
	/*static void WriteLcf(const std::string& ref, LcfWriter& stream) {
	stream.Write(ref);
	}
	static int LcfSize(const std::string& ref, LcfWriter& stream) {
	return stream.Decode(ref).size();
	}
	static void WriteXml(const std::string& ref, XmlWriter& stream) {
	stream.Write(ref);
	}
	static void ParseXml(std::string& ref, const std::string& data) {
	XmlReader::Read(ref, data);
	}*/
};

template<>
struct LcfStruct<RPG::EventCommand> {
	static void ReadLcf(LcfReader& stream, uint32_t length, Writer<StringBuffer>& writer) {
		writer.StartObject();

		writer.Key("code");
		int code = stream.ReadInt();
		writer.Int(code);

		if (code != 0) {
			int indent = stream.ReadInt();
			if (indent > 0) {
				writer.Key("indent");
				writer.Int(indent);
			}

			int str_len = stream.ReadInt();
			if (str_len > 0) {
				writer.Key("string");
				std::string str;
				stream.ReadString(str, str_len);
				writer.String(str);
			}

			int params = stream.ReadInt();
			if (params > 0) {
				writer.Key("parameters");
				writer.StartArray();
				for (int i = params; i > 0; i--) {
					writer.Int(stream.ReadInt());
				}
				writer.EndArray();
			}
		}

		writer.EndObject();
	}
	/*static void WriteLcf(const std::string& ref, LcfWriter& stream) {
	stream.Write(ref);
	}
	static int LcfSize(const std::string& ref, LcfWriter& stream) {
	return stream.Decode(ref).size();
	}
	static void WriteXml(const std::string& ref, XmlWriter& stream) {
	stream.Write(ref);
	}
	static void ParseXml(std::string& ref, const std::string& data) {
	XmlReader::Read(ref, data);
	}*/
};

template<>
struct LcfStruct<std::vector<RPG::EventCommand>> {
	static void ReadLcf(LcfReader& stream, uint32_t length, Writer<StringBuffer>& writer) {
		writer.StartArray();

		// Event Commands is a special array
		// Has no size information. Is terminated by 4 times 0x00.
		unsigned long startpos = stream.Tell();
		unsigned long endpos = startpos + length;

		for (;;) {
			uint8_t ch;
			stream.Read(ch);
			if (ch == 0) {
				stream.Seek(3, LcfReader::FromCurrent);
				break;
			}

			if (stream.Tell() >= endpos) {
				stream.Seek(endpos, LcfReader::FromStart);
				fprintf(stderr, "Event command corrupted at %d\n", stream.Tell());
				for (;;) {
					// Try finding the real end of the event command (4 0-bytes)
					int i = 0;
					for (; i < 4; ++i) {
						stream.Read(ch);

						if (ch != 0) {
							break;
						}
					}

					if (i == 4 || stream.Eof()) {
						break;
					}
				}

				break;
			}

			stream.Ungetch(ch);
			//RPG::EventCommand command;
			LcfStruct<RPG::EventCommand>::ReadLcf(stream, 0, writer);
			//event_commands.push_back(command);
		}

		writer.EndArray();
	}
	/*static void WriteLcf(const std::string& ref, LcfWriter& stream) {
	stream.Write(ref);
	}
	static int LcfSize(const std::string& ref, LcfWriter& stream) {
	return stream.Decode(ref).size();
	}
	static void WriteXml(const std::string& ref, XmlWriter& stream) {
	stream.Write(ref);
	}
	static void ParseXml(std::string& ref, const std::string& data) {
	XmlReader::Read(ref, data);
	}*/
};


#endif
