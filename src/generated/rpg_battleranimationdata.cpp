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
#include "rpg_battleranimationdata.h"

RPG::BattlerAnimationData::BattlerAnimationData(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

int RPG::BattlerAnimationData::GetMove() const {
	return getter<int>("move");
}

void RPG::BattlerAnimationData::SetMove(int move) {
	setter<int>("move", move);
}

int RPG::BattlerAnimationData::GetAfterImage() const {
	return getter<int>("after_image");
}

void RPG::BattlerAnimationData::SetAfterImage(int after_image) {
	setter<int>("after_image", after_image);
}

int RPG::BattlerAnimationData::GetPose() const {
	return getter<int>("pose");
}

void RPG::BattlerAnimationData::SetPose(int pose) {
	setter<int>("pose", pose);
}

