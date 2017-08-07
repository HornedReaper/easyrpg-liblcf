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
#include "rpg_encounter.h"

RPG::Encounter::Encounter(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

int RPG::Encounter::GetTroopId() const {
	return getter<int>("troop_id");
}

void RPG::Encounter::SetTroopId(int troop_id) {
	setter<int>("troop_id", troop_id);
}

