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
#include "rpg_savetarget.h"

RPG::SaveTarget::SaveTarget(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

int RPG::SaveTarget::GetMapId() const {
	return getter<int>("map_id");
}

void RPG::SaveTarget::SetMapId(int map_id) {
	setter<int>("map_id", map_id);
}

int RPG::SaveTarget::GetMapX() const {
	return getter<int>("map_x");
}

void RPG::SaveTarget::SetMapX(int map_x) {
	setter<int>("map_x", map_x);
}

int RPG::SaveTarget::GetMapY() const {
	return getter<int>("map_y");
}

void RPG::SaveTarget::SetMapY(int map_y) {
	setter<int>("map_y", map_y);
}

bool RPG::SaveTarget::GetSwitchOn() const {
	return getter<bool>("switch_on");
}

void RPG::SaveTarget::SetSwitchOn(bool switch_on) {
	setter<bool>("switch_on", switch_on);
}

int RPG::SaveTarget::GetSwitchId() const {
	return getter<int>("switch_id");
}

void RPG::SaveTarget::SetSwitchId(int switch_id) {
	setter<int>("switch_id", switch_id);
}

