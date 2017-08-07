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
#include "rpg_enemyaction.h"

RPG::EnemyAction::EnemyAction(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

int RPG::EnemyAction::GetKind() const {
	return getter<int>("kind");
}

void RPG::EnemyAction::SetKind(int kind) {
	setter<int>("kind", kind);
}

int RPG::EnemyAction::GetBasic() const {
	return getter<int>("basic");
}

void RPG::EnemyAction::SetBasic(int basic) {
	setter<int>("basic", basic);
}

int RPG::EnemyAction::GetSkillId() const {
	return getter<int>("skill_id");
}

void RPG::EnemyAction::SetSkillId(int skill_id) {
	setter<int>("skill_id", skill_id);
}

int RPG::EnemyAction::GetEnemyId() const {
	return getter<int>("enemy_id");
}

void RPG::EnemyAction::SetEnemyId(int enemy_id) {
	setter<int>("enemy_id", enemy_id);
}

int RPG::EnemyAction::GetConditionType() const {
	return getter<int>("condition_type");
}

void RPG::EnemyAction::SetConditionType(int condition_type) {
	setter<int>("condition_type", condition_type);
}

int RPG::EnemyAction::GetConditionParam1() const {
	return getter<int>("condition_param1");
}

void RPG::EnemyAction::SetConditionParam1(int condition_param1) {
	setter<int>("condition_param1", condition_param1);
}

int RPG::EnemyAction::GetConditionParam2() const {
	return getter<int>("condition_param2");
}

void RPG::EnemyAction::SetConditionParam2(int condition_param2) {
	setter<int>("condition_param2", condition_param2);
}

int RPG::EnemyAction::GetSwitchId() const {
	return getter<int>("switch_id");
}

void RPG::EnemyAction::SetSwitchId(int switch_id) {
	setter<int>("switch_id", switch_id);
}

bool RPG::EnemyAction::GetSwitchOn() const {
	return getter<bool>("switch_on");
}

void RPG::EnemyAction::SetSwitchOn(bool switch_on) {
	setter<bool>("switch_on", switch_on);
}

int RPG::EnemyAction::GetSwitchOnId() const {
	return getter<int>("switch_on_id");
}

void RPG::EnemyAction::SetSwitchOnId(int switch_on_id) {
	setter<int>("switch_on_id", switch_on_id);
}

bool RPG::EnemyAction::GetSwitchOff() const {
	return getter<bool>("switch_off");
}

void RPG::EnemyAction::SetSwitchOff(bool switch_off) {
	setter<bool>("switch_off", switch_off);
}

int RPG::EnemyAction::GetSwitchOffId() const {
	return getter<int>("switch_off_id");
}

void RPG::EnemyAction::SetSwitchOffId(int switch_off_id) {
	setter<int>("switch_off_id", switch_off_id);
}

int RPG::EnemyAction::GetRating() const {
	return getter<int>("rating");
}

void RPG::EnemyAction::SetRating(int rating) {
	setter<int>("rating", rating);
}

