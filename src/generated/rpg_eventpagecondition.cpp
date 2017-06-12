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


const RPG::EventPageCondition::Flags& RPG::EventPageCondition::GetFlags() const  {
    return flags;
}

RPG::EventPageCondition::Flags& RPG::EventPageCondition::GetFlags() {
    return flags;
}

void RPG::EventPageCondition::SetFlags(const RPG::EventPageCondition::Flags& flags) {
    this->flags = flags;
}

int RPG::EventPageCondition::GetSwitchAId() const {
    return switch_a_id;
}

void RPG::EventPageCondition::SetSwitchAId(int switch_a_id) {
    this->switch_a_id = switch_a_id;
}

int RPG::EventPageCondition::GetSwitchBId() const {
    return switch_b_id;
}

void RPG::EventPageCondition::SetSwitchBId(int switch_b_id) {
    this->switch_b_id = switch_b_id;
}

int RPG::EventPageCondition::GetVariableId() const {
    return variable_id;
}

void RPG::EventPageCondition::SetVariableId(int variable_id) {
    this->variable_id = variable_id;
}

int RPG::EventPageCondition::GetVariableValue() const {
    return variable_value;
}

void RPG::EventPageCondition::SetVariableValue(int variable_value) {
    this->variable_value = variable_value;
}

int RPG::EventPageCondition::GetItemId() const {
    return item_id;
}

void RPG::EventPageCondition::SetItemId(int item_id) {
    this->item_id = item_id;
}

int RPG::EventPageCondition::GetActorId() const {
    return actor_id;
}

void RPG::EventPageCondition::SetActorId(int actor_id) {
    this->actor_id = actor_id;
}

int RPG::EventPageCondition::GetTimerSec() const {
    return timer_sec;
}

void RPG::EventPageCondition::SetTimerSec(int timer_sec) {
    this->timer_sec = timer_sec;
}

int RPG::EventPageCondition::GetTimer2Sec() const {
    return timer2_sec;
}

void RPG::EventPageCondition::SetTimer2Sec(int timer2_sec) {
    this->timer2_sec = timer2_sec;
}

int RPG::EventPageCondition::GetCompareOperator() const {
    return compare_operator;
}

void RPG::EventPageCondition::SetCompareOperator(int compare_operator) {
    this->compare_operator = compare_operator;
}

