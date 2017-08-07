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
#include "rpg_learning.h"

RPG::Learning::Learning(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

int RPG::Learning::GetLevel() const {
	return getter<int>("level");
}

void RPG::Learning::SetLevel(int level) {
	setter<int>("level", level);
}

int RPG::Learning::GetSkillId() const {
	return getter<int>("skill_id");
}

void RPG::Learning::SetSkillId(int skill_id) {
	setter<int>("skill_id", skill_id);
}

