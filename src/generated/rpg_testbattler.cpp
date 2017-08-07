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
#include "rpg_testbattler.h"

RPG::TestBattler::TestBattler(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

int RPG::TestBattler::GetActorId() const {
	return getter<int>("actor_id");
}

void RPG::TestBattler::SetActorId(int actor_id) {
	setter<int>("actor_id", actor_id);
}

int RPG::TestBattler::GetLevel() const {
	return getter<int>("level");
}

void RPG::TestBattler::SetLevel(int level) {
	setter<int>("level", level);
}

int RPG::TestBattler::GetWeaponId() const {
	return getter<int>("weapon_id");
}

void RPG::TestBattler::SetWeaponId(int weapon_id) {
	setter<int>("weapon_id", weapon_id);
}

int RPG::TestBattler::GetShieldId() const {
	return getter<int>("shield_id");
}

void RPG::TestBattler::SetShieldId(int shield_id) {
	setter<int>("shield_id", shield_id);
}

int RPG::TestBattler::GetArmorId() const {
	return getter<int>("armor_id");
}

void RPG::TestBattler::SetArmorId(int armor_id) {
	setter<int>("armor_id", armor_id);
}

int RPG::TestBattler::GetHelmetId() const {
	return getter<int>("helmet_id");
}

void RPG::TestBattler::SetHelmetId(int helmet_id) {
	setter<int>("helmet_id", helmet_id);
}

int RPG::TestBattler::GetAccessoryId() const {
	return getter<int>("accessory_id");
}

void RPG::TestBattler::SetAccessoryId(int accessory_id) {
	setter<int>("accessory_id", accessory_id);
}

