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
#include "rpg_troopmember.h"

RPG::TroopMember::TroopMember(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

int RPG::TroopMember::GetEnemyId() const {
	return getter<int>("enemy_id");
}

void RPG::TroopMember::SetEnemyId(int enemy_id) {
	setter<int>("enemy_id", enemy_id);
}

int RPG::TroopMember::GetX() const {
	return getter<int>("x");
}

void RPG::TroopMember::SetX(int x) {
	setter<int>("x", x);
}

int RPG::TroopMember::GetY() const {
	return getter<int>("y");
}

void RPG::TroopMember::SetY(int y) {
	setter<int>("y", y);
}

bool RPG::TroopMember::GetInvisible() const {
	return getter<bool>("invisible");
}

void RPG::TroopMember::SetInvisible(bool invisible) {
	setter<bool>("invisible", invisible);
}

