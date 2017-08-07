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

RPG::BattleCommands::BattleCommands(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

int RPG::BattleCommands::GetPlacement() const {
	return getter<int>("placement");
}

void RPG::BattleCommands::SetPlacement(int placement) {
	setter<int>("placement", placement);
}

int RPG::BattleCommands::GetDeathHandler1() const {
	return getter<int>("death_handler1");
}

void RPG::BattleCommands::SetDeathHandler1(int death_handler1) {
	setter<int>("death_handler1", death_handler1);
}

int RPG::BattleCommands::GetRow() const {
	return getter<int>("row");
}

void RPG::BattleCommands::SetRow(int row) {
	setter<int>("row", row);
}

int RPG::BattleCommands::GetBattleType() const {
	return getter<int>("battle_type");
}

void RPG::BattleCommands::SetBattleType(int battle_type) {
	setter<int>("battle_type", battle_type);
}

int RPG::BattleCommands::GetUnknown09() const {
	return getter<int>("unknown_09");
}

void RPG::BattleCommands::SetUnknown09(int unknown_09) {
	setter<int>("unknown_09", unknown_09);
}

const std::vector<RPG::BattleCommand>& RPG::BattleCommands::GetCommands() const {
	return vector_getter<const std::vector<RPG::BattleCommand>&, RPG::BattleCommand>("commands");
}

std::vector<RPG::BattleCommand>& RPG::BattleCommands::GetCommands() {
	return vector_getter<std::vector<RPG::BattleCommand>&, RPG::BattleCommand>("commands");
}

int RPG::BattleCommands::GetDeathHandler2() const {
	return getter<int>("death_handler2");
}

void RPG::BattleCommands::SetDeathHandler2(int death_handler2) {
	setter<int>("death_handler2", death_handler2);
}

int RPG::BattleCommands::GetDeathEvent() const {
	return getter<int>("death_event");
}

void RPG::BattleCommands::SetDeathEvent(int death_event) {
	setter<int>("death_event", death_event);
}

int RPG::BattleCommands::GetWindowSize() const {
	return getter<int>("window_size");
}

void RPG::BattleCommands::SetWindowSize(int window_size) {
	setter<int>("window_size", window_size);
}

int RPG::BattleCommands::GetTransparency() const {
	return getter<int>("transparency");
}

void RPG::BattleCommands::SetTransparency(int transparency) {
	setter<int>("transparency", transparency);
}

bool RPG::BattleCommands::GetTeleport() const {
	return getter<bool>("teleport");
}

void RPG::BattleCommands::SetTeleport(bool teleport) {
	setter<bool>("teleport", teleport);
}

int RPG::BattleCommands::GetTeleportId() const {
	return getter<int>("teleport_id");
}

void RPG::BattleCommands::SetTeleportId(int teleport_id) {
	setter<int>("teleport_id", teleport_id);
}

int RPG::BattleCommands::GetTeleportX() const {
	return getter<int>("teleport_x");
}

void RPG::BattleCommands::SetTeleportX(int teleport_x) {
	setter<int>("teleport_x", teleport_x);
}

int RPG::BattleCommands::GetTeleportY() const {
	return getter<int>("teleport_y");
}

void RPG::BattleCommands::SetTeleportY(int teleport_y) {
	setter<int>("teleport_y", teleport_y);
}

int RPG::BattleCommands::GetTeleportFace() const {
	return getter<int>("teleport_face");
}

void RPG::BattleCommands::SetTeleportFace(int teleport_face) {
	setter<int>("teleport_face", teleport_face);
}

