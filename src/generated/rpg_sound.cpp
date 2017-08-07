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
#include "rpg_sound.h"

RPG::Sound::Sound(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

const std::string& RPG::Sound::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::Sound::GetName() {
	return getter<std::string&>("name");
}

void RPG::Sound::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

int RPG::Sound::GetVolume() const {
	return getter<int>("volume");
}

void RPG::Sound::SetVolume(int volume) {
	setter<int>("volume", volume);
}

int RPG::Sound::GetTempo() const {
	return getter<int>("tempo");
}

void RPG::Sound::SetTempo(int tempo) {
	setter<int>("tempo", tempo);
}

int RPG::Sound::GetBalance() const {
	return getter<int>("balance");
}

void RPG::Sound::SetBalance(int balance) {
	setter<int>("balance", balance);
}

