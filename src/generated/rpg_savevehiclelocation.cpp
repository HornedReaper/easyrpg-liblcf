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
#include "rpg_savevehiclelocation.h"

RPG::SaveVehicleLocation::SaveVehicleLocation(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

bool RPG::SaveVehicleLocation::GetActive() const {
	return getter<bool>("active");
}

void RPG::SaveVehicleLocation::SetActive(bool active) {
	setter<bool>("active", active);
}

int RPG::SaveVehicleLocation::GetMapId() const {
	return getter<int>("map_id");
}

void RPG::SaveVehicleLocation::SetMapId(int map_id) {
	setter<int>("map_id", map_id);
}

int RPG::SaveVehicleLocation::GetPositionX() const {
	return getter<int>("position_x");
}

void RPG::SaveVehicleLocation::SetPositionX(int position_x) {
	setter<int>("position_x", position_x);
}

int RPG::SaveVehicleLocation::GetPositionY() const {
	return getter<int>("position_y");
}

void RPG::SaveVehicleLocation::SetPositionY(int position_y) {
	setter<int>("position_y", position_y);
}

int RPG::SaveVehicleLocation::GetDirection() const {
	return getter<int>("direction");
}

void RPG::SaveVehicleLocation::SetDirection(int direction) {
	setter<int>("direction", direction);
}

int RPG::SaveVehicleLocation::GetSpriteDirection() const {
	return getter<int>("sprite_direction");
}

void RPG::SaveVehicleLocation::SetSpriteDirection(int sprite_direction) {
	setter<int>("sprite_direction", sprite_direction);
}

int RPG::SaveVehicleLocation::GetAnimFrame() const {
	return getter<int>("anim_frame");
}

void RPG::SaveVehicleLocation::SetAnimFrame(int anim_frame) {
	setter<int>("anim_frame", anim_frame);
}

int RPG::SaveVehicleLocation::GetTransparency() const {
	return getter<int>("transparency");
}

void RPG::SaveVehicleLocation::SetTransparency(int transparency) {
	setter<int>("transparency", transparency);
}

int RPG::SaveVehicleLocation::GetRemainingStep() const {
	return getter<int>("remaining_step");
}

void RPG::SaveVehicleLocation::SetRemainingStep(int remaining_step) {
	setter<int>("remaining_step", remaining_step);
}

int RPG::SaveVehicleLocation::GetMoveFrequency() const {
	return getter<int>("move_frequency");
}

void RPG::SaveVehicleLocation::SetMoveFrequency(int move_frequency) {
	setter<int>("move_frequency", move_frequency);
}

int RPG::SaveVehicleLocation::GetLayer() const {
	return getter<int>("layer");
}

void RPG::SaveVehicleLocation::SetLayer(int layer) {
	setter<int>("layer", layer);
}

bool RPG::SaveVehicleLocation::GetOverlapForbidden() const {
	return getter<bool>("overlap_forbidden");
}

void RPG::SaveVehicleLocation::SetOverlapForbidden(bool overlap_forbidden) {
	setter<bool>("overlap_forbidden", overlap_forbidden);
}

int RPG::SaveVehicleLocation::GetAnimationType() const {
	return getter<int>("animation_type");
}

void RPG::SaveVehicleLocation::SetAnimationType(int animation_type) {
	setter<int>("animation_type", animation_type);
}

bool RPG::SaveVehicleLocation::GetLockFacing() const {
	return getter<bool>("lock_facing");
}

void RPG::SaveVehicleLocation::SetLockFacing(bool lock_facing) {
	setter<bool>("lock_facing", lock_facing);
}

int RPG::SaveVehicleLocation::GetMoveSpeed() const {
	return getter<int>("move_speed");
}

void RPG::SaveVehicleLocation::SetMoveSpeed(int move_speed) {
	setter<int>("move_speed", move_speed);
}

const RPG::MoveRoute& RPG::SaveVehicleLocation::GetMoveRoute() const {
	return getter<const RPG::MoveRoute&>("move_route");
}

RPG::MoveRoute& RPG::SaveVehicleLocation::GetMoveRoute() {
	return getter<RPG::MoveRoute&>("move_route");
}

void RPG::SaveVehicleLocation::SetMoveRoute(const RPG::MoveRoute& move_route) {
	setter<RPG::MoveRoute>("move_route", move_route);
}

bool RPG::SaveVehicleLocation::GetMoveRouteOverwrite() const {
	return getter<bool>("move_route_overwrite");
}

void RPG::SaveVehicleLocation::SetMoveRouteOverwrite(bool move_route_overwrite) {
	setter<bool>("move_route_overwrite", move_route_overwrite);
}

int RPG::SaveVehicleLocation::GetMoveRouteIndex() const {
	return getter<int>("move_route_index");
}

void RPG::SaveVehicleLocation::SetMoveRouteIndex(int move_route_index) {
	setter<int>("move_route_index", move_route_index);
}

bool RPG::SaveVehicleLocation::GetMoveRouteRepeated() const {
	return getter<bool>("move_route_repeated");
}

void RPG::SaveVehicleLocation::SetMoveRouteRepeated(bool move_route_repeated) {
	setter<bool>("move_route_repeated", move_route_repeated);
}

int RPG::SaveVehicleLocation::GetAnimPaused() const {
	return getter<int>("anim_paused");
}

void RPG::SaveVehicleLocation::SetAnimPaused(int anim_paused) {
	setter<int>("anim_paused", anim_paused);
}

bool RPG::SaveVehicleLocation::GetThrough() const {
	return getter<bool>("through");
}

void RPG::SaveVehicleLocation::SetThrough(bool through) {
	setter<bool>("through", through);
}

int RPG::SaveVehicleLocation::GetStopCount() const {
	return getter<int>("stop_count");
}

void RPG::SaveVehicleLocation::SetStopCount(int stop_count) {
	setter<int>("stop_count", stop_count);
}

int RPG::SaveVehicleLocation::GetAnimCount() const {
	return getter<int>("anim_count");
}

void RPG::SaveVehicleLocation::SetAnimCount(int anim_count) {
	setter<int>("anim_count", anim_count);
}

int RPG::SaveVehicleLocation::GetMaxStopCount() const {
	return getter<int>("max_stop_count");
}

void RPG::SaveVehicleLocation::SetMaxStopCount(int max_stop_count) {
	setter<int>("max_stop_count", max_stop_count);
}

bool RPG::SaveVehicleLocation::GetJumping() const {
	return getter<bool>("jumping");
}

void RPG::SaveVehicleLocation::SetJumping(bool jumping) {
	setter<bool>("jumping", jumping);
}

int RPG::SaveVehicleLocation::GetBeginJumpX() const {
	return getter<int>("begin_jump_x");
}

void RPG::SaveVehicleLocation::SetBeginJumpX(int begin_jump_x) {
	setter<int>("begin_jump_x", begin_jump_x);
}

int RPG::SaveVehicleLocation::GetBeginJumpY() const {
	return getter<int>("begin_jump_y");
}

void RPG::SaveVehicleLocation::SetBeginJumpY(int begin_jump_y) {
	setter<int>("begin_jump_y", begin_jump_y);
}

int RPG::SaveVehicleLocation::GetUnknown47Pause() const {
	return getter<int>("unknown_47_pause");
}

void RPG::SaveVehicleLocation::SetUnknown47Pause(int unknown_47_pause) {
	setter<int>("unknown_47_pause", unknown_47_pause);
}

bool RPG::SaveVehicleLocation::GetFlying() const {
	return getter<bool>("flying");
}

void RPG::SaveVehicleLocation::SetFlying(bool flying) {
	setter<bool>("flying", flying);
}

const std::string& RPG::SaveVehicleLocation::GetSpriteName() const {
	return getter<const std::string&>("sprite_name");
}

std::string& RPG::SaveVehicleLocation::GetSpriteName() {
	return getter<std::string&>("sprite_name");
}

void RPG::SaveVehicleLocation::SetSpriteName(const std::string& sprite_name) {
	setter<std::string>("sprite_name", sprite_name);
}

int RPG::SaveVehicleLocation::GetSpriteId() const {
	return getter<int>("sprite_id");
}

void RPG::SaveVehicleLocation::SetSpriteId(int sprite_id) {
	setter<int>("sprite_id", sprite_id);
}

int RPG::SaveVehicleLocation::GetUnknown4bSpriteMove() const {
	return getter<int>("unknown_4b_sprite_move");
}

void RPG::SaveVehicleLocation::SetUnknown4bSpriteMove(int unknown_4b_sprite_move) {
	setter<int>("unknown_4b_sprite_move", unknown_4b_sprite_move);
}

int RPG::SaveVehicleLocation::GetFlashRed() const {
	return getter<int>("flash_red");
}

void RPG::SaveVehicleLocation::SetFlashRed(int flash_red) {
	setter<int>("flash_red", flash_red);
}

int RPG::SaveVehicleLocation::GetFlashGreen() const {
	return getter<int>("flash_green");
}

void RPG::SaveVehicleLocation::SetFlashGreen(int flash_green) {
	setter<int>("flash_green", flash_green);
}

int RPG::SaveVehicleLocation::GetFlashBlue() const {
	return getter<int>("flash_blue");
}

void RPG::SaveVehicleLocation::SetFlashBlue(int flash_blue) {
	setter<int>("flash_blue", flash_blue);
}

double RPG::SaveVehicleLocation::GetFlashCurrentLevel() const {
	return getter<double>("flash_current_level");
}

void RPG::SaveVehicleLocation::SetFlashCurrentLevel(double flash_current_level) {
	setter<double>("flash_current_level", flash_current_level);
}

int RPG::SaveVehicleLocation::GetFlashTimeLeft() const {
	return getter<int>("flash_time_left");
}

void RPG::SaveVehicleLocation::SetFlashTimeLeft(int flash_time_left) {
	setter<int>("flash_time_left", flash_time_left);
}

int RPG::SaveVehicleLocation::GetVehicle() const {
	return getter<int>("vehicle");
}

void RPG::SaveVehicleLocation::SetVehicle(int vehicle) {
	setter<int>("vehicle", vehicle);
}

int RPG::SaveVehicleLocation::GetOriginalMoveRouteIndex() const {
	return getter<int>("original_move_route_index");
}

void RPG::SaveVehicleLocation::SetOriginalMoveRouteIndex(int original_move_route_index) {
	setter<int>("original_move_route_index", original_move_route_index);
}

int RPG::SaveVehicleLocation::GetRemainingAscent() const {
	return getter<int>("remaining_ascent");
}

void RPG::SaveVehicleLocation::SetRemainingAscent(int remaining_ascent) {
	setter<int>("remaining_ascent", remaining_ascent);
}

int RPG::SaveVehicleLocation::GetRemainingDescent() const {
	return getter<int>("remaining_descent");
}

void RPG::SaveVehicleLocation::SetRemainingDescent(int remaining_descent) {
	setter<int>("remaining_descent", remaining_descent);
}

const std::string& RPG::SaveVehicleLocation::GetSprite2Name() const {
	return getter<const std::string&>("sprite2_name");
}

std::string& RPG::SaveVehicleLocation::GetSprite2Name() {
	return getter<std::string&>("sprite2_name");
}

void RPG::SaveVehicleLocation::SetSprite2Name(const std::string& sprite2_name) {
	setter<std::string>("sprite2_name", sprite2_name);
}

int RPG::SaveVehicleLocation::GetSprite2Id() const {
	return getter<int>("sprite2_id");
}

void RPG::SaveVehicleLocation::SetSprite2Id(int sprite2_id) {
	setter<int>("sprite2_id", sprite2_id);
}

