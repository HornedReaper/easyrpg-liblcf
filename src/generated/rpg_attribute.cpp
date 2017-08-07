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
#include "rpg_attribute.h"

RPG::Attribute::Attribute(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

const std::string& RPG::Attribute::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::Attribute::GetName() {
	return getter<std::string&>("name");
}

void RPG::Attribute::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

int RPG::Attribute::GetType() const {
	return getter<int>("type");
}

void RPG::Attribute::SetType(int type) {
	setter<int>("type", type);
}

int RPG::Attribute::GetARate() const {
	return getter<int>("a_rate");
}

void RPG::Attribute::SetARate(int a_rate) {
	setter<int>("a_rate", a_rate);
}

int RPG::Attribute::GetBRate() const {
	return getter<int>("b_rate");
}

void RPG::Attribute::SetBRate(int b_rate) {
	setter<int>("b_rate", b_rate);
}

int RPG::Attribute::GetCRate() const {
	return getter<int>("c_rate");
}

void RPG::Attribute::SetCRate(int c_rate) {
	setter<int>("c_rate", c_rate);
}

int RPG::Attribute::GetDRate() const {
	return getter<int>("d_rate");
}

void RPG::Attribute::SetDRate(int d_rate) {
	setter<int>("d_rate", d_rate);
}

int RPG::Attribute::GetERate() const {
	return getter<int>("e_rate");
}

void RPG::Attribute::SetERate(int e_rate) {
	setter<int>("e_rate", e_rate);
}

