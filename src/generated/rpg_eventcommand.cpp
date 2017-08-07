/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2017 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

// Headers
#include "rpg_eventcommand.h"

RPG::EventCommand::EventCommand(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

int RPG::EventCommand::GetCode() const {
	return getter<int>("code");
}

void RPG::EventCommand::SetCode(int code) {
	setter<int>("code", code);
}

int RPG::EventCommand::GetIndent() const {
	return getter<int>("indent");
}

void RPG::EventCommand::SetIndent(int indent) {
	setter<int>("indent", indent);
}

const std::string& RPG::EventCommand::GetString() const {
	return getter<const std::string&>("string");
}

std::string& RPG::EventCommand::GetString() {
	return getter<std::string&>("string");
}

void RPG::EventCommand::SetString(const std::string& string) {
	setter<std::string>("string", string);
}

const std::vector<int>& RPG::EventCommand::GetParameters() const {
	return vector_getter<const std::vector<int>&, int>("parameters");
}

std::vector<int>& RPG::EventCommand::GetParameters() {
	return vector_getter<std::vector<int>&, int>("parameters");
}

