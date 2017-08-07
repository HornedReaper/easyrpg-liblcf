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
#include "rpg_battleranimationextension.h"

RPG::BattlerAnimationExtension::BattlerAnimationExtension(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

const std::string& RPG::BattlerAnimationExtension::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::BattlerAnimationExtension::GetName() {
	return getter<std::string&>("name");
}

void RPG::BattlerAnimationExtension::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

const std::string& RPG::BattlerAnimationExtension::GetBattlerName() const {
	return getter<const std::string&>("battler_name");
}

std::string& RPG::BattlerAnimationExtension::GetBattlerName() {
	return getter<std::string&>("battler_name");
}

void RPG::BattlerAnimationExtension::SetBattlerName(const std::string& battler_name) {
	setter<std::string>("battler_name", battler_name);
}

int RPG::BattlerAnimationExtension::GetBattlerIndex() const {
	return getter<int>("battler_index");
}

void RPG::BattlerAnimationExtension::SetBattlerIndex(int battler_index) {
	setter<int>("battler_index", battler_index);
}

int RPG::BattlerAnimationExtension::GetAnimationType() const {
	return getter<int>("animation_type");
}

void RPG::BattlerAnimationExtension::SetAnimationType(int animation_type) {
	setter<int>("animation_type", animation_type);
}

int RPG::BattlerAnimationExtension::GetAnimationId() const {
	return getter<int>("animation_id");
}

void RPG::BattlerAnimationExtension::SetAnimationId(int animation_id) {
	setter<int>("animation_id", animation_id);
}

