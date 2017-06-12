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


const RPG::EventPageCondition& RPG::EventPage::GetCondition() const  {
	return condition;
}

RPG::EventPageCondition& RPG::EventPage::GetCondition() {
	return condition;
}

void RPG::EventPage::SetCondition(const RPG::EventPageCondition& condition) {
	this->condition = condition;
}

const std::string& RPG::EventPage::GetCharacterName() const  {
	return character_name;
}

std::string& RPG::EventPage::GetCharacterName() {
	return character_name;
}

void RPG::EventPage::SetCharacterName(const std::string& character_name) {
	this->character_name = character_name;
}

int RPG::EventPage::GetCharacterIndex() const {
	return character_index;
}

void RPG::EventPage::SetCharacterIndex(int character_index) {
	this->character_index = character_index;
}

int RPG::EventPage::GetCharacterDirection() const {
	return character_direction;
}

void RPG::EventPage::SetCharacterDirection(int character_direction) {
	this->character_direction = character_direction;
}

int RPG::EventPage::GetCharacterPattern() const {
	return character_pattern;
}

void RPG::EventPage::SetCharacterPattern(int character_pattern) {
	this->character_pattern = character_pattern;
}

bool RPG::EventPage::GetTranslucent() const {
	return translucent;
}

void RPG::EventPage::SetTranslucent(bool translucent) {
	this->translucent = translucent;
}

int RPG::EventPage::GetMoveType() const {
	return move_type;
}

void RPG::EventPage::SetMoveType(int move_type) {
	this->move_type = move_type;
}

int RPG::EventPage::GetMoveFrequency() const {
	return move_frequency;
}

void RPG::EventPage::SetMoveFrequency(int move_frequency) {
	this->move_frequency = move_frequency;
}

int RPG::EventPage::GetTrigger() const {
	return trigger;
}

void RPG::EventPage::SetTrigger(int trigger) {
	this->trigger = trigger;
}

int RPG::EventPage::GetLayer() const {
	return layer;
}

void RPG::EventPage::SetLayer(int layer) {
	this->layer = layer;
}

bool RPG::EventPage::GetOverlapForbidden() const {
	return overlap_forbidden;
}

void RPG::EventPage::SetOverlapForbidden(bool overlap_forbidden) {
	this->overlap_forbidden = overlap_forbidden;
}

int RPG::EventPage::GetAnimationType() const {
	return animation_type;
}

void RPG::EventPage::SetAnimationType(int animation_type) {
	this->animation_type = animation_type;
}

int RPG::EventPage::GetMoveSpeed() const {
	return move_speed;
}

void RPG::EventPage::SetMoveSpeed(int move_speed) {
	this->move_speed = move_speed;
}

const RPG::MoveRoute& RPG::EventPage::GetMoveRoute() const  {
	return move_route;
}

RPG::MoveRoute& RPG::EventPage::GetMoveRoute() {
	return move_route;
}

void RPG::EventPage::SetMoveRoute(const RPG::MoveRoute& move_route) {
	this->move_route = move_route;
}


const std::vector<RPG::EventCommand>& RPG::EventPage::GetEventCommands() const  {
	return event_commands;
}

std::vector<RPG::EventCommand>& RPG::EventPage::GetEventCommands() {
	return event_commands;
}

void RPG::EventPage::SetEventCommands(const std::vector<RPG::EventCommand>& event_commands) {
	this->event_commands = event_commands;
}

