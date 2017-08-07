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
#include "rpg_skill.h"

RPG::Skill::Skill(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

const std::string& RPG::Skill::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::Skill::GetName() {
	return getter<std::string&>("name");
}

void RPG::Skill::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

const std::string& RPG::Skill::GetDescription() const {
	return getter<const std::string&>("description");
}

std::string& RPG::Skill::GetDescription() {
	return getter<std::string&>("description");
}

void RPG::Skill::SetDescription(const std::string& description) {
	setter<std::string>("description", description);
}

const std::string& RPG::Skill::GetUsingMessage1() const {
	return getter<const std::string&>("using_message1");
}

std::string& RPG::Skill::GetUsingMessage1() {
	return getter<std::string&>("using_message1");
}

void RPG::Skill::SetUsingMessage1(const std::string& using_message1) {
	setter<std::string>("using_message1", using_message1);
}

const std::string& RPG::Skill::GetUsingMessage2() const {
	return getter<const std::string&>("using_message2");
}

std::string& RPG::Skill::GetUsingMessage2() {
	return getter<std::string&>("using_message2");
}

void RPG::Skill::SetUsingMessage2(const std::string& using_message2) {
	setter<std::string>("using_message2", using_message2);
}

int RPG::Skill::GetFailureMessage() const {
	return getter<int>("failure_message");
}

void RPG::Skill::SetFailureMessage(int failure_message) {
	setter<int>("failure_message", failure_message);
}

int RPG::Skill::GetType() const {
	return getter<int>("type");
}

void RPG::Skill::SetType(int type) {
	setter<int>("type", type);
}

int RPG::Skill::GetSpType() const {
	return getter<int>("sp_type");
}

void RPG::Skill::SetSpType(int sp_type) {
	setter<int>("sp_type", sp_type);
}

int RPG::Skill::GetSpPercent() const {
	return getter<int>("sp_percent");
}

void RPG::Skill::SetSpPercent(int sp_percent) {
	setter<int>("sp_percent", sp_percent);
}

int RPG::Skill::GetSpCost() const {
	return getter<int>("sp_cost");
}

void RPG::Skill::SetSpCost(int sp_cost) {
	setter<int>("sp_cost", sp_cost);
}

int RPG::Skill::GetScope() const {
	return getter<int>("scope");
}

void RPG::Skill::SetScope(int scope) {
	setter<int>("scope", scope);
}

int RPG::Skill::GetSwitchId() const {
	return getter<int>("switch_id");
}

void RPG::Skill::SetSwitchId(int switch_id) {
	setter<int>("switch_id", switch_id);
}

int RPG::Skill::GetAnimationId() const {
	return getter<int>("animation_id");
}

void RPG::Skill::SetAnimationId(int animation_id) {
	setter<int>("animation_id", animation_id);
}

const RPG::Sound& RPG::Skill::GetSoundEffect() const {
	return getter<const RPG::Sound&>("sound_effect");
}

RPG::Sound& RPG::Skill::GetSoundEffect() {
	return getter<RPG::Sound&>("sound_effect");
}

void RPG::Skill::SetSoundEffect(const RPG::Sound& sound_effect) {
	setter<RPG::Sound>("sound_effect", sound_effect);
}

bool RPG::Skill::GetOccasionField() const {
	return getter<bool>("occasion_field");
}

void RPG::Skill::SetOccasionField(bool occasion_field) {
	setter<bool>("occasion_field", occasion_field);
}

bool RPG::Skill::GetOccasionBattle() const {
	return getter<bool>("occasion_battle");
}

void RPG::Skill::SetOccasionBattle(bool occasion_battle) {
	setter<bool>("occasion_battle", occasion_battle);
}

bool RPG::Skill::GetStateEffect() const {
	return getter<bool>("state_effect");
}

void RPG::Skill::SetStateEffect(bool state_effect) {
	setter<bool>("state_effect", state_effect);
}

int RPG::Skill::GetPhysicalRate() const {
	return getter<int>("physical_rate");
}

void RPG::Skill::SetPhysicalRate(int physical_rate) {
	setter<int>("physical_rate", physical_rate);
}

int RPG::Skill::GetMagicalRate() const {
	return getter<int>("magical_rate");
}

void RPG::Skill::SetMagicalRate(int magical_rate) {
	setter<int>("magical_rate", magical_rate);
}

int RPG::Skill::GetVariance() const {
	return getter<int>("variance");
}

void RPG::Skill::SetVariance(int variance) {
	setter<int>("variance", variance);
}

int RPG::Skill::GetPower() const {
	return getter<int>("power");
}

void RPG::Skill::SetPower(int power) {
	setter<int>("power", power);
}

int RPG::Skill::GetHit() const {
	return getter<int>("hit");
}

void RPG::Skill::SetHit(int hit) {
	setter<int>("hit", hit);
}

bool RPG::Skill::GetAffectHp() const {
	return getter<bool>("affect_hp");
}

void RPG::Skill::SetAffectHp(bool affect_hp) {
	setter<bool>("affect_hp", affect_hp);
}

bool RPG::Skill::GetAffectSp() const {
	return getter<bool>("affect_sp");
}

void RPG::Skill::SetAffectSp(bool affect_sp) {
	setter<bool>("affect_sp", affect_sp);
}

bool RPG::Skill::GetAffectAttack() const {
	return getter<bool>("affect_attack");
}

void RPG::Skill::SetAffectAttack(bool affect_attack) {
	setter<bool>("affect_attack", affect_attack);
}

bool RPG::Skill::GetAffectDefense() const {
	return getter<bool>("affect_defense");
}

void RPG::Skill::SetAffectDefense(bool affect_defense) {
	setter<bool>("affect_defense", affect_defense);
}

bool RPG::Skill::GetAffectSpirit() const {
	return getter<bool>("affect_spirit");
}

void RPG::Skill::SetAffectSpirit(bool affect_spirit) {
	setter<bool>("affect_spirit", affect_spirit);
}

bool RPG::Skill::GetAffectAgility() const {
	return getter<bool>("affect_agility");
}

void RPG::Skill::SetAffectAgility(bool affect_agility) {
	setter<bool>("affect_agility", affect_agility);
}

bool RPG::Skill::GetAbsorbDamage() const {
	return getter<bool>("absorb_damage");
}

void RPG::Skill::SetAbsorbDamage(bool absorb_damage) {
	setter<bool>("absorb_damage", absorb_damage);
}

bool RPG::Skill::GetIgnoreDefense() const {
	return getter<bool>("ignore_defense");
}

void RPG::Skill::SetIgnoreDefense(bool ignore_defense) {
	setter<bool>("ignore_defense", ignore_defense);
}


const std::vector<bool>& RPG::Skill::GetStateEffects() const {
	return vector_getter<const std::vector<bool>&, bool>("state_effects");
}

std::vector<bool>& RPG::Skill::GetStateEffects() {
	return vector_getter<std::vector<bool>&, bool>("state_effects");
}


const std::vector<bool>& RPG::Skill::GetAttributeEffects() const {
	return vector_getter<const std::vector<bool>&, bool>("attribute_effects");
}

std::vector<bool>& RPG::Skill::GetAttributeEffects() {
	return vector_getter<std::vector<bool>&, bool>("attribute_effects");
}

bool RPG::Skill::GetAffectAttrDefence() const {
	return getter<bool>("affect_attr_defence");
}

void RPG::Skill::SetAffectAttrDefence(bool affect_attr_defence) {
	setter<bool>("affect_attr_defence", affect_attr_defence);
}

int RPG::Skill::GetBattlerAnimation() const {
	return getter<int>("battler_animation");
}

void RPG::Skill::SetBattlerAnimation(int battler_animation) {
	setter<int>("battler_animation", battler_animation);
}

const std::vector<RPG::BattlerAnimationData>& RPG::Skill::GetBattlerAnimationData() const {
	return vector_getter<const std::vector<RPG::BattlerAnimationData>&, RPG::BattlerAnimationData>("battler_animation_data");
}

std::vector<RPG::BattlerAnimationData>& RPG::Skill::GetBattlerAnimationData() {
	return vector_getter<std::vector<RPG::BattlerAnimationData>&, RPG::BattlerAnimationData>("battler_animation_data");
}

