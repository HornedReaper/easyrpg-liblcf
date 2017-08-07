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
#include "rpg_animationtiming.h"

RPG::AnimationTiming::AnimationTiming(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

int RPG::AnimationTiming::GetFrame() const {
	return getter<int>("frame");
}

void RPG::AnimationTiming::SetFrame(int frame) {
	setter<int>("frame", frame);
}

const RPG::Sound& RPG::AnimationTiming::GetSe() const {
	return getter<const RPG::Sound&>("se");
}

RPG::Sound& RPG::AnimationTiming::GetSe() {
	return getter<RPG::Sound&>("se");
}

void RPG::AnimationTiming::SetSe(const RPG::Sound& se) {
	setter<RPG::Sound>("se", se);
}

int RPG::AnimationTiming::GetFlashScope() const {
	return getter<int>("flash_scope");
}

void RPG::AnimationTiming::SetFlashScope(int flash_scope) {
	setter<int>("flash_scope", flash_scope);
}

int RPG::AnimationTiming::GetFlashRed() const {
	return getter<int>("flash_red");
}

void RPG::AnimationTiming::SetFlashRed(int flash_red) {
	setter<int>("flash_red", flash_red);
}

int RPG::AnimationTiming::GetFlashGreen() const {
	return getter<int>("flash_green");
}

void RPG::AnimationTiming::SetFlashGreen(int flash_green) {
	setter<int>("flash_green", flash_green);
}

int RPG::AnimationTiming::GetFlashBlue() const {
	return getter<int>("flash_blue");
}

void RPG::AnimationTiming::SetFlashBlue(int flash_blue) {
	setter<int>("flash_blue", flash_blue);
}

int RPG::AnimationTiming::GetFlashPower() const {
	return getter<int>("flash_power");
}

void RPG::AnimationTiming::SetFlashPower(int flash_power) {
	setter<int>("flash_power", flash_power);
}

int RPG::AnimationTiming::GetScreenShake() const {
	return getter<int>("screen_shake");
}

void RPG::AnimationTiming::SetScreenShake(int screen_shake) {
	setter<int>("screen_shake", screen_shake);
}

