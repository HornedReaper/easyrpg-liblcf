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
#include "rpg_music.h"

RPG::Music::Music(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

const std::string& RPG::Music::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::Music::GetName() {
	return getter<std::string&>("name");
}

void RPG::Music::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

int RPG::Music::GetFadein() const {
	return getter<int>("fadein");
}

void RPG::Music::SetFadein(int fadein) {
	setter<int>("fadein", fadein);
}

int RPG::Music::GetVolume() const {
	return getter<int>("volume");
}

void RPG::Music::SetVolume(int volume) {
	setter<int>("volume", volume);
}

int RPG::Music::GetTempo() const {
	return getter<int>("tempo");
}

void RPG::Music::SetTempo(int tempo) {
	setter<int>("tempo", tempo);
}

int RPG::Music::GetBalance() const {
	return getter<int>("balance");
}

void RPG::Music::SetBalance(int balance) {
	setter<int>("balance", balance);
}

