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
#include "rpg_itemanimation.h"

RPG::ItemAnimation::ItemAnimation(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

int RPG::ItemAnimation::GetType() const {
	return getter<int>("type");
}

void RPG::ItemAnimation::SetType(int type) {
	setter<int>("type", type);
}

int RPG::ItemAnimation::GetWeaponAnim() const {
	return getter<int>("weapon_anim");
}

void RPG::ItemAnimation::SetWeaponAnim(int weapon_anim) {
	setter<int>("weapon_anim", weapon_anim);
}

int RPG::ItemAnimation::GetMovement() const {
	return getter<int>("movement");
}

void RPG::ItemAnimation::SetMovement(int movement) {
	setter<int>("movement", movement);
}

int RPG::ItemAnimation::GetAfterImage() const {
	return getter<int>("after_image");
}

void RPG::ItemAnimation::SetAfterImage(int after_image) {
	setter<int>("after_image", after_image);
}

int RPG::ItemAnimation::GetAttacks() const {
	return getter<int>("attacks");
}

void RPG::ItemAnimation::SetAttacks(int attacks) {
	setter<int>("attacks", attacks);
}

bool RPG::ItemAnimation::GetRanged() const {
	return getter<bool>("ranged");
}

void RPG::ItemAnimation::SetRanged(bool ranged) {
	setter<bool>("ranged", ranged);
}

int RPG::ItemAnimation::GetRangedAnim() const {
	return getter<int>("ranged_anim");
}

void RPG::ItemAnimation::SetRangedAnim(int ranged_anim) {
	setter<int>("ranged_anim", ranged_anim);
}

int RPG::ItemAnimation::GetRangedSpeed() const {
	return getter<int>("ranged_speed");
}

void RPG::ItemAnimation::SetRangedSpeed(int ranged_speed) {
	setter<int>("ranged_speed", ranged_speed);
}

int RPG::ItemAnimation::GetBattleAnim() const {
	return getter<int>("battle_anim");
}

void RPG::ItemAnimation::SetBattleAnim(int battle_anim) {
	setter<int>("battle_anim", battle_anim);
}

