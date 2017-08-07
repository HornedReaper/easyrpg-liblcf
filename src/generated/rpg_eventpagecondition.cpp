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
#include "rpg_eventpagecondition.h"

RPG::EventPageCondition::EventPageCondition(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

const RPG::EventPageCondition::Flags& RPG::EventPageCondition::GetFlags() const {
	return getter<const RPG::EventPageCondition::Flags&>("flags");
}

RPG::EventPageCondition::Flags& RPG::EventPageCondition::GetFlags() {
	return getter<RPG::EventPageCondition::Flags&>("flags");
}

void RPG::EventPageCondition::SetFlags(const RPG::EventPageCondition::Flags& flags) {
	setter<RPG::EventPageCondition::Flags>("flags", flags);
}

int RPG::EventPageCondition::GetSwitchAId() const {
	return getter<int>("switch_a_id");
}

void RPG::EventPageCondition::SetSwitchAId(int switch_a_id) {
	setter<int>("switch_a_id", switch_a_id);
}

int RPG::EventPageCondition::GetSwitchBId() const {
	return getter<int>("switch_b_id");
}

void RPG::EventPageCondition::SetSwitchBId(int switch_b_id) {
	setter<int>("switch_b_id", switch_b_id);
}

int RPG::EventPageCondition::GetVariableId() const {
	return getter<int>("variable_id");
}

void RPG::EventPageCondition::SetVariableId(int variable_id) {
	setter<int>("variable_id", variable_id);
}

int RPG::EventPageCondition::GetVariableValue() const {
	return getter<int>("variable_value");
}

void RPG::EventPageCondition::SetVariableValue(int variable_value) {
	setter<int>("variable_value", variable_value);
}

int RPG::EventPageCondition::GetItemId() const {
	return getter<int>("item_id");
}

void RPG::EventPageCondition::SetItemId(int item_id) {
	setter<int>("item_id", item_id);
}

int RPG::EventPageCondition::GetActorId() const {
	return getter<int>("actor_id");
}

void RPG::EventPageCondition::SetActorId(int actor_id) {
	setter<int>("actor_id", actor_id);
}

int RPG::EventPageCondition::GetTimerSec() const {
	return getter<int>("timer_sec");
}

void RPG::EventPageCondition::SetTimerSec(int timer_sec) {
	setter<int>("timer_sec", timer_sec);
}

int RPG::EventPageCondition::GetTimer2Sec() const {
	return getter<int>("timer2_sec");
}

void RPG::EventPageCondition::SetTimer2Sec(int timer2_sec) {
	setter<int>("timer2_sec", timer2_sec);
}

int RPG::EventPageCondition::GetCompareOperator() const {
	return getter<int>("compare_operator");
}

void RPG::EventPageCondition::SetCompareOperator(int compare_operator) {
	setter<int>("compare_operator", compare_operator);
}

