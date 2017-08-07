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


int RPG::MoveCommand::GetCommandId() const {
	return command_id;
}

void RPG::MoveCommand::SetCommandId(int command_id) {
	this->command_id = command_id;
}

const std::string& RPG::MoveCommand::GetParameterString() const  {
	return parameter_string;
}

std::string& RPG::MoveCommand::GetParameterString() {
	return parameter_string;
}

void RPG::MoveCommand::SetParameterString(const std::string& parameter_string) {
	this->parameter_string = parameter_string;
}

int RPG::MoveCommand::GetParameterA() const {
	return parameter_a;
}

void RPG::MoveCommand::SetParameterA(int parameter_a) {
	this->parameter_a = parameter_a;
}

int RPG::MoveCommand::GetParameterB() const {
	return parameter_b;
}

void RPG::MoveCommand::SetParameterB(int parameter_b) {
	this->parameter_b = parameter_b;
}

int RPG::MoveCommand::GetParameterC() const {
	return parameter_c;
}

void RPG::MoveCommand::SetParameterC(int parameter_c) {
	this->parameter_c = parameter_c;
}

