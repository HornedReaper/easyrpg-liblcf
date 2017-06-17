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
#include "rpg_actor.h"


const std::string& RPG::Actor::GetName() const  {
	return name;
}

std::string& RPG::Actor::GetName() {
	return name;
}

void RPG::Actor::SetName(const std::string& name) {
	this->name = name;
}

const std::string& RPG::Actor::GetTitle() const  {
	return title;
}

std::string& RPG::Actor::GetTitle() {
	return title;
}

void RPG::Actor::SetTitle(const std::string& title) {
	this->title = title;
}

const std::string& RPG::Actor::GetCharacterName() const  {
	return character_name;
}

std::string& RPG::Actor::GetCharacterName() {
	return character_name;
}

void RPG::Actor::SetCharacterName(const std::string& character_name) {
	this->character_name = character_name;
}

int RPG::Actor::GetCharacterIndex() const {
	return character_index;
}

void RPG::Actor::SetCharacterIndex(int character_index) {
	this->character_index = character_index;
}

bool RPG::Actor::GetTransparent() const {
	return transparent;
}

void RPG::Actor::SetTransparent(bool transparent) {
	this->transparent = transparent;
}

int RPG::Actor::GetInitialLevel() const {
	return initial_level;
}

void RPG::Actor::SetInitialLevel(int initial_level) {
	this->initial_level = initial_level;
}

int RPG::Actor::GetFinalLevel() const {
	return final_level;
}

void RPG::Actor::SetFinalLevel(int final_level) {
	this->final_level = final_level;
}

bool RPG::Actor::GetCriticalHit() const {
	return critical_hit;
}

void RPG::Actor::SetCriticalHit(bool critical_hit) {
	this->critical_hit = critical_hit;
}

int RPG::Actor::GetCriticalHitChance() const {
	return critical_hit_chance;
}

void RPG::Actor::SetCriticalHitChance(int critical_hit_chance) {
	this->critical_hit_chance = critical_hit_chance;
}

const std::string& RPG::Actor::GetFaceName() const  {
	return face_name;
}

std::string& RPG::Actor::GetFaceName() {
	return face_name;
}

void RPG::Actor::SetFaceName(const std::string& face_name) {
	this->face_name = face_name;
}

int RPG::Actor::GetFaceIndex() const {
	return face_index;
}

void RPG::Actor::SetFaceIndex(int face_index) {
	this->face_index = face_index;
}

bool RPG::Actor::GetTwoWeapon() const {
	return two_weapon;
}

void RPG::Actor::SetTwoWeapon(bool two_weapon) {
	this->two_weapon = two_weapon;
}

bool RPG::Actor::GetLockEquipment() const {
	return lock_equipment;
}

void RPG::Actor::SetLockEquipment(bool lock_equipment) {
	this->lock_equipment = lock_equipment;
}

bool RPG::Actor::GetAutoBattle() const {
	return auto_battle;
}

void RPG::Actor::SetAutoBattle(bool auto_battle) {
	this->auto_battle = auto_battle;
}

bool RPG::Actor::GetSuperGuard() const {
	return super_guard;
}

void RPG::Actor::SetSuperGuard(bool super_guard) {
	this->super_guard = super_guard;
}

const RPG::Parameters& RPG::Actor::GetParameters() const  {
	return parameters;
}

RPG::Parameters& RPG::Actor::GetParameters() {
	return parameters;
}

void RPG::Actor::SetParameters(const RPG::Parameters& parameters) {
	this->parameters = parameters;
}

int RPG::Actor::GetExpBase() const {
	return exp_base;
}

void RPG::Actor::SetExpBase(int exp_base) {
	this->exp_base = exp_base;
}

int RPG::Actor::GetExpInflation() const {
	return exp_inflation;
}

void RPG::Actor::SetExpInflation(int exp_inflation) {
	this->exp_inflation = exp_inflation;
}

int RPG::Actor::GetExpCorrection() const {
	return exp_correction;
}

void RPG::Actor::SetExpCorrection(int exp_correction) {
	this->exp_correction = exp_correction;
}

const RPG::Equipment& RPG::Actor::GetInitialEquipment() const  {
	return initial_equipment;
}

RPG::Equipment& RPG::Actor::GetInitialEquipment() {
	return initial_equipment;
}

void RPG::Actor::SetInitialEquipment(const RPG::Equipment& initial_equipment) {
	this->initial_equipment = initial_equipment;
}

int RPG::Actor::GetUnarmedAnimation() const {
	return unarmed_animation;
}

void RPG::Actor::SetUnarmedAnimation(int unarmed_animation) {
	this->unarmed_animation = unarmed_animation;
}

int RPG::Actor::GetClassId() const {
	return class_id;
}

void RPG::Actor::SetClassId(int class_id) {
	this->class_id = class_id;
}

int RPG::Actor::GetBattleX() const {
	return battle_x;
}

void RPG::Actor::SetBattleX(int battle_x) {
	this->battle_x = battle_x;
}

int RPG::Actor::GetBattleY() const {
	return battle_y;
}

void RPG::Actor::SetBattleY(int battle_y) {
	this->battle_y = battle_y;
}

int RPG::Actor::GetBattlerAnimation() const {
	return battler_animation;
}

void RPG::Actor::SetBattlerAnimation(int battler_animation) {
	this->battler_animation = battler_animation;
}

const LcfVector<RPG::Learning>& RPG::Actor::GetSkills() const  {
	return skills;
}

LcfVector<RPG::Learning>& RPG::Actor::GetSkills() {
	return skills;
}

void RPG::Actor::SetSkills(const LcfVector<RPG::Learning>& skills) {
	this->skills = skills;
}

bool RPG::Actor::GetRenameSkill() const {
	return rename_skill;
}

void RPG::Actor::SetRenameSkill(bool rename_skill) {
	this->rename_skill = rename_skill;
}

const std::string& RPG::Actor::GetSkillName() const  {
	return skill_name;
}

std::string& RPG::Actor::GetSkillName() {
	return skill_name;
}

void RPG::Actor::SetSkillName(const std::string& skill_name) {
	this->skill_name = skill_name;
}


const LcfVector<uint8_t>& RPG::Actor::GetStateRanks() const  {
	return state_ranks;
}

LcfVector<uint8_t>& RPG::Actor::GetStateRanks() {
	return state_ranks;
}

void RPG::Actor::SetStateRanks(const LcfVector<uint8_t>& state_ranks) {
	this->state_ranks = state_ranks;
}


const LcfVector<uint8_t>& RPG::Actor::GetAttributeRanks() const  {
	return attribute_ranks;
}

LcfVector<uint8_t>& RPG::Actor::GetAttributeRanks() {
	return attribute_ranks;
}

void RPG::Actor::SetAttributeRanks(const LcfVector<uint8_t>& attribute_ranks) {
	this->attribute_ranks = attribute_ranks;
}

const LcfVector<uint32_t>& RPG::Actor::GetBattleCommands() const  {
	return battle_commands;
}

LcfVector<uint32_t>& RPG::Actor::GetBattleCommands() {
	return battle_commands;
}

void RPG::Actor::SetBattleCommands(const LcfVector<uint32_t>& battle_commands) {
	this->battle_commands = battle_commands;
}

