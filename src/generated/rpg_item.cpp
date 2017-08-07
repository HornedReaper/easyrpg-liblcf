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
#include "rpg_item.h"

RPG::Item::Item(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

const std::string& RPG::Item::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::Item::GetName() {
	return getter<std::string&>("name");
}

void RPG::Item::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

const std::string& RPG::Item::GetDescription() const {
	return getter<const std::string&>("description");
}

std::string& RPG::Item::GetDescription() {
	return getter<std::string&>("description");
}

void RPG::Item::SetDescription(const std::string& description) {
	setter<std::string>("description", description);
}

int RPG::Item::GetType() const {
	return getter<int>("type");
}

void RPG::Item::SetType(int type) {
	setter<int>("type", type);
}

int RPG::Item::GetPrice() const {
	return getter<int>("price");
}

void RPG::Item::SetPrice(int price) {
	setter<int>("price", price);
}

int RPG::Item::GetUses() const {
	return getter<int>("uses");
}

void RPG::Item::SetUses(int uses) {
	setter<int>("uses", uses);
}

int RPG::Item::GetAtkPoints1() const {
	return getter<int>("atk_points1");
}

void RPG::Item::SetAtkPoints1(int atk_points1) {
	setter<int>("atk_points1", atk_points1);
}

int RPG::Item::GetDefPoints1() const {
	return getter<int>("def_points1");
}

void RPG::Item::SetDefPoints1(int def_points1) {
	setter<int>("def_points1", def_points1);
}

int RPG::Item::GetSpiPoints1() const {
	return getter<int>("spi_points1");
}

void RPG::Item::SetSpiPoints1(int spi_points1) {
	setter<int>("spi_points1", spi_points1);
}

int RPG::Item::GetAgiPoints1() const {
	return getter<int>("agi_points1");
}

void RPG::Item::SetAgiPoints1(int agi_points1) {
	setter<int>("agi_points1", agi_points1);
}

bool RPG::Item::GetTwoHanded() const {
	return getter<bool>("two_handed");
}

void RPG::Item::SetTwoHanded(bool two_handed) {
	setter<bool>("two_handed", two_handed);
}

int RPG::Item::GetSpCost() const {
	return getter<int>("sp_cost");
}

void RPG::Item::SetSpCost(int sp_cost) {
	setter<int>("sp_cost", sp_cost);
}

int RPG::Item::GetHit() const {
	return getter<int>("hit");
}

void RPG::Item::SetHit(int hit) {
	setter<int>("hit", hit);
}

int RPG::Item::GetCriticalHit() const {
	return getter<int>("critical_hit");
}

void RPG::Item::SetCriticalHit(int critical_hit) {
	setter<int>("critical_hit", critical_hit);
}

int RPG::Item::GetAnimationId() const {
	return getter<int>("animation_id");
}

void RPG::Item::SetAnimationId(int animation_id) {
	setter<int>("animation_id", animation_id);
}

bool RPG::Item::GetPreemptive() const {
	return getter<bool>("preemptive");
}

void RPG::Item::SetPreemptive(bool preemptive) {
	setter<bool>("preemptive", preemptive);
}

bool RPG::Item::GetDualAttack() const {
	return getter<bool>("dual_attack");
}

void RPG::Item::SetDualAttack(bool dual_attack) {
	setter<bool>("dual_attack", dual_attack);
}

bool RPG::Item::GetAttackAll() const {
	return getter<bool>("attack_all");
}

void RPG::Item::SetAttackAll(bool attack_all) {
	setter<bool>("attack_all", attack_all);
}

bool RPG::Item::GetIgnoreEvasion() const {
	return getter<bool>("ignore_evasion");
}

void RPG::Item::SetIgnoreEvasion(bool ignore_evasion) {
	setter<bool>("ignore_evasion", ignore_evasion);
}

bool RPG::Item::GetPreventCritical() const {
	return getter<bool>("prevent_critical");
}

void RPG::Item::SetPreventCritical(bool prevent_critical) {
	setter<bool>("prevent_critical", prevent_critical);
}

bool RPG::Item::GetRaiseEvasion() const {
	return getter<bool>("raise_evasion");
}

void RPG::Item::SetRaiseEvasion(bool raise_evasion) {
	setter<bool>("raise_evasion", raise_evasion);
}

bool RPG::Item::GetHalfSpCost() const {
	return getter<bool>("half_sp_cost");
}

void RPG::Item::SetHalfSpCost(bool half_sp_cost) {
	setter<bool>("half_sp_cost", half_sp_cost);
}

bool RPG::Item::GetNoTerrainDamage() const {
	return getter<bool>("no_terrain_damage");
}

void RPG::Item::SetNoTerrainDamage(bool no_terrain_damage) {
	setter<bool>("no_terrain_damage", no_terrain_damage);
}

bool RPG::Item::GetCursed() const {
	return getter<bool>("cursed");
}

void RPG::Item::SetCursed(bool cursed) {
	setter<bool>("cursed", cursed);
}

bool RPG::Item::GetEntireParty() const {
	return getter<bool>("entire_party");
}

void RPG::Item::SetEntireParty(bool entire_party) {
	setter<bool>("entire_party", entire_party);
}

int RPG::Item::GetRecoverHpRate() const {
	return getter<int>("recover_hp_rate");
}

void RPG::Item::SetRecoverHpRate(int recover_hp_rate) {
	setter<int>("recover_hp_rate", recover_hp_rate);
}

int RPG::Item::GetRecoverHp() const {
	return getter<int>("recover_hp");
}

void RPG::Item::SetRecoverHp(int recover_hp) {
	setter<int>("recover_hp", recover_hp);
}

int RPG::Item::GetRecoverSpRate() const {
	return getter<int>("recover_sp_rate");
}

void RPG::Item::SetRecoverSpRate(int recover_sp_rate) {
	setter<int>("recover_sp_rate", recover_sp_rate);
}

int RPG::Item::GetRecoverSp() const {
	return getter<int>("recover_sp");
}

void RPG::Item::SetRecoverSp(int recover_sp) {
	setter<int>("recover_sp", recover_sp);
}

bool RPG::Item::GetOccasionField1() const {
	return getter<bool>("occasion_field1");
}

void RPG::Item::SetOccasionField1(bool occasion_field1) {
	setter<bool>("occasion_field1", occasion_field1);
}

bool RPG::Item::GetKoOnly() const {
	return getter<bool>("ko_only");
}

void RPG::Item::SetKoOnly(bool ko_only) {
	setter<bool>("ko_only", ko_only);
}

int RPG::Item::GetMaxHpPoints() const {
	return getter<int>("max_hp_points");
}

void RPG::Item::SetMaxHpPoints(int max_hp_points) {
	setter<int>("max_hp_points", max_hp_points);
}

int RPG::Item::GetMaxSpPoints() const {
	return getter<int>("max_sp_points");
}

void RPG::Item::SetMaxSpPoints(int max_sp_points) {
	setter<int>("max_sp_points", max_sp_points);
}

int RPG::Item::GetAtkPoints2() const {
	return getter<int>("atk_points2");
}

void RPG::Item::SetAtkPoints2(int atk_points2) {
	setter<int>("atk_points2", atk_points2);
}

int RPG::Item::GetDefPoints2() const {
	return getter<int>("def_points2");
}

void RPG::Item::SetDefPoints2(int def_points2) {
	setter<int>("def_points2", def_points2);
}

int RPG::Item::GetSpiPoints2() const {
	return getter<int>("spi_points2");
}

void RPG::Item::SetSpiPoints2(int spi_points2) {
	setter<int>("spi_points2", spi_points2);
}

int RPG::Item::GetAgiPoints2() const {
	return getter<int>("agi_points2");
}

void RPG::Item::SetAgiPoints2(int agi_points2) {
	setter<int>("agi_points2", agi_points2);
}

int RPG::Item::GetUsingMessage() const {
	return getter<int>("using_message");
}

void RPG::Item::SetUsingMessage(int using_message) {
	setter<int>("using_message", using_message);
}

int RPG::Item::GetSkillId() const {
	return getter<int>("skill_id");
}

void RPG::Item::SetSkillId(int skill_id) {
	setter<int>("skill_id", skill_id);
}

int RPG::Item::GetSwitchId() const {
	return getter<int>("switch_id");
}

void RPG::Item::SetSwitchId(int switch_id) {
	setter<int>("switch_id", switch_id);
}

bool RPG::Item::GetOccasionField2() const {
	return getter<bool>("occasion_field2");
}

void RPG::Item::SetOccasionField2(bool occasion_field2) {
	setter<bool>("occasion_field2", occasion_field2);
}

bool RPG::Item::GetOccasionBattle() const {
	return getter<bool>("occasion_battle");
}

void RPG::Item::SetOccasionBattle(bool occasion_battle) {
	setter<bool>("occasion_battle", occasion_battle);
}


const std::vector<bool>& RPG::Item::GetActorSet() const {
	return vector_getter<const std::vector<bool>&, bool>("actor_set");
}

std::vector<bool>& RPG::Item::GetActorSet() {
	return vector_getter<std::vector<bool>&, bool>("actor_set");
}


const std::vector<bool>& RPG::Item::GetStateSet() const {
	return vector_getter<const std::vector<bool>&, bool>("state_set");
}

std::vector<bool>& RPG::Item::GetStateSet() {
	return vector_getter<std::vector<bool>&, bool>("state_set");
}


const std::vector<bool>& RPG::Item::GetAttributeSet() const {
	return vector_getter<const std::vector<bool>&, bool>("attribute_set");
}

std::vector<bool>& RPG::Item::GetAttributeSet() {
	return vector_getter<std::vector<bool>&, bool>("attribute_set");
}

int RPG::Item::GetStateChance() const {
	return getter<int>("state_chance");
}

void RPG::Item::SetStateChance(int state_chance) {
	setter<int>("state_chance", state_chance);
}

bool RPG::Item::GetStateEffect() const {
	return getter<bool>("state_effect");
}

void RPG::Item::SetStateEffect(bool state_effect) {
	setter<bool>("state_effect", state_effect);
}

int RPG::Item::GetWeaponAnimation() const {
	return getter<int>("weapon_animation");
}

void RPG::Item::SetWeaponAnimation(int weapon_animation) {
	setter<int>("weapon_animation", weapon_animation);
}

const std::vector<RPG::ItemAnimation>& RPG::Item::GetAnimationData() const {
	return vector_getter<const std::vector<RPG::ItemAnimation>&, RPG::ItemAnimation>("animation_data");
}

std::vector<RPG::ItemAnimation>& RPG::Item::GetAnimationData() {
	return vector_getter<std::vector<RPG::ItemAnimation>&, RPG::ItemAnimation>("animation_data");
}

bool RPG::Item::GetUseSkill() const {
	return getter<bool>("use_skill");
}

void RPG::Item::SetUseSkill(bool use_skill) {
	setter<bool>("use_skill", use_skill);
}


const std::vector<bool>& RPG::Item::GetClassSet() const {
	return vector_getter<const std::vector<bool>&, bool>("class_set");
}

std::vector<bool>& RPG::Item::GetClassSet() {
	return vector_getter<std::vector<bool>&, bool>("class_set");
}

int RPG::Item::GetRangedTrajectory() const {
	return getter<int>("ranged_trajectory");
}

void RPG::Item::SetRangedTrajectory(int ranged_trajectory) {
	setter<int>("ranged_trajectory", ranged_trajectory);
}

int RPG::Item::GetRangedTarget() const {
	return getter<int>("ranged_target");
}

void RPG::Item::SetRangedTarget(int ranged_target) {
	setter<int>("ranged_target", ranged_target);
}

