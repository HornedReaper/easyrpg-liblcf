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

RPG::Map::Map(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

int RPG::Map::GetChipsetId() const {
	return getter<int>("chipset_id");
}

void RPG::Map::SetChipsetId(int chipset_id) {
	setter<int>("chipset_id", chipset_id);
}

int RPG::Map::GetWidth() const {
	return getter<int>("width");
}

void RPG::Map::SetWidth(int width) {
	setter<int>("width", width);
}

int RPG::Map::GetHeight() const {
	return getter<int>("height");
}

void RPG::Map::SetHeight(int height) {
	setter<int>("height", height);
}

int RPG::Map::GetScrollType() const {
	return getter<int>("scroll_type");
}

void RPG::Map::SetScrollType(int scroll_type) {
	setter<int>("scroll_type", scroll_type);
}

bool RPG::Map::GetParallaxFlag() const {
	return getter<bool>("parallax_flag");
}

void RPG::Map::SetParallaxFlag(bool parallax_flag) {
	setter<bool>("parallax_flag", parallax_flag);
}

const std::string& RPG::Map::GetParallaxName() const {
	return getter<const std::string&>("parallax_name");
}

std::string& RPG::Map::GetParallaxName() {
	return getter<std::string&>("parallax_name");
}

void RPG::Map::SetParallaxName(const std::string& parallax_name) {
	setter<std::string>("parallax_name", parallax_name);
}

bool RPG::Map::GetParallaxLoopX() const {
	return getter<bool>("parallax_loop_x");
}

void RPG::Map::SetParallaxLoopX(bool parallax_loop_x) {
	setter<bool>("parallax_loop_x", parallax_loop_x);
}

bool RPG::Map::GetParallaxLoopY() const {
	return getter<bool>("parallax_loop_y");
}

void RPG::Map::SetParallaxLoopY(bool parallax_loop_y) {
	setter<bool>("parallax_loop_y", parallax_loop_y);
}

bool RPG::Map::GetParallaxAutoLoopX() const {
	return getter<bool>("parallax_auto_loop_x");
}

void RPG::Map::SetParallaxAutoLoopX(bool parallax_auto_loop_x) {
	setter<bool>("parallax_auto_loop_x", parallax_auto_loop_x);
}

int RPG::Map::GetParallaxSx() const {
	return getter<int>("parallax_sx");
}

void RPG::Map::SetParallaxSx(int parallax_sx) {
	setter<int>("parallax_sx", parallax_sx);
}

bool RPG::Map::GetParallaxAutoLoopY() const {
	return getter<bool>("parallax_auto_loop_y");
}

void RPG::Map::SetParallaxAutoLoopY(bool parallax_auto_loop_y) {
	setter<bool>("parallax_auto_loop_y", parallax_auto_loop_y);
}

int RPG::Map::GetParallaxSy() const {
	return getter<int>("parallax_sy");
}

void RPG::Map::SetParallaxSy(int parallax_sy) {
	setter<int>("parallax_sy", parallax_sy);
}

bool RPG::Map::GetGeneratorFlag() const {
	return getter<bool>("generator_flag");
}

void RPG::Map::SetGeneratorFlag(bool generator_flag) {
	setter<bool>("generator_flag", generator_flag);
}

int RPG::Map::GetGeneratorMode() const {
	return getter<int>("generator_mode");
}

void RPG::Map::SetGeneratorMode(int generator_mode) {
	setter<int>("generator_mode", generator_mode);
}

bool RPG::Map::GetTopLevel() const {
	return getter<bool>("top_level");
}

void RPG::Map::SetTopLevel(bool top_level) {
	setter<bool>("top_level", top_level);
}

int RPG::Map::GetGeneratorTiles() const {
	return getter<int>("generator_tiles");
}

void RPG::Map::SetGeneratorTiles(int generator_tiles) {
	setter<int>("generator_tiles", generator_tiles);
}

int RPG::Map::GetGeneratorWidth() const {
	return getter<int>("generator_width");
}

void RPG::Map::SetGeneratorWidth(int generator_width) {
	setter<int>("generator_width", generator_width);
}

int RPG::Map::GetGeneratorHeight() const {
	return getter<int>("generator_height");
}

void RPG::Map::SetGeneratorHeight(int generator_height) {
	setter<int>("generator_height", generator_height);
}

bool RPG::Map::GetGeneratorSurround() const {
	return getter<bool>("generator_surround");
}

void RPG::Map::SetGeneratorSurround(bool generator_surround) {
	setter<bool>("generator_surround", generator_surround);
}

bool RPG::Map::GetGeneratorUpperWall() const {
	return getter<bool>("generator_upper_wall");
}

void RPG::Map::SetGeneratorUpperWall(bool generator_upper_wall) {
	setter<bool>("generator_upper_wall", generator_upper_wall);
}

bool RPG::Map::GetGeneratorFloorB() const {
	return getter<bool>("generator_floor_b");
}

void RPG::Map::SetGeneratorFloorB(bool generator_floor_b) {
	setter<bool>("generator_floor_b", generator_floor_b);
}

bool RPG::Map::GetGeneratorFloorC() const {
	return getter<bool>("generator_floor_c");
}

void RPG::Map::SetGeneratorFloorC(bool generator_floor_c) {
	setter<bool>("generator_floor_c", generator_floor_c);
}

bool RPG::Map::GetGeneratorExtraB() const {
	return getter<bool>("generator_extra_b");
}

void RPG::Map::SetGeneratorExtraB(bool generator_extra_b) {
	setter<bool>("generator_extra_b", generator_extra_b);
}

bool RPG::Map::GetGeneratorExtraC() const {
	return getter<bool>("generator_extra_c");
}

void RPG::Map::SetGeneratorExtraC(bool generator_extra_c) {
	setter<bool>("generator_extra_c", generator_extra_c);
}

const std::vector<uint32_t>& RPG::Map::GetGeneratorX() const {
	return vector_getter<const std::vector<uint32_t>&, uint32_t>("generator_x");
}

std::vector<uint32_t>& RPG::Map::GetGeneratorX() {
	return vector_getter<std::vector<uint32_t>&, uint32_t>("generator_x");
}

const std::vector<uint32_t>& RPG::Map::GetGeneratorY() const {
	return vector_getter<const std::vector<uint32_t>&, uint32_t>("generator_y");
}

std::vector<uint32_t>& RPG::Map::GetGeneratorY() {
	return vector_getter<std::vector<uint32_t>&, uint32_t>("generator_y");
}

const std::vector<int16_t>& RPG::Map::GetGeneratorTileIds() const {
	return vector_getter<const std::vector<int16_t>&, int16_t>("generator_tile_ids");
}

std::vector<int16_t>& RPG::Map::GetGeneratorTileIds() {
	return vector_getter<std::vector<int16_t>&, int16_t>("generator_tile_ids");
}

const std::vector<int16_t>& RPG::Map::GetLowerLayer() const {
	return vector_getter<const std::vector<int16_t>&, int16_t>("lower_layer");
}

std::vector<int16_t>& RPG::Map::GetLowerLayer() {
	return vector_getter<std::vector<int16_t>&, int16_t>("lower_layer");
}

const std::vector<int16_t>& RPG::Map::GetUpperLayer() const {
	return vector_getter<const std::vector<int16_t>&, int16_t>("upper_layer");
}

std::vector<int16_t>& RPG::Map::GetUpperLayer() {
	return vector_getter<std::vector<int16_t>&, int16_t>("upper_layer");
}

const std::vector<RPG::Event>& RPG::Map::GetEvents() const {
	return vector_getter<const std::vector<RPG::Event>&, RPG::Event>("events");
}

std::vector<RPG::Event>& RPG::Map::GetEvents() {
	return vector_getter<std::vector<RPG::Event>&, RPG::Event>("events");
}

int RPG::Map::GetSaveCount() const {
	return getter<int>("save_count");
}

void RPG::Map::SetSaveCount(int save_count) {
	setter<int>("save_count", save_count);
}

