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


const std::string& RPG::Enemy::GetName() const  {
	return name;
}

std::string& RPG::Enemy::GetName() {
	return name;
}

void RPG::Enemy::SetName(const std::string& name) {
	this->name = name;
}

const std::string& RPG::Enemy::GetBattlerName() const  {
	return battler_name;
}

std::string& RPG::Enemy::GetBattlerName() {
	return battler_name;
}

void RPG::Enemy::SetBattlerName(const std::string& battler_name) {
	this->battler_name = battler_name;
}

int RPG::Enemy::GetBattlerHue() const {
	return battler_hue;
}

void RPG::Enemy::SetBattlerHue(int battler_hue) {
	this->battler_hue = battler_hue;
}

int RPG::Enemy::GetMaxHp() const {
	return max_hp;
}

void RPG::Enemy::SetMaxHp(int max_hp) {
	this->max_hp = max_hp;
}

int RPG::Enemy::GetMaxSp() const {
	return max_sp;
}

void RPG::Enemy::SetMaxSp(int max_sp) {
	this->max_sp = max_sp;
}

int RPG::Enemy::GetAttack() const {
	return attack;
}

void RPG::Enemy::SetAttack(int attack) {
	this->attack = attack;
}

int RPG::Enemy::GetDefense() const {
	return defense;
}

void RPG::Enemy::SetDefense(int defense) {
	this->defense = defense;
}

int RPG::Enemy::GetSpirit() const {
	return spirit;
}

void RPG::Enemy::SetSpirit(int spirit) {
	this->spirit = spirit;
}

int RPG::Enemy::GetAgility() const {
	return agility;
}

void RPG::Enemy::SetAgility(int agility) {
	this->agility = agility;
}

bool RPG::Enemy::GetTransparent() const {
	return transparent;
}

void RPG::Enemy::SetTransparent(bool transparent) {
	this->transparent = transparent;
}

int RPG::Enemy::GetExp() const {
	return exp;
}

void RPG::Enemy::SetExp(int exp) {
	this->exp = exp;
}

int RPG::Enemy::GetGold() const {
	return gold;
}

void RPG::Enemy::SetGold(int gold) {
	this->gold = gold;
}

int RPG::Enemy::GetDropId() const {
	return drop_id;
}

void RPG::Enemy::SetDropId(int drop_id) {
	this->drop_id = drop_id;
}

int RPG::Enemy::GetDropProb() const {
	return drop_prob;
}

void RPG::Enemy::SetDropProb(int drop_prob) {
	this->drop_prob = drop_prob;
}

bool RPG::Enemy::GetCriticalHit() const {
	return critical_hit;
}

void RPG::Enemy::SetCriticalHit(bool critical_hit) {
	this->critical_hit = critical_hit;
}

int RPG::Enemy::GetCriticalHitChance() const {
	return critical_hit_chance;
}

void RPG::Enemy::SetCriticalHitChance(int critical_hit_chance) {
	this->critical_hit_chance = critical_hit_chance;
}

bool RPG::Enemy::GetMiss() const {
	return miss;
}

void RPG::Enemy::SetMiss(bool miss) {
	this->miss = miss;
}

bool RPG::Enemy::GetLevitate() const {
	return levitate;
}

void RPG::Enemy::SetLevitate(bool levitate) {
	this->levitate = levitate;
}


const std::vector<uint8_t>& RPG::Enemy::GetStateRanks() const  {
	return state_ranks;
}

std::vector<uint8_t>& RPG::Enemy::GetStateRanks() {
	return state_ranks;
}

void RPG::Enemy::SetStateRanks(const std::vector<uint8_t>& state_ranks) {
	this->state_ranks = state_ranks;
}


const std::vector<uint8_t>& RPG::Enemy::GetAttributeRanks() const  {
	return attribute_ranks;
}

std::vector<uint8_t>& RPG::Enemy::GetAttributeRanks() {
	return attribute_ranks;
}

void RPG::Enemy::SetAttributeRanks(const std::vector<uint8_t>& attribute_ranks) {
	this->attribute_ranks = attribute_ranks;
}

const std::vector<RPG::EnemyAction>& RPG::Enemy::GetActions() const  {
	return actions;
}

std::vector<RPG::EnemyAction>& RPG::Enemy::GetActions() {
	return actions;
}

void RPG::Enemy::SetActions(const std::vector<RPG::EnemyAction>& actions) {
	this->actions = actions;
}

