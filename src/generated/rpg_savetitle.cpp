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
#include "rpg_savetitle.h"

RPG::SaveTitle::SaveTitle(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

double RPG::SaveTitle::GetTimestamp() const {
	return getter<double>("timestamp");
}

void RPG::SaveTitle::SetTimestamp(double timestamp) {
	setter<double>("timestamp", timestamp);
}

const std::string& RPG::SaveTitle::GetHeroName() const {
	return getter<const std::string&>("hero_name");
}

std::string& RPG::SaveTitle::GetHeroName() {
	return getter<std::string&>("hero_name");
}

void RPG::SaveTitle::SetHeroName(const std::string& hero_name) {
	setter<std::string>("hero_name", hero_name);
}

int RPG::SaveTitle::GetHeroLevel() const {
	return getter<int>("hero_level");
}

void RPG::SaveTitle::SetHeroLevel(int hero_level) {
	setter<int>("hero_level", hero_level);
}

int RPG::SaveTitle::GetHeroHp() const {
	return getter<int>("hero_hp");
}

void RPG::SaveTitle::SetHeroHp(int hero_hp) {
	setter<int>("hero_hp", hero_hp);
}

const std::string& RPG::SaveTitle::GetFace1Name() const {
	return getter<const std::string&>("face1_name");
}

std::string& RPG::SaveTitle::GetFace1Name() {
	return getter<std::string&>("face1_name");
}

void RPG::SaveTitle::SetFace1Name(const std::string& face1_name) {
	setter<std::string>("face1_name", face1_name);
}

int RPG::SaveTitle::GetFace1Id() const {
	return getter<int>("face1_id");
}

void RPG::SaveTitle::SetFace1Id(int face1_id) {
	setter<int>("face1_id", face1_id);
}

const std::string& RPG::SaveTitle::GetFace2Name() const {
	return getter<const std::string&>("face2_name");
}

std::string& RPG::SaveTitle::GetFace2Name() {
	return getter<std::string&>("face2_name");
}

void RPG::SaveTitle::SetFace2Name(const std::string& face2_name) {
	setter<std::string>("face2_name", face2_name);
}

int RPG::SaveTitle::GetFace2Id() const {
	return getter<int>("face2_id");
}

void RPG::SaveTitle::SetFace2Id(int face2_id) {
	setter<int>("face2_id", face2_id);
}

const std::string& RPG::SaveTitle::GetFace3Name() const {
	return getter<const std::string&>("face3_name");
}

std::string& RPG::SaveTitle::GetFace3Name() {
	return getter<std::string&>("face3_name");
}

void RPG::SaveTitle::SetFace3Name(const std::string& face3_name) {
	setter<std::string>("face3_name", face3_name);
}

int RPG::SaveTitle::GetFace3Id() const {
	return getter<int>("face3_id");
}

void RPG::SaveTitle::SetFace3Id(int face3_id) {
	setter<int>("face3_id", face3_id);
}

const std::string& RPG::SaveTitle::GetFace4Name() const {
	return getter<const std::string&>("face4_name");
}

std::string& RPG::SaveTitle::GetFace4Name() {
	return getter<std::string&>("face4_name");
}

void RPG::SaveTitle::SetFace4Name(const std::string& face4_name) {
	setter<std::string>("face4_name", face4_name);
}

int RPG::SaveTitle::GetFace4Id() const {
	return getter<int>("face4_id");
}

void RPG::SaveTitle::SetFace4Id(int face4_id) {
	setter<int>("face4_id", face4_id);
}

