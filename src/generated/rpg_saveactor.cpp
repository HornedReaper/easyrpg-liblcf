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
#include "rpg_saveactor.h"

RPG::SaveActor::SaveActor(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

const std::string& RPG::SaveActor::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::SaveActor::GetName() {
	return getter<std::string&>("name");
}

void RPG::SaveActor::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

const std::string& RPG::SaveActor::GetTitle() const {
	return getter<const std::string&>("title");
}

std::string& RPG::SaveActor::GetTitle() {
	return getter<std::string&>("title");
}

void RPG::SaveActor::SetTitle(const std::string& title) {
	setter<std::string>("title", title);
}

const std::string& RPG::SaveActor::GetSpriteName() const {
	return getter<const std::string&>("sprite_name");
}

std::string& RPG::SaveActor::GetSpriteName() {
	return getter<std::string&>("sprite_name");
}

void RPG::SaveActor::SetSpriteName(const std::string& sprite_name) {
	setter<std::string>("sprite_name", sprite_name);
}

int RPG::SaveActor::GetSpriteId() const {
	return getter<int>("sprite_id");
}

void RPG::SaveActor::SetSpriteId(int sprite_id) {
	setter<int>("sprite_id", sprite_id);
}

int RPG::SaveActor::GetSpriteFlags() const {
	return getter<int>("sprite_flags");
}

void RPG::SaveActor::SetSpriteFlags(int sprite_flags) {
	setter<int>("sprite_flags", sprite_flags);
}

const std::string& RPG::SaveActor::GetFaceName() const {
	return getter<const std::string&>("face_name");
}

std::string& RPG::SaveActor::GetFaceName() {
	return getter<std::string&>("face_name");
}

void RPG::SaveActor::SetFaceName(const std::string& face_name) {
	setter<std::string>("face_name", face_name);
}

int RPG::SaveActor::GetFaceId() const {
	return getter<int>("face_id");
}

void RPG::SaveActor::SetFaceId(int face_id) {
	setter<int>("face_id", face_id);
}

int RPG::SaveActor::GetLevel() const {
	return getter<int>("level");
}

void RPG::SaveActor::SetLevel(int level) {
	setter<int>("level", level);
}

int RPG::SaveActor::GetExp() const {
	return getter<int>("exp");
}

void RPG::SaveActor::SetExp(int exp) {
	setter<int>("exp", exp);
}

int RPG::SaveActor::GetHpMod() const {
	return getter<int>("hp_mod");
}

void RPG::SaveActor::SetHpMod(int hp_mod) {
	setter<int>("hp_mod", hp_mod);
}

int RPG::SaveActor::GetSpMod() const {
	return getter<int>("sp_mod");
}

void RPG::SaveActor::SetSpMod(int sp_mod) {
	setter<int>("sp_mod", sp_mod);
}

int RPG::SaveActor::GetAttackMod() const {
	return getter<int>("attack_mod");
}

void RPG::SaveActor::SetAttackMod(int attack_mod) {
	setter<int>("attack_mod", attack_mod);
}

int RPG::SaveActor::GetDefenseMod() const {
	return getter<int>("defense_mod");
}

void RPG::SaveActor::SetDefenseMod(int defense_mod) {
	setter<int>("defense_mod", defense_mod);
}

int RPG::SaveActor::GetSpiritMod() const {
	return getter<int>("spirit_mod");
}

void RPG::SaveActor::SetSpiritMod(int spirit_mod) {
	setter<int>("spirit_mod", spirit_mod);
}

int RPG::SaveActor::GetAgilityMod() const {
	return getter<int>("agility_mod");
}

void RPG::SaveActor::SetAgilityMod(int agility_mod) {
	setter<int>("agility_mod", agility_mod);
}

int RPG::SaveActor::GetSkillsSize() const {
	return getter<int>("skills_size");
}

void RPG::SaveActor::SetSkillsSize(int skills_size) {
	setter<int>("skills_size", skills_size);
}

const std::vector<int16_t>& RPG::SaveActor::GetSkills() const {
	return vector_getter<const std::vector<int16_t>&, int16_t>("skills");
}

std::vector<int16_t>& RPG::SaveActor::GetSkills() {
	return vector_getter<std::vector<int16_t>&, int16_t>("skills");
}

const std::vector<int16_t>& RPG::SaveActor::GetEquipped() const {
	return vector_getter<const std::vector<int16_t>&, int16_t>("equipped");
}

std::vector<int16_t>& RPG::SaveActor::GetEquipped() {
	return vector_getter<std::vector<int16_t>&, int16_t>("equipped");
}

int RPG::SaveActor::GetCurrentHp() const {
	return getter<int>("current_hp");
}

void RPG::SaveActor::SetCurrentHp(int current_hp) {
	setter<int>("current_hp", current_hp);
}

int RPG::SaveActor::GetCurrentSp() const {
	return getter<int>("current_sp");
}

void RPG::SaveActor::SetCurrentSp(int current_sp) {
	setter<int>("current_sp", current_sp);
}

const std::vector<uint32_t>& RPG::SaveActor::GetBattleCommands() const {
	return vector_getter<const std::vector<uint32_t>&, uint32_t>("battle_commands");
}

std::vector<uint32_t>& RPG::SaveActor::GetBattleCommands() {
	return vector_getter<std::vector<uint32_t>&, uint32_t>("battle_commands");
}

int RPG::SaveActor::GetStatusSize() const {
	return getter<int>("status_size");
}

void RPG::SaveActor::SetStatusSize(int status_size) {
	setter<int>("status_size", status_size);
}

const std::vector<int16_t>& RPG::SaveActor::GetStatus() const {
	return vector_getter<const std::vector<int16_t>&, int16_t>("status");
}

std::vector<int16_t>& RPG::SaveActor::GetStatus() {
	return vector_getter<std::vector<int16_t>&, int16_t>("status");
}

bool RPG::SaveActor::GetChangedClass() const {
	return getter<bool>("changed_class");
}

void RPG::SaveActor::SetChangedClass(bool changed_class) {
	setter<bool>("changed_class", changed_class);
}

int RPG::SaveActor::GetClassId() const {
	return getter<int>("class_id");
}

void RPG::SaveActor::SetClassId(int class_id) {
	setter<int>("class_id", class_id);
}

int RPG::SaveActor::GetRow() const {
	return getter<int>("row");
}

void RPG::SaveActor::SetRow(int row) {
	setter<int>("row", row);
}

bool RPG::SaveActor::GetTwoWeapon() const {
	return getter<bool>("two_weapon");
}

void RPG::SaveActor::SetTwoWeapon(bool two_weapon) {
	setter<bool>("two_weapon", two_weapon);
}

bool RPG::SaveActor::GetLockEquipment() const {
	return getter<bool>("lock_equipment");
}

void RPG::SaveActor::SetLockEquipment(bool lock_equipment) {
	setter<bool>("lock_equipment", lock_equipment);
}

bool RPG::SaveActor::GetAutoBattle() const {
	return getter<bool>("auto_battle");
}

void RPG::SaveActor::SetAutoBattle(bool auto_battle) {
	setter<bool>("auto_battle", auto_battle);
}

bool RPG::SaveActor::GetSuperGuard() const {
	return getter<bool>("super_guard");
}

void RPG::SaveActor::SetSuperGuard(bool super_guard) {
	setter<bool>("super_guard", super_guard);
}

int RPG::SaveActor::GetBattlerAnimation() const {
	return getter<int>("battler_animation");
}

void RPG::SaveActor::SetBattlerAnimation(int battler_animation) {
	setter<int>("battler_animation", battler_animation);
}

