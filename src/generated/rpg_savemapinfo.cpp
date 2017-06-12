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
#include "rpg_savemapinfo.h"


int RPG::SaveMapInfo::GetPositionX() const {
    return position_x;
}

void RPG::SaveMapInfo::SetPositionX(int position_x) {
    this->position_x = position_x;
}

int RPG::SaveMapInfo::GetPositionY() const {
    return position_y;
}

void RPG::SaveMapInfo::SetPositionY(int position_y) {
    this->position_y = position_y;
}

int RPG::SaveMapInfo::GetEncounterRate() const {
    return encounter_rate;
}

void RPG::SaveMapInfo::SetEncounterRate(int encounter_rate) {
    this->encounter_rate = encounter_rate;
}

int RPG::SaveMapInfo::GetChipsetId() const {
    return chipset_id;
}

void RPG::SaveMapInfo::SetChipsetId(int chipset_id) {
    this->chipset_id = chipset_id;
}

const std::vector<RPG::SaveMapEvent>& RPG::SaveMapInfo::GetEvents() const  {
    return events;
}

std::vector<RPG::SaveMapEvent>& RPG::SaveMapInfo::GetEvents() {
    return events;
}

void RPG::SaveMapInfo::SetEvents(const std::vector<RPG::SaveMapEvent>& events) {
    this->events = events;
}

const std::vector<uint8_t>& RPG::SaveMapInfo::GetLowerTiles() const  {
    return lower_tiles;
}

std::vector<uint8_t>& RPG::SaveMapInfo::GetLowerTiles() {
    return lower_tiles;
}

void RPG::SaveMapInfo::SetLowerTiles(const std::vector<uint8_t>& lower_tiles) {
    this->lower_tiles = lower_tiles;
}

const std::vector<uint8_t>& RPG::SaveMapInfo::GetUpperTiles() const  {
    return upper_tiles;
}

std::vector<uint8_t>& RPG::SaveMapInfo::GetUpperTiles() {
    return upper_tiles;
}

void RPG::SaveMapInfo::SetUpperTiles(const std::vector<uint8_t>& upper_tiles) {
    this->upper_tiles = upper_tiles;
}

const std::string& RPG::SaveMapInfo::GetParallaxName() const  {
    return parallax_name;
}

std::string& RPG::SaveMapInfo::GetParallaxName() {
    return parallax_name;
}

void RPG::SaveMapInfo::SetParallaxName(const std::string& parallax_name) {
    this->parallax_name = parallax_name;
}

bool RPG::SaveMapInfo::GetParallaxHorz() const {
    return parallax_horz;
}

void RPG::SaveMapInfo::SetParallaxHorz(bool parallax_horz) {
    this->parallax_horz = parallax_horz;
}

bool RPG::SaveMapInfo::GetParallaxVert() const {
    return parallax_vert;
}

void RPG::SaveMapInfo::SetParallaxVert(bool parallax_vert) {
    this->parallax_vert = parallax_vert;
}

bool RPG::SaveMapInfo::GetParallaxHorzAuto() const {
    return parallax_horz_auto;
}

void RPG::SaveMapInfo::SetParallaxHorzAuto(bool parallax_horz_auto) {
    this->parallax_horz_auto = parallax_horz_auto;
}

int RPG::SaveMapInfo::GetParallaxHorzSpeed() const {
    return parallax_horz_speed;
}

void RPG::SaveMapInfo::SetParallaxHorzSpeed(int parallax_horz_speed) {
    this->parallax_horz_speed = parallax_horz_speed;
}

bool RPG::SaveMapInfo::GetParallaxVertAuto() const {
    return parallax_vert_auto;
}

void RPG::SaveMapInfo::SetParallaxVertAuto(bool parallax_vert_auto) {
    this->parallax_vert_auto = parallax_vert_auto;
}

int RPG::SaveMapInfo::GetParallaxVertSpeed() const {
    return parallax_vert_speed;
}

void RPG::SaveMapInfo::SetParallaxVertSpeed(int parallax_vert_speed) {
    this->parallax_vert_speed = parallax_vert_speed;
}

