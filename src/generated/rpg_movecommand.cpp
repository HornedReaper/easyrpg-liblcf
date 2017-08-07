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
#include "rpg_movecommand.h"

RPG::MoveCommand::MoveCommand(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

int RPG::MoveCommand::GetCommandId() const {
	return getter<int>("command_id");
}

void RPG::MoveCommand::SetCommandId(int command_id) {
	setter<int>("command_id", command_id);
}

const std::string& RPG::MoveCommand::GetParameterString() const {
	return getter<const std::string&>("parameter_string");
}

std::string& RPG::MoveCommand::GetParameterString() {
	return getter<std::string&>("parameter_string");
}

void RPG::MoveCommand::SetParameterString(const std::string& parameter_string) {
	setter<std::string>("parameter_string", parameter_string);
}

int RPG::MoveCommand::GetParameterA() const {
	return getter<int>("parameter_a");
}

void RPG::MoveCommand::SetParameterA(int parameter_a) {
	setter<int>("parameter_a", parameter_a);
}

int RPG::MoveCommand::GetParameterB() const {
	return getter<int>("parameter_b");
}

void RPG::MoveCommand::SetParameterB(int parameter_b) {
	setter<int>("parameter_b", parameter_b);
}

int RPG::MoveCommand::GetParameterC() const {
	return getter<int>("parameter_c");
}

void RPG::MoveCommand::SetParameterC(int parameter_c) {
	setter<int>("parameter_c", parameter_c);
}

