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
#include "rpg_terrain.h"

RPG::Terrain::Terrain(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

const std::string& RPG::Terrain::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::Terrain::GetName() {
	return getter<std::string&>("name");
}

void RPG::Terrain::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

int RPG::Terrain::GetDamage() const {
	return getter<int>("damage");
}

void RPG::Terrain::SetDamage(int damage) {
	setter<int>("damage", damage);
}

int RPG::Terrain::GetEncounterRate() const {
	return getter<int>("encounter_rate");
}

void RPG::Terrain::SetEncounterRate(int encounter_rate) {
	setter<int>("encounter_rate", encounter_rate);
}

const std::string& RPG::Terrain::GetBackgroundName() const {
	return getter<const std::string&>("background_name");
}

std::string& RPG::Terrain::GetBackgroundName() {
	return getter<std::string&>("background_name");
}

void RPG::Terrain::SetBackgroundName(const std::string& background_name) {
	setter<std::string>("background_name", background_name);
}

bool RPG::Terrain::GetBoatPass() const {
	return getter<bool>("boat_pass");
}

void RPG::Terrain::SetBoatPass(bool boat_pass) {
	setter<bool>("boat_pass", boat_pass);
}

bool RPG::Terrain::GetShipPass() const {
	return getter<bool>("ship_pass");
}

void RPG::Terrain::SetShipPass(bool ship_pass) {
	setter<bool>("ship_pass", ship_pass);
}

bool RPG::Terrain::GetAirshipPass() const {
	return getter<bool>("airship_pass");
}

void RPG::Terrain::SetAirshipPass(bool airship_pass) {
	setter<bool>("airship_pass", airship_pass);
}

bool RPG::Terrain::GetAirshipLand() const {
	return getter<bool>("airship_land");
}

void RPG::Terrain::SetAirshipLand(bool airship_land) {
	setter<bool>("airship_land", airship_land);
}

int RPG::Terrain::GetBushDepth() const {
	return getter<int>("bush_depth");
}

void RPG::Terrain::SetBushDepth(int bush_depth) {
	setter<int>("bush_depth", bush_depth);
}

const RPG::Sound& RPG::Terrain::GetFootstep() const {
	return getter<const RPG::Sound&>("footstep");
}

RPG::Sound& RPG::Terrain::GetFootstep() {
	return getter<RPG::Sound&>("footstep");
}

void RPG::Terrain::SetFootstep(const RPG::Sound& footstep) {
	setter<RPG::Sound>("footstep", footstep);
}

bool RPG::Terrain::GetOnDamageSe() const {
	return getter<bool>("on_damage_se");
}

void RPG::Terrain::SetOnDamageSe(bool on_damage_se) {
	setter<bool>("on_damage_se", on_damage_se);
}

int RPG::Terrain::GetBackgroundType() const {
	return getter<int>("background_type");
}

void RPG::Terrain::SetBackgroundType(int background_type) {
	setter<int>("background_type", background_type);
}

const std::string& RPG::Terrain::GetBackgroundAName() const {
	return getter<const std::string&>("background_a_name");
}

std::string& RPG::Terrain::GetBackgroundAName() {
	return getter<std::string&>("background_a_name");
}

void RPG::Terrain::SetBackgroundAName(const std::string& background_a_name) {
	setter<std::string>("background_a_name", background_a_name);
}

bool RPG::Terrain::GetBackgroundAScrollh() const {
	return getter<bool>("background_a_scrollh");
}

void RPG::Terrain::SetBackgroundAScrollh(bool background_a_scrollh) {
	setter<bool>("background_a_scrollh", background_a_scrollh);
}

bool RPG::Terrain::GetBackgroundAScrollv() const {
	return getter<bool>("background_a_scrollv");
}

void RPG::Terrain::SetBackgroundAScrollv(bool background_a_scrollv) {
	setter<bool>("background_a_scrollv", background_a_scrollv);
}

int RPG::Terrain::GetBackgroundAScrollhSpeed() const {
	return getter<int>("background_a_scrollh_speed");
}

void RPG::Terrain::SetBackgroundAScrollhSpeed(int background_a_scrollh_speed) {
	setter<int>("background_a_scrollh_speed", background_a_scrollh_speed);
}

int RPG::Terrain::GetBackgroundAScrollvSpeed() const {
	return getter<int>("background_a_scrollv_speed");
}

void RPG::Terrain::SetBackgroundAScrollvSpeed(int background_a_scrollv_speed) {
	setter<int>("background_a_scrollv_speed", background_a_scrollv_speed);
}

bool RPG::Terrain::GetBackgroundB() const {
	return getter<bool>("background_b");
}

void RPG::Terrain::SetBackgroundB(bool background_b) {
	setter<bool>("background_b", background_b);
}

const std::string& RPG::Terrain::GetBackgroundBName() const {
	return getter<const std::string&>("background_b_name");
}

std::string& RPG::Terrain::GetBackgroundBName() {
	return getter<std::string&>("background_b_name");
}

void RPG::Terrain::SetBackgroundBName(const std::string& background_b_name) {
	setter<std::string>("background_b_name", background_b_name);
}

bool RPG::Terrain::GetBackgroundBScrollh() const {
	return getter<bool>("background_b_scrollh");
}

void RPG::Terrain::SetBackgroundBScrollh(bool background_b_scrollh) {
	setter<bool>("background_b_scrollh", background_b_scrollh);
}

bool RPG::Terrain::GetBackgroundBScrollv() const {
	return getter<bool>("background_b_scrollv");
}

void RPG::Terrain::SetBackgroundBScrollv(bool background_b_scrollv) {
	setter<bool>("background_b_scrollv", background_b_scrollv);
}

int RPG::Terrain::GetBackgroundBScrollhSpeed() const {
	return getter<int>("background_b_scrollh_speed");
}

void RPG::Terrain::SetBackgroundBScrollhSpeed(int background_b_scrollh_speed) {
	setter<int>("background_b_scrollh_speed", background_b_scrollh_speed);
}

int RPG::Terrain::GetBackgroundBScrollvSpeed() const {
	return getter<int>("background_b_scrollv_speed");
}

void RPG::Terrain::SetBackgroundBScrollvSpeed(int background_b_scrollv_speed) {
	setter<int>("background_b_scrollv_speed", background_b_scrollv_speed);
}

const RPG::Terrain::Flags& RPG::Terrain::GetSpecialFlags() const {
	return getter<const RPG::Terrain::Flags&>("special_flags");
}

RPG::Terrain::Flags& RPG::Terrain::GetSpecialFlags() {
	return getter<RPG::Terrain::Flags&>("special_flags");
}

void RPG::Terrain::SetSpecialFlags(const RPG::Terrain::Flags& special_flags) {
	setter<RPG::Terrain::Flags>("special_flags", special_flags);
}

int RPG::Terrain::GetSpecialBackParty() const {
	return getter<int>("special_back_party");
}

void RPG::Terrain::SetSpecialBackParty(int special_back_party) {
	setter<int>("special_back_party", special_back_party);
}

int RPG::Terrain::GetSpecialBackEnemies() const {
	return getter<int>("special_back_enemies");
}

void RPG::Terrain::SetSpecialBackEnemies(int special_back_enemies) {
	setter<int>("special_back_enemies", special_back_enemies);
}

int RPG::Terrain::GetSpecialLateralParty() const {
	return getter<int>("special_lateral_party");
}

void RPG::Terrain::SetSpecialLateralParty(int special_lateral_party) {
	setter<int>("special_lateral_party", special_lateral_party);
}

int RPG::Terrain::GetSpecialLateralEnemies() const {
	return getter<int>("special_lateral_enemies");
}

void RPG::Terrain::SetSpecialLateralEnemies(int special_lateral_enemies) {
	setter<int>("special_lateral_enemies", special_lateral_enemies);
}

int RPG::Terrain::GetGridLocation() const {
	return getter<int>("grid_location");
}

void RPG::Terrain::SetGridLocation(int grid_location) {
	setter<int>("grid_location", grid_location);
}

int RPG::Terrain::GetGridA() const {
	return getter<int>("grid_a");
}

void RPG::Terrain::SetGridA(int grid_a) {
	setter<int>("grid_a", grid_a);
}

int RPG::Terrain::GetGridB() const {
	return getter<int>("grid_b");
}

void RPG::Terrain::SetGridB(int grid_b) {
	setter<int>("grid_b", grid_b);
}

int RPG::Terrain::GetGridC() const {
	return getter<int>("grid_c");
}

void RPG::Terrain::SetGridC(int grid_c) {
	setter<int>("grid_c", grid_c);
}

