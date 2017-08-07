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
#include "rpg_savemapevent.h"

RPG::SaveMapEvent::SaveMapEvent(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

bool RPG::SaveMapEvent::GetActive() const {
	return getter<bool>("active");
}

void RPG::SaveMapEvent::SetActive(bool active) {
	setter<bool>("active", active);
}

int RPG::SaveMapEvent::GetMapId() const {
	return getter<int>("map_id");
}

void RPG::SaveMapEvent::SetMapId(int map_id) {
	setter<int>("map_id", map_id);
}

int RPG::SaveMapEvent::GetPositionX() const {
	return getter<int>("position_x");
}

void RPG::SaveMapEvent::SetPositionX(int position_x) {
	setter<int>("position_x", position_x);
}

int RPG::SaveMapEvent::GetPositionY() const {
	return getter<int>("position_y");
}

void RPG::SaveMapEvent::SetPositionY(int position_y) {
	setter<int>("position_y", position_y);
}

int RPG::SaveMapEvent::GetDirection() const {
	return getter<int>("direction");
}

void RPG::SaveMapEvent::SetDirection(int direction) {
	setter<int>("direction", direction);
}

int RPG::SaveMapEvent::GetSpriteDirection() const {
	return getter<int>("sprite_direction");
}

void RPG::SaveMapEvent::SetSpriteDirection(int sprite_direction) {
	setter<int>("sprite_direction", sprite_direction);
}

int RPG::SaveMapEvent::GetAnimFrame() const {
	return getter<int>("anim_frame");
}

void RPG::SaveMapEvent::SetAnimFrame(int anim_frame) {
	setter<int>("anim_frame", anim_frame);
}

int RPG::SaveMapEvent::GetTransparency() const {
	return getter<int>("transparency");
}

void RPG::SaveMapEvent::SetTransparency(int transparency) {
	setter<int>("transparency", transparency);
}

int RPG::SaveMapEvent::GetRemainingStep() const {
	return getter<int>("remaining_step");
}

void RPG::SaveMapEvent::SetRemainingStep(int remaining_step) {
	setter<int>("remaining_step", remaining_step);
}

int RPG::SaveMapEvent::GetMoveFrequency() const {
	return getter<int>("move_frequency");
}

void RPG::SaveMapEvent::SetMoveFrequency(int move_frequency) {
	setter<int>("move_frequency", move_frequency);
}

int RPG::SaveMapEvent::GetLayer() const {
	return getter<int>("layer");
}

void RPG::SaveMapEvent::SetLayer(int layer) {
	setter<int>("layer", layer);
}

bool RPG::SaveMapEvent::GetOverlapForbidden() const {
	return getter<bool>("overlap_forbidden");
}

void RPG::SaveMapEvent::SetOverlapForbidden(bool overlap_forbidden) {
	setter<bool>("overlap_forbidden", overlap_forbidden);
}

int RPG::SaveMapEvent::GetAnimationType() const {
	return getter<int>("animation_type");
}

void RPG::SaveMapEvent::SetAnimationType(int animation_type) {
	setter<int>("animation_type", animation_type);
}

bool RPG::SaveMapEvent::GetLockFacing() const {
	return getter<bool>("lock_facing");
}

void RPG::SaveMapEvent::SetLockFacing(bool lock_facing) {
	setter<bool>("lock_facing", lock_facing);
}

int RPG::SaveMapEvent::GetMoveSpeed() const {
	return getter<int>("move_speed");
}

void RPG::SaveMapEvent::SetMoveSpeed(int move_speed) {
	setter<int>("move_speed", move_speed);
}

const RPG::MoveRoute& RPG::SaveMapEvent::GetMoveRoute() const {
	return getter<const RPG::MoveRoute&>("move_route");
}

RPG::MoveRoute& RPG::SaveMapEvent::GetMoveRoute() {
	return getter<RPG::MoveRoute&>("move_route");
}

void RPG::SaveMapEvent::SetMoveRoute(const RPG::MoveRoute& move_route) {
	setter<RPG::MoveRoute>("move_route", move_route);
}

bool RPG::SaveMapEvent::GetMoveRouteOverwrite() const {
	return getter<bool>("move_route_overwrite");
}

void RPG::SaveMapEvent::SetMoveRouteOverwrite(bool move_route_overwrite) {
	setter<bool>("move_route_overwrite", move_route_overwrite);
}

int RPG::SaveMapEvent::GetMoveRouteIndex() const {
	return getter<int>("move_route_index");
}

void RPG::SaveMapEvent::SetMoveRouteIndex(int move_route_index) {
	setter<int>("move_route_index", move_route_index);
}

bool RPG::SaveMapEvent::GetMoveRouteRepeated() const {
	return getter<bool>("move_route_repeated");
}

void RPG::SaveMapEvent::SetMoveRouteRepeated(bool move_route_repeated) {
	setter<bool>("move_route_repeated", move_route_repeated);
}

int RPG::SaveMapEvent::GetUnknown2fOverlap() const {
	return getter<int>("unknown_2f_overlap");
}

void RPG::SaveMapEvent::SetUnknown2fOverlap(int unknown_2f_overlap) {
	setter<int>("unknown_2f_overlap", unknown_2f_overlap);
}

int RPG::SaveMapEvent::GetAnimPaused() const {
	return getter<int>("anim_paused");
}

void RPG::SaveMapEvent::SetAnimPaused(int anim_paused) {
	setter<int>("anim_paused", anim_paused);
}

bool RPG::SaveMapEvent::GetThrough() const {
	return getter<bool>("through");
}

void RPG::SaveMapEvent::SetThrough(bool through) {
	setter<bool>("through", through);
}

int RPG::SaveMapEvent::GetStopCount() const {
	return getter<int>("stop_count");
}

void RPG::SaveMapEvent::SetStopCount(int stop_count) {
	setter<int>("stop_count", stop_count);
}

int RPG::SaveMapEvent::GetAnimCount() const {
	return getter<int>("anim_count");
}

void RPG::SaveMapEvent::SetAnimCount(int anim_count) {
	setter<int>("anim_count", anim_count);
}

int RPG::SaveMapEvent::GetMaxStopCount() const {
	return getter<int>("max_stop_count");
}

void RPG::SaveMapEvent::SetMaxStopCount(int max_stop_count) {
	setter<int>("max_stop_count", max_stop_count);
}

bool RPG::SaveMapEvent::GetJumping() const {
	return getter<bool>("jumping");
}

void RPG::SaveMapEvent::SetJumping(bool jumping) {
	setter<bool>("jumping", jumping);
}

int RPG::SaveMapEvent::GetBeginJumpX() const {
	return getter<int>("begin_jump_x");
}

void RPG::SaveMapEvent::SetBeginJumpX(int begin_jump_x) {
	setter<int>("begin_jump_x", begin_jump_x);
}

int RPG::SaveMapEvent::GetBeginJumpY() const {
	return getter<int>("begin_jump_y");
}

void RPG::SaveMapEvent::SetBeginJumpY(int begin_jump_y) {
	setter<int>("begin_jump_y", begin_jump_y);
}

int RPG::SaveMapEvent::GetUnknown47Pause() const {
	return getter<int>("unknown_47_pause");
}

void RPG::SaveMapEvent::SetUnknown47Pause(int unknown_47_pause) {
	setter<int>("unknown_47_pause", unknown_47_pause);
}

bool RPG::SaveMapEvent::GetFlying() const {
	return getter<bool>("flying");
}

void RPG::SaveMapEvent::SetFlying(bool flying) {
	setter<bool>("flying", flying);
}

const std::string& RPG::SaveMapEvent::GetSpriteName() const {
	return getter<const std::string&>("sprite_name");
}

std::string& RPG::SaveMapEvent::GetSpriteName() {
	return getter<std::string&>("sprite_name");
}

void RPG::SaveMapEvent::SetSpriteName(const std::string& sprite_name) {
	setter<std::string>("sprite_name", sprite_name);
}

int RPG::SaveMapEvent::GetSpriteId() const {
	return getter<int>("sprite_id");
}

void RPG::SaveMapEvent::SetSpriteId(int sprite_id) {
	setter<int>("sprite_id", sprite_id);
}

int RPG::SaveMapEvent::GetUnknown4bSpriteMove() const {
	return getter<int>("unknown_4b_sprite_move");
}

void RPG::SaveMapEvent::SetUnknown4bSpriteMove(int unknown_4b_sprite_move) {
	setter<int>("unknown_4b_sprite_move", unknown_4b_sprite_move);
}

int RPG::SaveMapEvent::GetFlashRed() const {
	return getter<int>("flash_red");
}

void RPG::SaveMapEvent::SetFlashRed(int flash_red) {
	setter<int>("flash_red", flash_red);
}

int RPG::SaveMapEvent::GetFlashGreen() const {
	return getter<int>("flash_green");
}

void RPG::SaveMapEvent::SetFlashGreen(int flash_green) {
	setter<int>("flash_green", flash_green);
}

int RPG::SaveMapEvent::GetFlashBlue() const {
	return getter<int>("flash_blue");
}

void RPG::SaveMapEvent::SetFlashBlue(int flash_blue) {
	setter<int>("flash_blue", flash_blue);
}

double RPG::SaveMapEvent::GetFlashCurrentLevel() const {
	return getter<double>("flash_current_level");
}

void RPG::SaveMapEvent::SetFlashCurrentLevel(double flash_current_level) {
	setter<double>("flash_current_level", flash_current_level);
}

int RPG::SaveMapEvent::GetFlashTimeLeft() const {
	return getter<int>("flash_time_left");
}

void RPG::SaveMapEvent::SetFlashTimeLeft(int flash_time_left) {
	setter<int>("flash_time_left", flash_time_left);
}

bool RPG::SaveMapEvent::GetRunning() const {
	return getter<bool>("running");
}

void RPG::SaveMapEvent::SetRunning(bool running) {
	setter<bool>("running", running);
}

int RPG::SaveMapEvent::GetOriginalMoveRouteIndex() const {
	return getter<int>("original_move_route_index");
}

void RPG::SaveMapEvent::SetOriginalMoveRouteIndex(int original_move_route_index) {
	setter<int>("original_move_route_index", original_move_route_index);
}

bool RPG::SaveMapEvent::GetPending() const {
	return getter<bool>("pending");
}

void RPG::SaveMapEvent::SetPending(bool pending) {
	setter<bool>("pending", pending);
}

const RPG::SaveEventData& RPG::SaveMapEvent::GetEventData() const {
	return getter<const RPG::SaveEventData&>("event_data");
}

RPG::SaveEventData& RPG::SaveMapEvent::GetEventData() {
	return getter<RPG::SaveEventData&>("event_data");
}

void RPG::SaveMapEvent::SetEventData(const RPG::SaveEventData& event_data) {
	setter<RPG::SaveEventData>("event_data", event_data);
}

