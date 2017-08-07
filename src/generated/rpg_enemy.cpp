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
#include "rpg_enemy.h"

RPG::Enemy::Enemy(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

const std::string& RPG::Enemy::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::Enemy::GetName() {
	return getter<std::string&>("name");
}

void RPG::Enemy::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

const std::string& RPG::Enemy::GetBattlerName() const {
	return getter<const std::string&>("battler_name");
}

std::string& RPG::Enemy::GetBattlerName() {
	return getter<std::string&>("battler_name");
}

void RPG::Enemy::SetBattlerName(const std::string& battler_name) {
	setter<std::string>("battler_name", battler_name);
}

int RPG::Enemy::GetBattlerHue() const {
	return getter<int>("battler_hue");
}

void RPG::Enemy::SetBattlerHue(int battler_hue) {
	setter<int>("battler_hue", battler_hue);
}

int RPG::Enemy::GetMaxHp() const {
	return getter<int>("max_hp");
}

void RPG::Enemy::SetMaxHp(int max_hp) {
	setter<int>("max_hp", max_hp);
}

int RPG::Enemy::GetMaxSp() const {
	return getter<int>("max_sp");
}

void RPG::Enemy::SetMaxSp(int max_sp) {
	setter<int>("max_sp", max_sp);
}

int RPG::Enemy::GetAttack() const {
	return getter<int>("attack");
}

void RPG::Enemy::SetAttack(int attack) {
	setter<int>("attack", attack);
}

int RPG::Enemy::GetDefense() const {
	return getter<int>("defense");
}

void RPG::Enemy::SetDefense(int defense) {
	setter<int>("defense", defense);
}

int RPG::Enemy::GetSpirit() const {
	return getter<int>("spirit");
}

void RPG::Enemy::SetSpirit(int spirit) {
	setter<int>("spirit", spirit);
}

int RPG::Enemy::GetAgility() const {
	return getter<int>("agility");
}

void RPG::Enemy::SetAgility(int agility) {
	setter<int>("agility", agility);
}

bool RPG::Enemy::GetTransparent() const {
	return getter<bool>("transparent");
}

void RPG::Enemy::SetTransparent(bool transparent) {
	setter<bool>("transparent", transparent);
}

int RPG::Enemy::GetExp() const {
	return getter<int>("exp");
}

void RPG::Enemy::SetExp(int exp) {
	setter<int>("exp", exp);
}

int RPG::Enemy::GetGold() const {
	return getter<int>("gold");
}

void RPG::Enemy::SetGold(int gold) {
	setter<int>("gold", gold);
}

int RPG::Enemy::GetDropId() const {
	return getter<int>("drop_id");
}

void RPG::Enemy::SetDropId(int drop_id) {
	setter<int>("drop_id", drop_id);
}

int RPG::Enemy::GetDropProb() const {
	return getter<int>("drop_prob");
}

void RPG::Enemy::SetDropProb(int drop_prob) {
	setter<int>("drop_prob", drop_prob);
}

bool RPG::Enemy::GetCriticalHit() const {
	return getter<bool>("critical_hit");
}

void RPG::Enemy::SetCriticalHit(bool critical_hit) {
	setter<bool>("critical_hit", critical_hit);
}

int RPG::Enemy::GetCriticalHitChance() const {
	return getter<int>("critical_hit_chance");
}

void RPG::Enemy::SetCriticalHitChance(int critical_hit_chance) {
	setter<int>("critical_hit_chance", critical_hit_chance);
}

bool RPG::Enemy::GetMiss() const {
	return getter<bool>("miss");
}

void RPG::Enemy::SetMiss(bool miss) {
	setter<bool>("miss", miss);
}

bool RPG::Enemy::GetLevitate() const {
	return getter<bool>("levitate");
}

void RPG::Enemy::SetLevitate(bool levitate) {
	setter<bool>("levitate", levitate);
}


const std::vector<uint8_t>& RPG::Enemy::GetStateRanks() const {
	return vector_getter<const std::vector<uint8_t>&, uint8_t>("state_ranks");
}

std::vector<uint8_t>& RPG::Enemy::GetStateRanks() {
	return vector_getter<std::vector<uint8_t>&, uint8_t>("state_ranks");
}


const std::vector<uint8_t>& RPG::Enemy::GetAttributeRanks() const {
	return vector_getter<const std::vector<uint8_t>&, uint8_t>("attribute_ranks");
}

std::vector<uint8_t>& RPG::Enemy::GetAttributeRanks() {
	return vector_getter<std::vector<uint8_t>&, uint8_t>("attribute_ranks");
}

const std::vector<RPG::EnemyAction>& RPG::Enemy::GetActions() const {
	return vector_getter<const std::vector<RPG::EnemyAction>&, RPG::EnemyAction>("actions");
}

std::vector<RPG::EnemyAction>& RPG::Enemy::GetActions() {
	return vector_getter<std::vector<RPG::EnemyAction>&, RPG::EnemyAction>("actions");
}

