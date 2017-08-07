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
#include "rpg_event.h"

RPG::Event::Event(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

const std::string& RPG::Event::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::Event::GetName() {
	return getter<std::string&>("name");
}

void RPG::Event::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

int RPG::Event::GetX() const {
	return getter<int>("x");
}

void RPG::Event::SetX(int x) {
	setter<int>("x", x);
}

int RPG::Event::GetY() const {
	return getter<int>("y");
}

void RPG::Event::SetY(int y) {
	setter<int>("y", y);
}

const std::vector<RPG::EventPage>& RPG::Event::GetPages() const {
	return vector_getter<const std::vector<RPG::EventPage>&, RPG::EventPage>("pages");
}

std::vector<RPG::EventPage>& RPG::Event::GetPages() {
	return vector_getter<std::vector<RPG::EventPage>&, RPG::EventPage>("pages");
}

