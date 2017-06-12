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


const std::string& RPG::State::GetName() const  {
    return name;
}

std::string& RPG::State::GetName() {
    return name;
}

void RPG::State::SetName(const std::string& name) {
    this->name = name;
}

int RPG::State::GetType() const {
    return type;
}

void RPG::State::SetType(int type) {
    this->type = type;
}

int RPG::State::GetColor() const {
    return color;
}

void RPG::State::SetColor(int color) {
    this->color = color;
}

int RPG::State::GetPriority() const {
    return priority;
}

void RPG::State::SetPriority(int priority) {
    this->priority = priority;
}

int RPG::State::GetRestriction() const {
    return restriction;
}

void RPG::State::SetRestriction(int restriction) {
    this->restriction = restriction;
}

int RPG::State::GetARate() const {
    return a_rate;
}

void RPG::State::SetARate(int a_rate) {
    this->a_rate = a_rate;
}

int RPG::State::GetBRate() const {
    return b_rate;
}

void RPG::State::SetBRate(int b_rate) {
    this->b_rate = b_rate;
}

int RPG::State::GetCRate() const {
    return c_rate;
}

void RPG::State::SetCRate(int c_rate) {
    this->c_rate = c_rate;
}

int RPG::State::GetDRate() const {
    return d_rate;
}

void RPG::State::SetDRate(int d_rate) {
    this->d_rate = d_rate;
}

int RPG::State::GetERate() const {
    return e_rate;
}

void RPG::State::SetERate(int e_rate) {
    this->e_rate = e_rate;
}

int RPG::State::GetHoldTurn() const {
    return hold_turn;
}

void RPG::State::SetHoldTurn(int hold_turn) {
    this->hold_turn = hold_turn;
}

int RPG::State::GetAutoReleaseProb() const {
    return auto_release_prob;
}

void RPG::State::SetAutoReleaseProb(int auto_release_prob) {
    this->auto_release_prob = auto_release_prob;
}

int RPG::State::GetReleaseByDamage() const {
    return release_by_damage;
}

void RPG::State::SetReleaseByDamage(int release_by_damage) {
    this->release_by_damage = release_by_damage;
}

int RPG::State::GetAffectType() const {
    return affect_type;
}

void RPG::State::SetAffectType(int affect_type) {
    this->affect_type = affect_type;
}

bool RPG::State::GetAffectAttack() const {
    return affect_attack;
}

void RPG::State::SetAffectAttack(bool affect_attack) {
    this->affect_attack = affect_attack;
}

bool RPG::State::GetAffectDefense() const {
    return affect_defense;
}

void RPG::State::SetAffectDefense(bool affect_defense) {
    this->affect_defense = affect_defense;
}

bool RPG::State::GetAffectSpirit() const {
    return affect_spirit;
}

void RPG::State::SetAffectSpirit(bool affect_spirit) {
    this->affect_spirit = affect_spirit;
}

bool RPG::State::GetAffectAgility() const {
    return affect_agility;
}

void RPG::State::SetAffectAgility(bool affect_agility) {
    this->affect_agility = affect_agility;
}

int RPG::State::GetReduceHitRatio() const {
    return reduce_hit_ratio;
}

void RPG::State::SetReduceHitRatio(int reduce_hit_ratio) {
    this->reduce_hit_ratio = reduce_hit_ratio;
}

bool RPG::State::GetAvoidAttacks() const {
    return avoid_attacks;
}

void RPG::State::SetAvoidAttacks(bool avoid_attacks) {
    this->avoid_attacks = avoid_attacks;
}

bool RPG::State::GetReflectMagic() const {
    return reflect_magic;
}

void RPG::State::SetReflectMagic(bool reflect_magic) {
    this->reflect_magic = reflect_magic;
}

bool RPG::State::GetCursed() const {
    return cursed;
}

void RPG::State::SetCursed(bool cursed) {
    this->cursed = cursed;
}

int RPG::State::GetBattlerAnimationId() const {
    return battler_animation_id;
}

void RPG::State::SetBattlerAnimationId(int battler_animation_id) {
    this->battler_animation_id = battler_animation_id;
}

bool RPG::State::GetRestrictSkill() const {
    return restrict_skill;
}

