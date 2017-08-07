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
#include "rpg_trooppagecondition.h"

RPG::TroopPageCondition::TroopPageCondition(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

const RPG::TroopPageCondition::Flags& RPG::TroopPageCondition::GetFlags() const {
	return getter<const RPG::TroopPageCondition::Flags&>("flags");
}

RPG::TroopPageCondition::Flags& RPG::TroopPageCondition::GetFlags() {
	return getter<RPG::TroopPageCondition::Flags&>("flags");
}

void RPG::TroopPageCondition::SetFlags(const RPG::TroopPageCondition::Flags& flags) {
	setter<RPG::TroopPageCondition::Flags>("flags", flags);
}

int RPG::TroopPageCondition::GetSwitchAId() const {
	return getter<int>("switch_a_id");
}

void RPG::TroopPageCondition::SetSwitchAId(int switch_a_id) {
	setter<int>("switch_a_id", switch_a_id);
}

int RPG::TroopPageCondition::GetSwitchBId() const {
	return getter<int>("switch_b_id");
}

void RPG::TroopPageCondition::SetSwitchBId(int switch_b_id) {
	setter<int>("switch_b_id", switch_b_id);
}

int RPG::TroopPageCondition::GetVariableId() const {
	return getter<int>("variable_id");
}

void RPG::TroopPageCondition::SetVariableId(int variable_id) {
	setter<int>("variable_id", variable_id);
}

int RPG::TroopPageCondition::GetVariableValue() const {
	return getter<int>("variable_value");
}

void RPG::TroopPageCondition::SetVariableValue(int variable_value) {
	setter<int>("variable_value", variable_value);
}

int RPG::TroopPageCondition::GetTurnA() const {
	return getter<int>("turn_a");
}

void RPG::TroopPageCondition::SetTurnA(int turn_a) {
	setter<int>("turn_a", turn_a);
}

int RPG::TroopPageCondition::GetTurnB() const {
	return getter<int>("turn_b");
}

void RPG::TroopPageCondition::SetTurnB(int turn_b) {
	setter<int>("turn_b", turn_b);
}

int RPG::TroopPageCondition::GetFatigueMin() const {
	return getter<int>("fatigue_min");
}

void RPG::TroopPageCondition::SetFatigueMin(int fatigue_min) {
	setter<int>("fatigue_min", fatigue_min);
}

int RPG::TroopPageCondition::GetFatigueMax() const {
	return getter<int>("fatigue_max");
}

void RPG::TroopPageCondition::SetFatigueMax(int fatigue_max) {
	setter<int>("fatigue_max", fatigue_max);
}

int RPG::TroopPageCondition::GetEnemyId() const {
	return getter<int>("enemy_id");
}

void RPG::TroopPageCondition::SetEnemyId(int enemy_id) {
	setter<int>("enemy_id", enemy_id);
}

int RPG::TroopPageCondition::GetEnemyHpMin() const {
	return getter<int>("enemy_hp_min");
}

void RPG::TroopPageCondition::SetEnemyHpMin(int enemy_hp_min) {
	setter<int>("enemy_hp_min", enemy_hp_min);
}

int RPG::TroopPageCondition::GetEnemyHpMax() const {
	return getter<int>("enemy_hp_max");
}

void RPG::TroopPageCondition::SetEnemyHpMax(int enemy_hp_max) {
	setter<int>("enemy_hp_max", enemy_hp_max);
}

int RPG::TroopPageCondition::GetActorId() const {
	return getter<int>("actor_id");
}

void RPG::TroopPageCondition::SetActorId(int actor_id) {
	setter<int>("actor_id", actor_id);
}

int RPG::TroopPageCondition::GetActorHpMin() const {
	return getter<int>("actor_hp_min");
}

void RPG::TroopPageCondition::SetActorHpMin(int actor_hp_min) {
	setter<int>("actor_hp_min", actor_hp_min);
}

int RPG::TroopPageCondition::GetActorHpMax() const {
	return getter<int>("actor_hp_max");
}

void RPG::TroopPageCondition::SetActorHpMax(int actor_hp_max) {
	setter<int>("actor_hp_max", actor_hp_max);
}

int RPG::TroopPageCondition::GetTurnEnemyId() const {
	return getter<int>("turn_enemy_id");
}

void RPG::TroopPageCondition::SetTurnEnemyId(int turn_enemy_id) {
	setter<int>("turn_enemy_id", turn_enemy_id);
}

int RPG::TroopPageCondition::GetTurnEnemyA() const {
	return getter<int>("turn_enemy_a");
}

void RPG::TroopPageCondition::SetTurnEnemyA(int turn_enemy_a) {
	setter<int>("turn_enemy_a", turn_enemy_a);
}

int RPG::TroopPageCondition::GetTurnEnemyB() const {
	return getter<int>("turn_enemy_b");
}

void RPG::TroopPageCondition::SetTurnEnemyB(int turn_enemy_b) {
	setter<int>("turn_enemy_b", turn_enemy_b);
}

int RPG::TroopPageCondition::GetTurnActorId() const {
	return getter<int>("turn_actor_id");
}

void RPG::TroopPageCondition::SetTurnActorId(int turn_actor_id) {
	setter<int>("turn_actor_id", turn_actor_id);
}

int RPG::TroopPageCondition::GetTurnActorA() const {
	return getter<int>("turn_actor_a");
}

void RPG::TroopPageCondition::SetTurnActorA(int turn_actor_a) {
	setter<int>("turn_actor_a", turn_actor_a);
}

int RPG::TroopPageCondition::GetTurnActorB() const {
	return getter<int>("turn_actor_b");
}

void RPG::TroopPageCondition::SetTurnActorB(int turn_actor_b) {
	setter<int>("turn_actor_b", turn_actor_b);
}

int RPG::TroopPageCondition::GetCommandActorId() const {
	return getter<int>("command_actor_id");
}

void RPG::TroopPageCondition::SetCommandActorId(int command_actor_id) {
	setter<int>("command_actor_id", command_actor_id);
}

int RPG::TroopPageCondition::GetCommandId() const {
	return getter<int>("command_id");
}

void RPG::TroopPageCondition::SetCommandId(int command_id) {
	setter<int>("command_id", command_id);
}

