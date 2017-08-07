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
#include "rpg_animationcelldata.h"

RPG::AnimationCellData::AnimationCellData(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

int RPG::AnimationCellData::GetValid() const {
	return getter<int>("valid");
}

void RPG::AnimationCellData::SetValid(int valid) {
	setter<int>("valid", valid);
}

int RPG::AnimationCellData::GetCellId() const {
	return getter<int>("cell_id");
}

void RPG::AnimationCellData::SetCellId(int cell_id) {
	setter<int>("cell_id", cell_id);
}

int RPG::AnimationCellData::GetX() const {
	return getter<int>("x");
}

void RPG::AnimationCellData::SetX(int x) {
	setter<int>("x", x);
}

int RPG::AnimationCellData::GetY() const {
	return getter<int>("y");
}

void RPG::AnimationCellData::SetY(int y) {
	setter<int>("y", y);
}

int RPG::AnimationCellData::GetZoom() const {
	return getter<int>("zoom");
}

void RPG::AnimationCellData::SetZoom(int zoom) {
	setter<int>("zoom", zoom);
}

int RPG::AnimationCellData::GetToneRed() const {
	return getter<int>("tone_red");
}

void RPG::AnimationCellData::SetToneRed(int tone_red) {
	setter<int>("tone_red", tone_red);
}

int RPG::AnimationCellData::GetToneGreen() const {
	return getter<int>("tone_green");
}

void RPG::AnimationCellData::SetToneGreen(int tone_green) {
	setter<int>("tone_green", tone_green);
}

int RPG::AnimationCellData::GetToneBlue() const {
	return getter<int>("tone_blue");
}

void RPG::AnimationCellData::SetToneBlue(int tone_blue) {
	setter<int>("tone_blue", tone_blue);
}

int RPG::AnimationCellData::GetToneGray() const {
	return getter<int>("tone_gray");
}

void RPG::AnimationCellData::SetToneGray(int tone_gray) {
	setter<int>("tone_gray", tone_gray);
}

int RPG::AnimationCellData::GetTransparency() const {
	return getter<int>("transparency");
}

void RPG::AnimationCellData::SetTransparency(int transparency) {
	setter<int>("transparency", transparency);
}

