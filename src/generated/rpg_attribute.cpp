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


const std::string& RPG::Attribute::GetName() const  {
	return name;
}

std::string& RPG::Attribute::GetName() {
	return name;
}

void RPG::Attribute::SetName(const std::string& name) {
	this->name = name;
}

int RPG::Attribute::GetType() const {
	return type;
}

void RPG::Attribute::SetType(int type) {
	this->type = type;
}

int RPG::Attribute::GetARate() const {
	return a_rate;
}

void RPG::Attribute::SetARate(int a_rate) {
	this->a_rate = a_rate;
}

int RPG::Attribute::GetBRate() const {
	return b_rate;
}

void RPG::Attribute::SetBRate(int b_rate) {
	this->b_rate = b_rate;
}

int RPG::Attribute::GetCRate() const {
	return c_rate;
}

void RPG::Attribute::SetCRate(int c_rate) {
	this->c_rate = c_rate;
}

int RPG::Attribute::GetDRate() const {
	return d_rate;
}

void RPG::Attribute::SetDRate(int d_rate) {
	this->d_rate = d_rate;
}

int RPG::Attribute::GetERate() const {
	return e_rate;
}

void RPG::Attribute::SetERate(int e_rate) {
	this->e_rate = e_rate;
}

