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
#include "rpg_state.h"

RPG::State::State(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

const std::string& RPG::State::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::State::GetName() {
	return getter<std::string&>("name");
}

void RPG::State::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

int RPG::State::GetType() const {
	return getter<int>("type");
}

void RPG::State::SetType(int type) {
	setter<int>("type", type);
}

int RPG::State::GetColor() const {
	return getter<int>("color");
}

void RPG::State::SetColor(int color) {
	setter<int>("color", color);
}

int RPG::State::GetPriority() const {
	return getter<int>("priority");
}

void RPG::State::SetPriority(int priority) {
	setter<int>("priority", priority);
}

int RPG::State::GetRestriction() const {
	return getter<int>("restriction");
}

void RPG::State::SetRestriction(int restriction) {
	setter<int>("restriction", restriction);
}

int RPG::State::GetARate() const {
	return getter<int>("a_rate");
}

void RPG::State::SetARate(int a_rate) {
	setter<int>("a_rate", a_rate);
}

int RPG::State::GetBRate() const {
	return getter<int>("b_rate");
}

void RPG::State::SetBRate(int b_rate) {
	setter<int>("b_rate", b_rate);
}

int RPG::State::GetCRate() const {
	return getter<int>("c_rate");
}

void RPG::State::SetCRate(int c_rate) {
	setter<int>("c_rate", c_rate);
}

int RPG::State::GetDRate() const {
	return getter<int>("d_rate");
}

void RPG::State::SetDRate(int d_rate) {
	setter<int>("d_rate", d_rate);
}

int RPG::State::GetERate() const {
	return getter<int>("e_rate");
}

void RPG::State::SetERate(int e_rate) {
	setter<int>("e_rate", e_rate);
}

int RPG::State::GetHoldTurn() const {
	return getter<int>("hold_turn");
}

void RPG::State::SetHoldTurn(int hold_turn) {
	setter<int>("hold_turn", hold_turn);
}

int RPG::State::GetAutoReleaseProb() const {
	return getter<int>("auto_release_prob");
}

void RPG::State::SetAutoReleaseProb(int auto_release_prob) {
	setter<int>("auto_release_prob", auto_release_prob);
}

int RPG::State::GetReleaseByDamage() const {
	return getter<int>("release_by_damage");
}

void RPG::State::SetReleaseByDamage(int release_by_damage) {
	setter<int>("release_by_damage", release_by_damage);
}

int RPG::State::GetAffectType() const {
	return getter<int>("affect_type");
}

void RPG::State::SetAffectType(int affect_type) {
	setter<int>("affect_type", affect_type);
}

bool RPG::State::GetAffectAttack() const {
	return getter<bool>("affect_attack");
}

void RPG::State::SetAffectAttack(bool affect_attack) {
	setter<bool>("affect_attack", affect_attack);
}

bool RPG::State::GetAffectDefense() const {
	return getter<bool>("affect_defense");
}

void RPG::State::SetAffectDefense(bool affect_defense) {
	setter<bool>("affect_defense", affect_defense);
}

bool RPG::State::GetAffectSpirit() const {
	return getter<bool>("affect_spirit");
}

void RPG::State::SetAffectSpirit(bool affect_spirit) {
	setter<bool>("affect_spirit", affect_spirit);
}

bool RPG::State::GetAffectAgility() const {
	return getter<bool>("affect_agility");
}

void RPG::State::SetAffectAgility(bool affect_agility) {
	setter<bool>("affect_agility", affect_agility);
}

int RPG::State::GetReduceHitRatio() const {
	return getter<int>("reduce_hit_ratio");
}

void RPG::State::SetReduceHitRatio(int reduce_hit_ratio) {
	setter<int>("reduce_hit_ratio", reduce_hit_ratio);
}

bool RPG::State::GetAvoidAttacks() const {
	return getter<bool>("avoid_attacks");
}

void RPG::State::SetAvoidAttacks(bool avoid_attacks) {
	setter<bool>("avoid_attacks", avoid_attacks);
}

bool RPG::State::GetReflectMagic() const {
	return getter<bool>("reflect_magic");
}

void RPG::State::SetReflectMagic(bool reflect_magic) {
	setter<bool>("reflect_magic", reflect_magic);
}

bool RPG::State::GetCursed() const {
	return getter<bool>("cursed");
}

void RPG::State::SetCursed(bool cursed) {
	setter<bool>("cursed", cursed);
}

int RPG::State::GetBattlerAnimationId() const {
	return getter<int>("battler_animation_id");
}

void RPG::State::SetBattlerAnimationId(int battler_animation_id) {
	setter<int>("battler_animation_id", battler_animation_id);
}

bool RPG::State::GetRestrictSkill() const {
	return getter<bool>("restrict_skill");
}

void RPG::State::SetRestrictSkill(bool restrict_skill) {
	setter<bool>("restrict_skill", restrict_skill);
}

int RPG::State::GetRestrictSkillLevel() const {
	return getter<int>("restrict_skill_level");
}

void RPG::State::SetRestrictSkillLevel(int restrict_skill_level) {
	setter<int>("restrict_skill_level", restrict_skill_level);
}

bool RPG::State::GetRestrictMagic() const {
	return getter<bool>("restrict_magic");
}

void RPG::State::SetRestrictMagic(bool restrict_magic) {
	setter<bool>("restrict_magic", restrict_magic);
}

int RPG::State::GetRestrictMagicLevel() const {
	return getter<int>("restrict_magic_level");
}

void RPG::State::SetRestrictMagicLevel(int restrict_magic_level) {
	setter<int>("restrict_magic_level", restrict_magic_level);
}

int RPG::State::GetHpChangeType() const {
	return getter<int>("hp_change_type");
}

void RPG::State::SetHpChangeType(int hp_change_type) {
	setter<int>("hp_change_type", hp_change_type);
}

int RPG::State::GetSpChangeType() const {
	return getter<int>("sp_change_type");
}

void RPG::State::SetSpChangeType(int sp_change_type) {
	setter<int>("sp_change_type", sp_change_type);
}

const std::string& RPG::State::GetMessageActor() const {
	return getter<const std::string&>("message_actor");
}

std::string& RPG::State::GetMessageActor() {
	return getter<std::string&>("message_actor");
}

void RPG::State::SetMessageActor(const std::string& message_actor) {
	setter<std::string>("message_actor", message_actor);
}

const std::string& RPG::State::GetMessageEnemy() const {
	return getter<const std::string&>("message_enemy");
}

std::string& RPG::State::GetMessageEnemy() {
	return getter<std::string&>("message_enemy");
}

void RPG::State::SetMessageEnemy(const std::string& message_enemy) {
	setter<std::string>("message_enemy", message_enemy);
}

const std::string& RPG::State::GetMessageAlready() const {
	return getter<const std::string&>("message_already");
}

std::string& RPG::State::GetMessageAlready() {
	return getter<std::string&>("message_already");
}

void RPG::State::SetMessageAlready(const std::string& message_already) {
	setter<std::string>("message_already", message_already);
}

const std::string& RPG::State::GetMessageAffected() const {
	return getter<const std::string&>("message_affected");
}

std::string& RPG::State::GetMessageAffected() {
	return getter<std::string&>("message_affected");
}

void RPG::State::SetMessageAffected(const std::string& message_affected) {
	setter<std::string>("message_affected", message_affected);
}

const std::string& RPG::State::GetMessageRecovery() const {
	return getter<const std::string&>("message_recovery");
}

std::string& RPG::State::GetMessageRecovery() {
	return getter<std::string&>("message_recovery");
}

void RPG::State::SetMessageRecovery(const std::string& message_recovery) {
	setter<std::string>("message_recovery", message_recovery);
}

int RPG::State::GetHpChangeMax() const {
	return getter<int>("hp_change_max");
}

void RPG::State::SetHpChangeMax(int hp_change_max) {
	setter<int>("hp_change_max", hp_change_max);
}

int RPG::State::GetHpChangeVal() const {
	return getter<int>("hp_change_val");
}

void RPG::State::SetHpChangeVal(int hp_change_val) {
	setter<int>("hp_change_val", hp_change_val);
}

int RPG::State::GetHpChangeMapVal() const {
	return getter<int>("hp_change_map_val");
}

void RPG::State::SetHpChangeMapVal(int hp_change_map_val) {
	setter<int>("hp_change_map_val", hp_change_map_val);
}

int RPG::State::GetHpChangeMapSteps() const {
	return getter<int>("hp_change_map_steps");
}

void RPG::State::SetHpChangeMapSteps(int hp_change_map_steps) {
	setter<int>("hp_change_map_steps", hp_change_map_steps);
}

int RPG::State::GetSpChangeMax() const {
	return getter<int>("sp_change_max");
}

void RPG::State::SetSpChangeMax(int sp_change_max) {
	setter<int>("sp_change_max", sp_change_max);
}

int RPG::State::GetSpChangeVal() const {
	return getter<int>("sp_change_val");
}

void RPG::State::SetSpChangeVal(int sp_change_val) {
	setter<int>("sp_change_val", sp_change_val);
}

int RPG::State::GetSpChangeMapVal() const {
	return getter<int>("sp_change_map_val");
}

void RPG::State::SetSpChangeMapVal(int sp_change_map_val) {
	setter<int>("sp_change_map_val", sp_change_map_val);
}

int RPG::State::GetSpChangeMapSteps() const {
	return getter<int>("sp_change_map_steps");
}

void RPG::State::SetSpChangeMapSteps(int sp_change_map_steps) {
	setter<int>("sp_change_map_steps", sp_change_map_steps);
}

