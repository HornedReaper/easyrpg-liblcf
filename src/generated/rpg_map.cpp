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
#include "rpg_map.h"


int RPG::Map::GetChipsetId() const {
    return chipset_id;
}

void RPG::Map::SetChipsetId(int chipset_id) {
    this->chipset_id = chipset_id;
}

int RPG::Map::GetWidth() const {
    return width;
}

void RPG::Map::SetWidth(int width) {
    this->width = width;
}

int RPG::Map::GetHeight() const {
    return height;
}

void RPG::Map::SetHeight(int height) {
    this->height = height;
}

int RPG::Map::GetScrollType() const {
    return scroll_type;
}

void RPG::Map::SetScrollType(int scroll_type) {
    this->scroll_type = scroll_type;
}

bool RPG::Map::GetParallaxFlag() const {
    return parallax_flag;
}

void RPG::Map::SetParallaxFlag(bool parallax_flag) {
    this->parallax_flag = parallax_flag;
}

const std::string& RPG::Map::GetParallaxName() const  {
    return parallax_name;
}

std::string& RPG::Map::GetParallaxName() {
    return parallax_name;
}

void RPG::Map::SetParallaxName(const std::string& parallax_name) {
    this->parallax_name = parallax_name;
}

bool RPG::Map::GetParallaxLoopX() const {
    return parallax_loop_x;
}

void RPG::Map::SetParallaxLoopX(bool parallax_loop_x) {
    this->parallax_loop_x = parallax_loop_x;
}

bool RPG::Map::GetParallaxLoopY() const {
    return parallax_loop_y;
}

void RPG::Map::SetParallaxLoopY(bool parallax_loop_y) {
    this->parallax_loop_y = parallax_loop_y;
}

bool RPG::Map::GetParallaxAutoLoopX() const {
    return parallax_auto_loop_x;
}

void RPG::Map::SetParallaxAutoLoopX(bool parallax_auto_loop_x) {
    this->parallax_auto_loop_x = parallax_auto_loop_x;
}

int RPG::Map::GetParallaxSx() const {
    return parallax_sx;
}

void RPG::Map::SetParallaxSx(int parallax_sx) {
    this->parallax_sx = parallax_sx;
}

bool RPG::Map::GetParallaxAutoLoopY() const {
    return parallax_auto_loop_y;
}

void RPG::Map::SetParallaxAutoLoopY(bool parallax_auto_loop_y) {
    this->parallax_auto_loop_y = parallax_auto_loop_y;
}

int RPG::Map::GetParallaxSy() const {
    return parallax_sy;
}

void RPG::Map::SetParallaxSy(int parallax_sy) {
    this->parallax_sy = parallax_sy;
}

bool RPG::Map::GetGeneratorFlag() const {
    return generator_flag;
}

void RPG::Map::SetGeneratorFlag(bool generator_flag) {
    this->generator_flag = generator_flag;
}

int RPG::Map::GetGeneratorMode() const {
    return generator_mode;
}

void RPG::Map::SetGeneratorMode(int generator_mode) {
    this->generator_mode = generator_mode;
}

bool RPG::Map::GetTopLevel() const {
    return top_level;
}

void RPG::Map::SetTopLevel(bool top_level) {
    this->top_level = top_level;
}

int RPG::Map::GetGeneratorTiles() const {
    return generator_tiles;
}

void RPG::Map::SetGeneratorTiles(int generator_tiles) {
    this->generator_tiles = generator_tiles;
}

int RPG::Map::GetGeneratorWidth() const {
    return generator_width;
}

void RPG::Map::SetGeneratorWidth(int generator_width) {
    this->generator_width = generator_width;
}

int RPG::Map::GetGeneratorHeight() const {
    return generator_height;
}

void RPG::Map::SetGeneratorHeight(int generator_height) {
    this->generator_height = generator_height;
}

bool RPG::Map::GetGeneratorSurround() const {
    return generator_surround;
}

void RPG::Map::SetGeneratorSurround(bool generator_surround) {
    this->generator_surround = generator_surround;
}

bool RPG::Map::GetGeneratorUpperWall() const {
    return generator_upper_wall;
}

void RPG::Map::SetGeneratorUpperWall(bool generator_upper_wall) {
    this->generator_upper_wall = generator_upper_wall;
}

bool RPG::Map::GetGeneratorFloorB() const {
    return generator_floor_b;
}

void RPG::Map::SetGeneratorFloorB(bool generator_floor_b) {
    this->generator_floor_b = generator_floor_b;
}

bool RPG::Map::GetGeneratorFloorC() const {
    return generator_floor_c;
}

void RPG::Map::SetGeneratorFloorC(bool generator_floor_c) {
    this->generator_floor_c = generator_floor_c;
}

bool RPG::Map::GetGeneratorExtraB() const {
    return generator_extra_b;
}

void RPG::Map::SetGeneratorExtraB(bool generator_extra_b) {
    this->generator_extra_b = generator_extra_b;
}

bool RPG::Map::GetGeneratorExtraC() const {
    return generator_extra_c;
}

void RPG::Map::SetGeneratorExtraC(bool generator_extra_c) {
    this->generator_extra_c = generator_extra_c;
}

const std::vector<uint32_t>& RPG::Map::GetGeneratorX() const  {
    return generator_x;
}

std::vector<uint32_t>& RPG::Map::GetGeneratorX() {
    return generator_x;
}

void RPG::Map::SetGeneratorX(const std::vector<uint32_t>& generator_x) {
    this->generator_x = generator_x;
}

const std::vector<uint32_t>& RPG::Map::GetGeneratorY() const  {
    return generator_y;
}

std::vector<uint32_t>& RPG::Map::GetGeneratorY() {
    return generator_y;
}

void RPG::Map::SetGeneratorY(const std::vector<uint32_t>& generator_y) {
    this->generator_y = generator_y;
}

const std::vector<int16_t>& RPG::Map::GetGeneratorTileIds() const  {
    return generator_tile_ids;
}

std::vector<int16_t>& RPG::Map::GetGeneratorTileIds() {
    return generator_tile_ids;
}

void RPG::Map::SetGeneratorTileIds(const std::vector<int16_t>& generator_tile_ids) {
    this->generator_tile_ids = generator_tile_ids;
}

const std::vector<int16_t>& RPG::Map::GetLowerLayer() const  {
    return lower_layer;
}

std::vector<int16_t>& RPG::Map::GetLowerLayer() {
    return lower_layer;
}

void RPG::Map::SetLowerLayer(const std::vector<int16_t>& lower_layer) {
    this->lower_layer = lower_layer;
}

const std::vector<int16_t>& RPG::Map::GetUpperLayer() const  {
    return upper_layer;
}

std::vector<int16_t>& RPG::Map::GetUpperLayer() {
    return upper_layer;
}

void RPG::Map::SetUpperLayer(const std::vector<int16_t>& upper_layer) {
    this->upper_layer = upper_layer;
}

const std::vector<RPG::Event>& RPG::Map::GetEvents() const  {
    return events;
}

std::vector<RPG::Event>& RPG::Map::GetEvents() {
    return events;
}

void RPG::Map::SetEvents(const std::vector<RPG::Event>& events) {
    this->events = events;
}

int RPG::Map::GetSaveCount() const {
    return save_count;
}

void RPG::Map::SetSaveCount(int save_count) {
    this->save_count = save_count;
}

