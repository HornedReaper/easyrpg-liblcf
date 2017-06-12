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


const std::string& RPG::SaveActor::GetName() const  {
	return name;
}

std::string& RPG::SaveActor::GetName() {
	return name;
}

void RPG::SaveActor::SetName(const std::string& name) {
	this->name = name;
}

const std::string& RPG::SaveActor::GetTitle() const  {
	return title;
}

std::string& RPG::SaveActor::GetTitle() {
	return title;
}

void RPG::SaveActor::SetTitle(const std::string& title) {
	this->title = title;
}

const std::string& RPG::SaveActor::GetSpriteName() const  {
	return sprite_name;
}

std::string& RPG::SaveActor::GetSpriteName() {
	return sprite_name;
}

void RPG::SaveActor::SetSpriteName(const std::string& sprite_name) {
	this->sprite_name = sprite_name;
}

int RPG::SaveActor::GetSpriteId() const {
	return sprite_id;
}

void RPG::SaveActor::SetSpriteId(int sprite_id) {
	this->sprite_id = sprite_id;
}

int RPG::SaveActor::GetSpriteFlags() const {
	return sprite_flags;
}

void RPG::SaveActor::SetSpriteFlags(int sprite_flags) {
	this->sprite_flags = sprite_flags;
}

const std::string& RPG::SaveActor::GetFaceName() const  {
	return face_name;
}

std::string& RPG::SaveActor::GetFaceName() {
	return face_name;
}

void RPG::SaveActor::SetFaceName(const std::string& face_name) {
	this->face_name = face_name;
}

int RPG::SaveActor::GetFaceId() const {
	return face_id;
}

void RPG::SaveActor::SetFaceId(int face_id) {
	this->face_id = face_id;
}

int RPG::SaveActor::GetLevel() const {
	return level;
}

void RPG::SaveActor::SetLevel(int level) {
	this->level = level;
}

int RPG::SaveActor::GetExp() const {
	return exp;
}

void RPG::SaveActor::SetExp(int exp) {
	this->exp = exp;
}

int RPG::SaveActor::GetHpMod() const {
	return hp_mod;
}

void RPG::SaveActor::SetHpMod(int hp_mod) {
	this->hp_mod = hp_mod;
}

int RPG::SaveActor::GetSpMod() const {
	return sp_mod;
}

void RPG::SaveActor::SetSpMod(int sp_mod) {
	this->sp_mod = sp_mod;
}

int RPG::SaveActor::GetAttackMod() const {
	return attack_mod;
}

void RPG::SaveActor::SetAttackMod(int attack_mod) {
	this->attack_mod = attack_mod;
}

int RPG::SaveActor::GetDefenseMod() const {
	return defense_mod;
}

void RPG::SaveActor::SetDefenseMod(int defense_mod) {
	this->defense_mod = defense_mod;
}

int RPG::SaveActor::GetSpiritMod() const {
	return spirit_mod;
}

void RPG::SaveActor::SetSpiritMod(int spirit_mod) {
	this->spirit_mod = spirit_mod;
}

int RPG::SaveActor::GetAgilityMod() const {
	return agility_mod;
}

void RPG::SaveActor::SetAgilityMod(int agility_mod) {
	this->agility_mod = agility_mod;
}

int RPG::SaveActor::GetSkillsSize() const {
	return skills_size;
}

void RPG::SaveActor::SetSkillsSize(int skills_size) {
	this->skills_size = skills_size;
}

const std::vector<int16_t>& RPG::SaveActor::GetSkills() const  {
	return skills;
}

std::vector<int16_t>& RPG::SaveActor::GetSkills() {
	return skills;
}

void RPG::SaveActor::SetSkills(const std::vector<int16_t>& skills) {
	this->skills = skills;
}

const std::vector<int16_t>& RPG::SaveActor::GetEquipped() const  {
	return equipped;
}

std::vector<int16_t>& RPG::SaveActor::GetEquipped() {
	return equipped;
}

void RPG::SaveActor::SetEquipped(const std::vector<int16_t>& equipped) {
	this->equipped = equipped;
}

int RPG::SaveActor::GetCurrentHp() const {
	return current_hp;
}

void RPG::SaveActor::SetCurrentHp(int current_hp) {
	this->current_hp = current_hp;
}

int RPG::SaveActor::GetCurrentSp() const {
	return current_sp;
}

void RPG::SaveActor::SetCurrentSp(int current_sp) {
	this->current_sp = current_sp;
}

const std::vector<uint32_t>& RPG::SaveActor::GetBattleCommands() const  {
	return battle_commands;
}

std::vector<uint32_t>& RPG::SaveActor::GetBattleCommands() {
	return battle_commands;
}

void RPG::SaveActor::SetBattleCommands(const std::vector<uint32_t>& battle_commands) {
	this->battle_commands = battle_commands;
}

int RPG::SaveActor::GetStatusSize() const {
	return status_size;
}

void RPG::SaveActor::SetStatusSize(int status_size) {
	this->status_size = status_size;
}

const std::vector<int16_t>& RPG::SaveActor::GetStatus() const  {
	return status;
}

std::vector<int16_t>& RPG::SaveActor::GetStatus() {
	return status;
}

void RPG::SaveActor::SetStatus(const std::vector<int16_t>& status) {
	this->status = status;
}

bool RPG::SaveActor::GetChangedClass() const {
	return changed_class;
}

void RPG::SaveActor::SetChangedClass(bool changed_class) {
	this->changed_class = changed_class;
}

int RPG::SaveActor::GetClassId() const {
	return class_id;
}

void RPG::SaveActor::SetClassId(int class_id) {
	this->class_id = class_id;
}

int RPG::SaveActor::GetRow() const {
	return row;
}

void RPG::SaveActor::SetRow(int row) {
	this->row = row;
}

bool RPG::SaveActor::GetTwoWeapon() const {
	return two_weapon;
}

void RPG::SaveActor::SetTwoWeapon(bool two_weapon) {
	this->two_weapon = two_weapon;
}

bool RPG::SaveActor::GetLockEquipment() const {
	return lock_equipment;
}

void RPG::SaveActor::SetLockEquipment(bool lock_equipment) {
	this->lock_equipment = lock_equipment;
}

bool RPG::SaveActor::GetAutoBattle() const {
	return auto_battle;
}

void RPG::SaveActor::SetAutoBattle(bool auto_battle) {
	this->auto_battle = auto_battle;
}

bool RPG::SaveActor::GetSuperGuard() const {
	return super_guard;
}

void RPG::SaveActor::SetSuperGuard(bool super_guard) {
	this->super_guard = super_guard;
}

int RPG::SaveActor::GetBattlerAnimation() const {
	return battler_animation;
}

void RPG::SaveActor::SetBattlerAnimation(int battler_animation) {
	this->battler_animation = battler_animation;
}

