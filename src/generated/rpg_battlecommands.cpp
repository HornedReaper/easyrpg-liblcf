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
#include "rpg_battlecommands.h"


int RPG::BattleCommands::GetPlacement() const {
	return placement;
}

void RPG::BattleCommands::SetPlacement(int placement) {
	this->placement = placement;
}

int RPG::BattleCommands::GetDeathHandler1() const {
	return death_handler1;
}

void RPG::BattleCommands::SetDeathHandler1(int death_handler1) {
	this->death_handler1 = death_handler1;
}

int RPG::BattleCommands::GetRow() const {
	return row;
}

void RPG::BattleCommands::SetRow(int row) {
	this->row = row;
}

int RPG::BattleCommands::GetBattleType() const {
	return battle_type;
}

void RPG::BattleCommands::SetBattleType(int battle_type) {
	this->battle_type = battle_type;
}

int RPG::BattleCommands::GetUnknown09() const {
	return unknown_09;
}

void RPG::BattleCommands::SetUnknown09(int unknown_09) {
	this->unknown_09 = unknown_09;
}

const std::vector<RPG::BattleCommand>& RPG::BattleCommands::GetCommands() const  {
	return commands;
}

std::vector<RPG::BattleCommand>& RPG::BattleCommands::GetCommands() {
	return commands;
}

void RPG::BattleCommands::SetCommands(const std::vector<RPG::BattleCommand>& commands) {
	this->commands = commands;
}

int RPG::BattleCommands::GetDeathHandler2() const {
	return death_handler2;
}

void RPG::BattleCommands::SetDeathHandler2(int death_handler2) {
	this->death_handler2 = death_handler2;
}

int RPG::BattleCommands::GetDeathEvent() const {
	return death_event;
}

void RPG::BattleCommands::SetDeathEvent(int death_event) {
	this->death_event = death_event;
}

int RPG::BattleCommands::GetWindowSize() const {
	return window_size;
}

void RPG::BattleCommands::SetWindowSize(int window_size) {
	this->window_size = window_size;
}

int RPG::BattleCommands::GetTransparency() const {
	return transparency;
}

void RPG::BattleCommands::SetTransparency(int transparency) {
	this->transparency = transparency;
}

bool RPG::BattleCommands::GetTeleport() const {
	return teleport;
}

void RPG::BattleCommands::SetTeleport(bool teleport) {
	this->teleport = teleport;
}

int RPG::BattleCommands::GetTeleportId() const {
	return teleport_id;
}

void RPG::BattleCommands::SetTeleportId(int teleport_id) {
	this->teleport_id = teleport_id;
}

int RPG::BattleCommands::GetTeleportX() const {
	return teleport_x;
}

void RPG::BattleCommands::SetTeleportX(int teleport_x) {
	this->teleport_x = teleport_x;
}

int RPG::BattleCommands::GetTeleportY() const {
	return teleport_y;
}

void RPG::BattleCommands::SetTeleportY(int teleport_y) {
	this->teleport_y = teleport_y;
}

int RPG::BattleCommands::GetTeleportFace() const {
	return teleport_face;
}

void RPG::BattleCommands::SetTeleportFace(int teleport_face) {
	this->teleport_face = teleport_face;
}

