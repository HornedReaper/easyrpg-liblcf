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


const std::string& RPG::MapInfo::GetName() const  {
	return name;
}

std::string& RPG::MapInfo::GetName() {
	return name;
}

void RPG::MapInfo::SetName(const std::string& name) {
	this->name = name;
}

int RPG::MapInfo::GetParentMap() const {
	return parent_map;
}

void RPG::MapInfo::SetParentMap(int parent_map) {
	this->parent_map = parent_map;
}

int RPG::MapInfo::GetIndentation() const {
	return indentation;
}

void RPG::MapInfo::SetIndentation(int indentation) {
	this->indentation = indentation;
}

int RPG::MapInfo::GetType() const {
	return type;
}

void RPG::MapInfo::SetType(int type) {
	this->type = type;
}

int RPG::MapInfo::GetScrollbarX() const {
	return scrollbar_x;
}

void RPG::MapInfo::SetScrollbarX(int scrollbar_x) {
	this->scrollbar_x = scrollbar_x;
}

int RPG::MapInfo::GetScrollbarY() const {
	return scrollbar_y;
}

void RPG::MapInfo::SetScrollbarY(int scrollbar_y) {
	this->scrollbar_y = scrollbar_y;
}

bool RPG::MapInfo::GetExpandedNode() const {
	return expanded_node;
}

void RPG::MapInfo::SetExpandedNode(bool expanded_node) {
	this->expanded_node = expanded_node;
}

int RPG::MapInfo::GetMusicType() const {
	return music_type;
}

void RPG::MapInfo::SetMusicType(int music_type) {
	this->music_type = music_type;
}

const RPG::Music& RPG::MapInfo::GetMusic() const  {
	return music;
}

RPG::Music& RPG::MapInfo::GetMusic() {
	return music;
}

void RPG::MapInfo::SetMusic(const RPG::Music& music) {
	this->music = music;
}

int RPG::MapInfo::GetBackgroundType() const {
	return background_type;
}

void RPG::MapInfo::SetBackgroundType(int background_type) {
	this->background_type = background_type;
}

const std::string& RPG::MapInfo::GetBackgroundName() const  {
	return background_name;
}

std::string& RPG::MapInfo::GetBackgroundName() {
	return background_name;
}

void RPG::MapInfo::SetBackgroundName(const std::string& background_name) {
	this->background_name = background_name;
}

int RPG::MapInfo::GetTeleport() const {
	return teleport;
}

void RPG::MapInfo::SetTeleport(int teleport) {
	this->teleport = teleport;
}

int RPG::MapInfo::GetEscape() const {
	return escape;
}

void RPG::MapInfo::SetEscape(int escape) {
	this->escape = escape;
}

int RPG::MapInfo::GetSave() const {
	return save;
}

void RPG::MapInfo::SetSave(int save) {
	this->save = save;
}

const std::vector<RPG::Encounter>& RPG::MapInfo::GetEncounters() const  {
	return encounters;
}

std::vector<RPG::Encounter>& RPG::MapInfo::GetEncounters() {
	return encounters;
}

int RPG::MapInfo::GetEncounterSteps() const {
	return encounter_steps;
}

void RPG::MapInfo::SetEncounterSteps(int encounter_steps) {
	this->encounter_steps = encounter_steps;
}

const RPG::Rect& RPG::MapInfo::GetAreaRect() const  {
	return area_rect;
}

RPG::Rect& RPG::MapInfo::GetAreaRect() {
	return area_rect;
}

void RPG::MapInfo::SetAreaRect(const RPG::Rect& area_rect) {
	this->area_rect = area_rect;
}

