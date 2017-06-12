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


const std::string& RPG::BattlerAnimation::GetName() const  {
	return name;
}

std::string& RPG::BattlerAnimation::GetName() {
	return name;
}

void RPG::BattlerAnimation::SetName(const std::string& name) {
	this->name = name;
}

int RPG::BattlerAnimation::GetSpeed() const {
	return speed;
}

void RPG::BattlerAnimation::SetSpeed(int speed) {
	this->speed = speed;
}

const std::vector<RPG::BattlerAnimationExtension>& RPG::BattlerAnimation::GetBaseData() const  {
	return base_data;
}

std::vector<RPG::BattlerAnimationExtension>& RPG::BattlerAnimation::GetBaseData() {
	return base_data;
}

void RPG::BattlerAnimation::SetBaseData(const std::vector<RPG::BattlerAnimationExtension>& base_data) {
	this->base_data = base_data;
}

const std::vector<RPG::BattlerAnimationExtension>& RPG::BattlerAnimation::GetWeaponData() const  {
	return weapon_data;
}

std::vector<RPG::BattlerAnimationExtension>& RPG::BattlerAnimation::GetWeaponData() {
	return weapon_data;
}

void RPG::BattlerAnimation::SetWeaponData(const std::vector<RPG::BattlerAnimationExtension>& weapon_data) {
	this->weapon_data = weapon_data;
}

