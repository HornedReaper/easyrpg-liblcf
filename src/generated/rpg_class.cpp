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
#include "rpg_class.h"

RPG::Class::Class(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

const std::string& RPG::Class::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::Class::GetName() {
	return getter<std::string&>("name");
}

void RPG::Class::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

bool RPG::Class::GetTwoWeapon() const {
	return getter<bool>("two_weapon");
}

void RPG::Class::SetTwoWeapon(bool two_weapon) {
	setter<bool>("two_weapon", two_weapon);
}

bool RPG::Class::GetLockEquipment() const {
	return getter<bool>("lock_equipment");
}

void RPG::Class::SetLockEquipment(bool lock_equipment) {
	setter<bool>("lock_equipment", lock_equipment);
}

bool RPG::Class::GetAutoBattle() const {
	return getter<bool>("auto_battle");
}

void RPG::Class::SetAutoBattle(bool auto_battle) {
	setter<bool>("auto_battle", auto_battle);
}

bool RPG::Class::GetSuperGuard() const {
	return getter<bool>("super_guard");
}

void RPG::Class::SetSuperGuard(bool super_guard) {
	setter<bool>("super_guard", super_guard);
}

const RPG::Parameters& RPG::Class::GetParameters() const {
	return getter<const RPG::Parameters&>("parameters");
}

RPG::Parameters& RPG::Class::GetParameters() {
	return getter<RPG::Parameters&>("parameters");
}

void RPG::Class::SetParameters(const RPG::Parameters& parameters) {
	setter<RPG::Parameters>("parameters", parameters);
}

int RPG::Class::GetExpBase() const {
	return getter<int>("exp_base");
}

void RPG::Class::SetExpBase(int exp_base) {
	setter<int>("exp_base", exp_base);
}

int RPG::Class::GetExpInflation() const {
	return getter<int>("exp_inflation");
}

void RPG::Class::SetExpInflation(int exp_inflation) {
	setter<int>("exp_inflation", exp_inflation);
}

int RPG::Class::GetExpCorrection() const {
	return getter<int>("exp_correction");
}

void RPG::Class::SetExpCorrection(int exp_correction) {
	setter<int>("exp_correction", exp_correction);
}

int RPG::Class::GetBattlerAnimation() const {
	return getter<int>("battler_animation");
}

void RPG::Class::SetBattlerAnimation(int battler_animation) {
	setter<int>("battler_animation", battler_animation);
}

const std::vector<RPG::Learning>& RPG::Class::GetSkills() const {
	return vector_getter<const std::vector<RPG::Learning>&, RPG::Learning>("skills");
}

std::vector<RPG::Learning>& RPG::Class::GetSkills() {
	return vector_getter<std::vector<RPG::Learning>&, RPG::Learning>("skills");
}


const std::vector<uint8_t>& RPG::Class::GetStateRanks() const {
	return vector_getter<const std::vector<uint8_t>&, uint8_t>("state_ranks");
}

std::vector<uint8_t>& RPG::Class::GetStateRanks() {
	return vector_getter<std::vector<uint8_t>&, uint8_t>("state_ranks");
}


const std::vector<uint8_t>& RPG::Class::GetAttributeRanks() const {
	return vector_getter<const std::vector<uint8_t>&, uint8_t>("attribute_ranks");
}

std::vector<uint8_t>& RPG::Class::GetAttributeRanks() {
	return vector_getter<std::vector<uint8_t>&, uint8_t>("attribute_ranks");
}

const std::vector<uint32_t>& RPG::Class::GetBattleCommands() const {
	return vector_getter<const std::vector<uint32_t>&, uint32_t>("battle_commands");
}

std::vector<uint32_t>& RPG::Class::GetBattleCommands() {
	return vector_getter<std::vector<uint32_t>&, uint32_t>("battle_commands");
}