void RPG::State::SetRestrictSkill(bool restrict_skill) {
    this->restrict_skill = restrict_skill;
}

int RPG::State::GetRestrictSkillLevel() const {
    return restrict_skill_level;
}

void RPG::State::SetRestrictSkillLevel(int restrict_skill_level) {
    this->restrict_skill_level = restrict_skill_level;
}

bool RPG::State::GetRestrictMagic() const {
    return restrict_magic;
}

void RPG::State::SetRestrictMagic(bool restrict_magic) {
    this->restrict_magic = restrict_magic;
}

int RPG::State::GetRestrictMagicLevel() const {
    return restrict_magic_level;
}

void RPG::State::SetRestrictMagicLevel(int restrict_magic_level) {
    this->restrict_magic_level = restrict_magic_level;
}

int RPG::State::GetHpChangeType() const {
    return hp_change_type;
}

void RPG::State::SetHpChangeType(int hp_change_type) {
    this->hp_change_type = hp_change_type;
}

int RPG::State::GetSpChangeType() const {
    return sp_change_type;
}

void RPG::State::SetSpChangeType(int sp_change_type) {
    this->sp_change_type = sp_change_type;
}

const std::string& RPG::State::GetMessageActor() const  {
    return message_actor;
}

std::string& RPG::State::GetMessageActor() {
    return message_actor;
}

void RPG::State::SetMessageActor(const std::string& message_actor) {
    this->message_actor = message_actor;
}

const std::string& RPG::State::GetMessageEnemy() const  {
    return message_enemy;
}

std::string& RPG::State::GetMessageEnemy() {
    return message_enemy;
}

void RPG::State::SetMessageEnemy(const std::string& message_enemy) {
    this->message_enemy = message_enemy;
}

const std::string& RPG::State::GetMessageAlready() const  {
    return message_already;
}

std::string& RPG::State::GetMessageAlready() {
    return message_already;
}

void RPG::State::SetMessageAlready(const std::string& message_already) {
    this->message_already = message_already;
}

const std::string& RPG::State::GetMessageAffected() const  {
    return message_affected;
}

std::string& RPG::State::GetMessageAffected() {
    return message_affected;
}

void RPG::State::SetMessageAffected(const std::string& message_affected) {
    this->message_affected = message_affected;
}

const std::string& RPG::State::GetMessageRecovery() const  {
    return message_recovery;
}

std::string& RPG::State::GetMessageRecovery() {
    return message_recovery;
}

void RPG::State::SetMessageRecovery(const std::string& message_recovery) {
    this->message_recovery = message_recovery;
}

int RPG::State::GetHpChangeMax() const {
    return hp_change_max;
}

void RPG::State::SetHpChangeMax(int hp_change_max) {
    this->hp_change_max = hp_change_max;
}

int RPG::State::GetHpChangeVal() const {
    return hp_change_val;
}

void RPG::State::SetHpChangeVal(int hp_change_val) {
    this->hp_change_val = hp_change_val;
}

int RPG::State::GetHpChangeMapVal() const {
    return hp_change_map_val;
}

void RPG::State::SetHpChangeMapVal(int hp_change_map_val) {
    this->hp_change_map_val = hp_change_map_val;
}

int RPG::State::GetHpChangeMapSteps() const {
    return hp_change_map_steps;
}

void RPG::State::SetHpChangeMapSteps(int hp_change_map_steps) {
    this->hp_change_map_steps = hp_change_map_steps;
}

int RPG::State::GetSpChangeMax() const {
    return sp_change_max;
}

void RPG::State::SetSpChangeMax(int sp_change_max) {
    this->sp_change_max = sp_change_max;
}

int RPG::State::GetSpChangeVal() const {
    return sp_change_val;
}

void RPG::State::SetSpChangeVal(int sp_change_val) {
    this->sp_change_val = sp_change_val;
}

int RPG::State::GetSpChangeMapVal() const {
    return sp_change_map_val;
}

void RPG::State::SetSpChangeMapVal(int sp_change_map_val) {
    this->sp_change_map_val = sp_change_map_val;
}

int RPG::State::GetSpChangeMapSteps() const {
    return sp_change_map_steps;
}

void RPG::State::SetSpChangeMapSteps(int sp_change_map_steps) {
    this->sp_change_map_steps = sp_change_map_steps;
}

