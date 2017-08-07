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
#include "rpg_battleranimation.h"

RPG::BattlerAnimation::BattlerAnimation(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

const std::string& RPG::BattlerAnimation::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::BattlerAnimation::GetName() {
	return getter<std::string&>("name");
}

void RPG::BattlerAnimation::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

int RPG::BattlerAnimation::GetSpeed() const {
	return getter<int>("speed");
}

void RPG::BattlerAnimation::SetSpeed(int speed) {
	setter<int>("speed", speed);
}

const std::vector<RPG::BattlerAnimationExtension>& RPG::BattlerAnimation::GetBaseData() const {
	return vector_getter<const std::vector<RPG::BattlerAnimationExtension>&, RPG::BattlerAnimationExtension>("base_data");
}

std::vector<RPG::BattlerAnimationExtension>& RPG::BattlerAnimation::GetBaseData() {
	return vector_getter<std::vector<RPG::BattlerAnimationExtension>&, RPG::BattlerAnimationExtension>("base_data");
}

const std::vector<RPG::BattlerAnimationExtension>& RPG::BattlerAnimation::GetWeaponData() const {
	return vector_getter<const std::vector<RPG::BattlerAnimationExtension>&, RPG::BattlerAnimationExtension>("weapon_data");
}

std::vector<RPG::BattlerAnimationExtension>& RPG::BattlerAnimation::GetWeaponData() {
	return vector_getter<std::vector<RPG::BattlerAnimationExtension>&, RPG::BattlerAnimationExtension>("weapon_data");
}

