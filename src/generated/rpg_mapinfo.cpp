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
#include "rpg_mapinfo.h"
/**
 * Constructor.
 */
RPG::MapInfo::MapInfo() {
	Init();
}

RPG::MapInfo::MapInfo(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

const std::string& RPG::MapInfo::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::MapInfo::GetName() {
	return getter<std::string&>("name");
}

void RPG::MapInfo::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

int RPG::MapInfo::GetParentMap() const {
	return getter<int>("parent_map");
}

void RPG::MapInfo::SetParentMap(int parent_map) {
	setter<int>("parent_map", parent_map);
}

int RPG::MapInfo::GetIndentation() const {
	return getter<int>("indentation");
}

void RPG::MapInfo::SetIndentation(int indentation) {
	setter<int>("indentation", indentation);
}

int RPG::MapInfo::GetType() const {
	return getter<int>("type");
}

void RPG::MapInfo::SetType(int type) {
	setter<int>("type", type);
}

int RPG::MapInfo::GetScrollbarX() const {
	return getter<int>("scrollbar_x");
}

void RPG::MapInfo::SetScrollbarX(int scrollbar_x) {
	setter<int>("scrollbar_x", scrollbar_x);
}

int RPG::MapInfo::GetScrollbarY() const {
	return getter<int>("scrollbar_y");
}

void RPG::MapInfo::SetScrollbarY(int scrollbar_y) {
	setter<int>("scrollbar_y", scrollbar_y);
}

bool RPG::MapInfo::GetExpandedNode() const {
	return getter<bool>("expanded_node");
}

void RPG::MapInfo::SetExpandedNode(bool expanded_node) {
	setter<bool>("expanded_node", expanded_node);
}

int RPG::MapInfo::GetMusicType() const {
	return getter<int>("music_type");
}

void RPG::MapInfo::SetMusicType(int music_type) {
	setter<int>("music_type", music_type);
}

const RPG::Music& RPG::MapInfo::GetMusic() const {
	return getter<const RPG::Music&>("music");
}

RPG::Music& RPG::MapInfo::GetMusic() {
	return getter<RPG::Music&>("music");
}

void RPG::MapInfo::SetMusic(const RPG::Music& music) {
	setter<RPG::Music>("music", music);
}

int RPG::MapInfo::GetBackgroundType() const {
	return getter<int>("background_type");
}

void RPG::MapInfo::SetBackgroundType(int background_type) {
	setter<int>("background_type", background_type);
}

const std::string& RPG::MapInfo::GetBackgroundName() const {
	return getter<const std::string&>("background_name");
}

std::string& RPG::MapInfo::GetBackgroundName() {
	return getter<std::string&>("background_name");
}

void RPG::MapInfo::SetBackgroundName(const std::string& background_name) {
	setter<std::string>("background_name", background_name);
}

int RPG::MapInfo::GetTeleport() const {
	return getter<int>("teleport");
}

void RPG::MapInfo::SetTeleport(int teleport) {
	setter<int>("teleport", teleport);
}

int RPG::MapInfo::GetEscape() const {
	return getter<int>("escape");
}

void RPG::MapInfo::SetEscape(int escape) {
	setter<int>("escape", escape);
}

int RPG::MapInfo::GetSave() const {
	return getter<int>("save");
}

void RPG::MapInfo::SetSave(int save) {
	setter<int>("save", save);
}

const std::vector<RPG::Encounter>& RPG::MapInfo::GetEncounters() const {
	return vector_getter<const std::vector<RPG::Encounter>&, RPG::Encounter>("encounters");
}

std::vector<RPG::Encounter>& RPG::MapInfo::GetEncounters() {
	return vector_getter<std::vector<RPG::Encounter>&, RPG::Encounter>("encounters");
}

int RPG::MapInfo::GetEncounterSteps() const {
	return getter<int>("encounter_steps");
}

void RPG::MapInfo::SetEncounterSteps(int encounter_steps) {
	setter<int>("encounter_steps", encounter_steps);
}

const RPG::Rect& RPG::MapInfo::GetAreaRect() const {
	return getter<const RPG::Rect&>("area_rect");
}

RPG::Rect& RPG::MapInfo::GetAreaRect() {
	return getter<RPG::Rect&>("area_rect");
}

void RPG::MapInfo::SetAreaRect(const RPG::Rect& area_rect) {
	setter<RPG::Rect>("area_rect", area_rect);
}

