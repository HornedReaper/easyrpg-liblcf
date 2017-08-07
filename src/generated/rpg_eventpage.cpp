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
#include "rpg_eventpage.h"

RPG::EventPage::EventPage(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

const RPG::EventPageCondition& RPG::EventPage::GetCondition() const {
	return getter<const RPG::EventPageCondition&>("condition");
}

RPG::EventPageCondition& RPG::EventPage::GetCondition() {
	return getter<RPG::EventPageCondition&>("condition");
}

void RPG::EventPage::SetCondition(const RPG::EventPageCondition& condition) {
	setter<RPG::EventPageCondition>("condition", condition);
}

const std::string& RPG::EventPage::GetCharacterName() const {
	return getter<const std::string&>("character_name");
}

std::string& RPG::EventPage::GetCharacterName() {
	return getter<std::string&>("character_name");
}

void RPG::EventPage::SetCharacterName(const std::string& character_name) {
	setter<std::string>("character_name", character_name);
}

int RPG::EventPage::GetCharacterIndex() const {
	return getter<int>("character_index");
}

void RPG::EventPage::SetCharacterIndex(int character_index) {
	setter<int>("character_index", character_index);
}

int RPG::EventPage::GetCharacterDirection() const {
	return getter<int>("character_direction");
}

void RPG::EventPage::SetCharacterDirection(int character_direction) {
	setter<int>("character_direction", character_direction);
}

int RPG::EventPage::GetCharacterPattern() const {
	return getter<int>("character_pattern");
}

void RPG::EventPage::SetCharacterPattern(int character_pattern) {
	setter<int>("character_pattern", character_pattern);
}

bool RPG::EventPage::GetTranslucent() const {
	return getter<bool>("translucent");
}

void RPG::EventPage::SetTranslucent(bool translucent) {
	setter<bool>("translucent", translucent);
}

int RPG::EventPage::GetMoveType() const {
	return getter<int>("move_type");
}

void RPG::EventPage::SetMoveType(int move_type) {
	setter<int>("move_type", move_type);
}

int RPG::EventPage::GetMoveFrequency() const {
	return getter<int>("move_frequency");
}

void RPG::EventPage::SetMoveFrequency(int move_frequency) {
	setter<int>("move_frequency", move_frequency);
}

int RPG::EventPage::GetTrigger() const {
	return getter<int>("trigger");
}

void RPG::EventPage::SetTrigger(int trigger) {
	setter<int>("trigger", trigger);
}

int RPG::EventPage::GetLayer() const {
	return getter<int>("layer");
}

void RPG::EventPage::SetLayer(int layer) {
	setter<int>("layer", layer);
}

bool RPG::EventPage::GetOverlapForbidden() const {
	return getter<bool>("overlap_forbidden");
}

void RPG::EventPage::SetOverlapForbidden(bool overlap_forbidden) {
	setter<bool>("overlap_forbidden", overlap_forbidden);
}

int RPG::EventPage::GetAnimationType() const {
	return getter<int>("animation_type");
}

void RPG::EventPage::SetAnimationType(int animation_type) {
	setter<int>("animation_type", animation_type);
}

int RPG::EventPage::GetMoveSpeed() const {
	return getter<int>("move_speed");
}

void RPG::EventPage::SetMoveSpeed(int move_speed) {
	setter<int>("move_speed", move_speed);
}

const RPG::MoveRoute& RPG::EventPage::GetMoveRoute() const {
	return getter<const RPG::MoveRoute&>("move_route");
}

RPG::MoveRoute& RPG::EventPage::GetMoveRoute() {
	return getter<RPG::MoveRoute&>("move_route");
}

void RPG::EventPage::SetMoveRoute(const RPG::MoveRoute& move_route) {
	setter<RPG::MoveRoute>("move_route", move_route);
}


const std::vector<RPG::EventCommand>& RPG::EventPage::GetEventCommands() const {
	return vector_getter<const std::vector<RPG::EventCommand>&, RPG::EventCommand>("event_commands");
}

std::vector<RPG::EventCommand>& RPG::EventPage::GetEventCommands() {
	return vector_getter<std::vector<RPG::EventCommand>&, RPG::EventCommand>("event_commands");
}

