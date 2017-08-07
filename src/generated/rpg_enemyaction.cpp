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


int RPG::EnemyAction::GetKind() const {
	return kind;
}

void RPG::EnemyAction::SetKind(int kind) {
	this->kind = kind;
}

int RPG::EnemyAction::GetBasic() const {
	return basic;
}

void RPG::EnemyAction::SetBasic(int basic) {
	this->basic = basic;
}

int RPG::EnemyAction::GetSkillId() const {
	return skill_id;
}

void RPG::EnemyAction::SetSkillId(int skill_id) {
	this->skill_id = skill_id;
}

int RPG::EnemyAction::GetEnemyId() const {
	return enemy_id;
}

void RPG::EnemyAction::SetEnemyId(int enemy_id) {
	this->enemy_id = enemy_id;
}

int RPG::EnemyAction::GetConditionType() const {
	return condition_type;
}

void RPG::EnemyAction::SetConditionType(int condition_type) {
	this->condition_type = condition_type;
}

int RPG::EnemyAction::GetConditionParam1() const {
	return condition_param1;
}

void RPG::EnemyAction::SetConditionParam1(int condition_param1) {
	this->condition_param1 = condition_param1;
}

int RPG::EnemyAction::GetConditionParam2() const {
	return condition_param2;
}

void RPG::EnemyAction::SetConditionParam2(int condition_param2) {
	this->condition_param2 = condition_param2;
}

int RPG::EnemyAction::GetSwitchId() const {
	return switch_id;
}

void RPG::EnemyAction::SetSwitchId(int switch_id) {
	this->switch_id = switch_id;
}

bool RPG::EnemyAction::GetSwitchOn() const {
	return switch_on;
}

void RPG::EnemyAction::SetSwitchOn(bool switch_on) {
	this->switch_on = switch_on;
}

int RPG::EnemyAction::GetSwitchOnId() const {
	return switch_on_id;
}

void RPG::EnemyAction::SetSwitchOnId(int switch_on_id) {
	this->switch_on_id = switch_on_id;
}

bool RPG::EnemyAction::GetSwitchOff() const {
	return switch_off;
}

void RPG::EnemyAction::SetSwitchOff(bool switch_off) {
	this->switch_off = switch_off;
}

int RPG::EnemyAction::GetSwitchOffId() const {
	return switch_off_id;
}

void RPG::EnemyAction::SetSwitchOffId(int switch_off_id) {
	this->switch_off_id = switch_off_id;
}

int RPG::EnemyAction::GetRating() const {
	return rating;
}

void RPG::EnemyAction::SetRating(int rating) {
	this->rating = rating;
}

