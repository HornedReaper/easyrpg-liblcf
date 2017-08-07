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
#include "rpg_commonevent.h"

RPG::CommonEvent::CommonEvent(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

const std::string& RPG::CommonEvent::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::CommonEvent::GetName() {
	return getter<std::string&>("name");
}

void RPG::CommonEvent::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

int RPG::CommonEvent::GetTrigger() const {
	return getter<int>("trigger");
}

void RPG::CommonEvent::SetTrigger(int trigger) {
	setter<int>("trigger", trigger);
}

bool RPG::CommonEvent::GetSwitchFlag() const {
	return getter<bool>("switch_flag");
}

void RPG::CommonEvent::SetSwitchFlag(bool switch_flag) {
	setter<bool>("switch_flag", switch_flag);
}

int RPG::CommonEvent::GetSwitchId() const {
	return getter<int>("switch_id");
}

void RPG::CommonEvent::SetSwitchId(int switch_id) {
	setter<int>("switch_id", switch_id);
}


const std::vector<RPG::EventCommand>& RPG::CommonEvent::GetEventCommands() const {
	return vector_getter<const std::vector<RPG::EventCommand>&, RPG::EventCommand>("event_commands");
}

std::vector<RPG::EventCommand>& RPG::CommonEvent::GetEventCommands() {
	return vector_getter<std::vector<RPG::EventCommand>&, RPG::EventCommand>("event_commands");
}

