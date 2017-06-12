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
#include "rpg_saveeventcommands.h"


int RPG::SaveEventCommands::GetCommandsSize() const {
	return commands_size;
}

void RPG::SaveEventCommands::SetCommandsSize(int commands_size) {
	this->commands_size = commands_size;
}

const std::vector<RPG::EventCommand>& RPG::SaveEventCommands::GetCommands() const  {
	return commands;
}

std::vector<RPG::EventCommand>& RPG::SaveEventCommands::GetCommands() {
	return commands;
}

void RPG::SaveEventCommands::SetCommands(const std::vector<RPG::EventCommand>& commands) {
	this->commands = commands;
}

int RPG::SaveEventCommands::GetCurrentCommand() const {
	return current_command;
}

void RPG::SaveEventCommands::SetCurrentCommand(int current_command) {
	this->current_command = current_command;
}

int RPG::SaveEventCommands::GetEventId() const {
	return event_id;
}

void RPG::SaveEventCommands::SetEventId(int event_id) {
	this->event_id = event_id;
}

bool RPG::SaveEventCommands::GetActioned() const {
	return actioned;
}

void RPG::SaveEventCommands::SetActioned(bool actioned) {
	this->actioned = actioned;
}

int RPG::SaveEventCommands::GetUnknown15SubcommandPathSize() const {
	return unknown_15_subcommand_path_size;
}

void RPG::SaveEventCommands::SetUnknown15SubcommandPathSize(int unknown_15_subcommand_path_size) {
	this->unknown_15_subcommand_path_size = unknown_15_subcommand_path_size;
}

const std::vector<uint8_t>& RPG::SaveEventCommands::GetUnknown16SubcommandPath() const  {
	return unknown_16_subcommand_path;
}

std::vector<uint8_t>& RPG::SaveEventCommands::GetUnknown16SubcommandPath() {
	return unknown_16_subcommand_path;
}

void RPG::SaveEventCommands::SetUnknown16SubcommandPath(const std::vector<uint8_t>& unknown_16_subcommand_path) {
	this->unknown_16_subcommand_path = unknown_16_subcommand_path;
}

