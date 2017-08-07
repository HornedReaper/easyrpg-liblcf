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
#include "rpg_savepartylocation.h"

RPG::SavePartyLocation::SavePartyLocation(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

bool RPG::SavePartyLocation::GetActive() const {
	return getter<bool>("active");
}

void RPG::SavePartyLocation::SetActive(bool active) {
	setter<bool>("active", active);
}

int RPG::SavePartyLocation::GetMapId() const {
	return getter<int>("map_id");
}

void RPG::SavePartyLocation::SetMapId(int map_id) {
	setter<int>("map_id", map_id);
}

int RPG::SavePartyLocation::GetPositionX() const {
	return getter<int>("position_x");
}

void RPG::SavePartyLocation::SetPositionX(int position_x) {
	setter<int>("position_x", position_x);
}

int RPG::SavePartyLocation::GetPositionY() const {
	return getter<int>("position_y");
}

void RPG::SavePartyLocation::SetPositionY(int position_y) {
	setter<int>("position_y", position_y);
}

int RPG::SavePartyLocation::GetDirection() const {
	return getter<int>("direction");
}

void RPG::SavePartyLocation::SetDirection(int direction) {
	setter<int>("direction", direction);
}

int RPG::SavePartyLocation::GetSpriteDirection() const {
	return getter<int>("sprite_direction");
}

void RPG::SavePartyLocation::SetSpriteDirection(int sprite_direction) {
	setter<int>("sprite_direction", sprite_direction);
}

int RPG::SavePartyLocation::GetAnimFrame() const {
	return getter<int>("anim_frame");
}

void RPG::SavePartyLocation::SetAnimFrame(int anim_frame) {
	setter<int>("anim_frame", anim_frame);
}

int RPG::SavePartyLocation::GetTransparency() const {
	return getter<int>("transparency");
}

void RPG::SavePartyLocation::SetTransparency(int transparency) {
	setter<int>("transparency", transparency);
}

int RPG::SavePartyLocation::GetRemainingStep() const {
	return getter<int>("remaining_step");
}

void RPG::SavePartyLocation::SetRemainingStep(int remaining_step) {
	setter<int>("remaining_step", remaining_step);
}

int RPG::SavePartyLocation::GetMoveFrequency() const {
	return getter<int>("move_frequency");
}

void RPG::SavePartyLocation::SetMoveFrequency(int move_frequency) {
	setter<int>("move_frequency", move_frequency);
}

int RPG::SavePartyLocation::GetLayer() const {
	return getter<int>("layer");
}

void RPG::SavePartyLocation::SetLayer(int layer) {
	setter<int>("layer", layer);
}

bool RPG::SavePartyLocation::GetOverlapForbidden() const {
	return getter<bool>("overlap_forbidden");
}

void RPG::SavePartyLocation::SetOverlapForbidden(bool overlap_forbidden) {
	setter<bool>("overlap_forbidden", overlap_forbidden);
}

int RPG::SavePartyLocation::GetAnimationType() const {
	return getter<int>("animation_type");
}

void RPG::SavePartyLocation::SetAnimationType(int animation_type) {
	setter<int>("animation_type", animation_type);
}

bool RPG::SavePartyLocation::GetLockFacing() const {
	return getter<bool>("lock_facing");
}

void RPG::SavePartyLocation::SetLockFacing(bool lock_facing) {
	setter<bool>("lock_facing", lock_facing);
}

int RPG::SavePartyLocation::GetMoveSpeed() const {
	return getter<int>("move_speed");
}

void RPG::SavePartyLocation::SetMoveSpeed(int move_speed) {
	setter<int>("move_speed", move_speed);
}

const RPG::MoveRoute& RPG::SavePartyLocation::GetMoveRoute() const {
	return getter<const RPG::MoveRoute&>("move_route");
}

RPG::MoveRoute& RPG::SavePartyLocation::GetMoveRoute() {
	return getter<RPG::MoveRoute&>("move_route");
}

void RPG::SavePartyLocation::SetMoveRoute(const RPG::MoveRoute& move_route) {
	setter<RPG::MoveRoute>("move_route", move_route);
}

bool RPG::SavePartyLocation::GetMoveRouteOverwrite() const {
	return getter<bool>("move_route_overwrite");
}

void RPG::SavePartyLocation::SetMoveRouteOverwrite(bool move_route_overwrite) {
	setter<bool>("move_route_overwrite", move_route_overwrite);
}

int RPG::SavePartyLocation::GetMoveRouteIndex() const {
	return getter<int>("move_route_index");
}

void RPG::SavePartyLocation::SetMoveRouteIndex(int move_route_index) {
	setter<int>("move_route_index", move_route_index);
}

bool RPG::SavePartyLocation::GetMoveRouteRepeated() const {
	return getter<bool>("move_route_repeated");
}

void RPG::SavePartyLocation::SetMoveRouteRepeated(bool move_route_repeated) {
	setter<bool>("move_route_repeated", move_route_repeated);
}

bool RPG::SavePartyLocation::GetSpriteTransparent() const {
	return getter<bool>("sprite_transparent");
}

void RPG::SavePartyLocation::SetSpriteTransparent(bool sprite_transparent) {
	setter<bool>("sprite_transparent", sprite_transparent);
}

int RPG::SavePartyLocation::GetUnknown2fOverlap() const {
	return getter<int>("unknown_2f_overlap");
}

void RPG::SavePartyLocation::SetUnknown2fOverlap(int unknown_2f_overlap) {
	setter<int>("unknown_2f_overlap", unknown_2f_overlap);
}

int RPG::SavePartyLocation::GetAnimPaused() const {
	return getter<int>("anim_paused");
}

void RPG::SavePartyLocation::SetAnimPaused(int anim_paused) {
	setter<int>("anim_paused", anim_paused);
}

bool RPG::SavePartyLocation::GetThrough() const {
	return getter<bool>("through");
}

void RPG::SavePartyLocation::SetThrough(bool through) {
	setter<bool>("through", through);
}

int RPG::SavePartyLocation::GetStopCount() const {
	return getter<int>("stop_count");
}

void RPG::SavePartyLocation::SetStopCount(int stop_count) {
	setter<int>("stop_count", stop_count);
}

int RPG::SavePartyLocation::GetAnimCount() const {
	return getter<int>("anim_count");
}

void RPG::SavePartyLocation::SetAnimCount(int anim_count) {
	setter<int>("anim_count", anim_count);
}

int RPG::SavePartyLocation::GetMaxStopCount() const {
	return getter<int>("max_stop_count");
}

void RPG::SavePartyLocation::SetMaxStopCount(int max_stop_count) {
	setter<int>("max_stop_count", max_stop_count);
}

bool RPG::SavePartyLocation::GetJumping() const {
	return getter<bool>("jumping");
}

void RPG::SavePartyLocation::SetJumping(bool jumping) {
	setter<bool>("jumping", jumping);
}

int RPG::SavePartyLocation::GetBeginJumpX() const {
	return getter<int>("begin_jump_x");
}

void RPG::SavePartyLocation::SetBeginJumpX(int begin_jump_x) {
	setter<int>("begin_jump_x", begin_jump_x);
}

int RPG::SavePartyLocation::GetBeginJumpY() const {
	return getter<int>("begin_jump_y");
}

void RPG::SavePartyLocation::SetBeginJumpY(int begin_jump_y) {
	setter<int>("begin_jump_y", begin_jump_y);
}

int RPG::SavePartyLocation::GetUnknown47Pause() const {
	return getter<int>("unknown_47_pause");
}

void RPG::SavePartyLocation::SetUnknown47Pause(int unknown_47_pause) {
	setter<int>("unknown_47_pause", unknown_47_pause);
}

bool RPG::SavePartyLocation::GetFlying() const {
	return getter<bool>("flying");
}

void RPG::SavePartyLocation::SetFlying(bool flying) {
	setter<bool>("flying", flying);
}

const std::string& RPG::SavePartyLocation::GetSpriteName() const {
	return getter<const std::string&>("sprite_name");
}

std::string& RPG::SavePartyLocation::GetSpriteName() {
	return getter<std::string&>("sprite_name");
}

void RPG::SavePartyLocation::SetSpriteName(const std::string& sprite_name) {
	setter<std::string>("sprite_name", sprite_name);
}

int RPG::SavePartyLocation::GetSpriteId() const {
	return getter<int>("sprite_id");
}

void RPG::SavePartyLocation::SetSpriteId(int sprite_id) {
	setter<int>("sprite_id", sprite_id);
}

int RPG::SavePartyLocation::GetUnknown4bSpriteMove() const {
	return getter<int>("unknown_4b_sprite_move");
}

void RPG::SavePartyLocation::SetUnknown4bSpriteMove(int unknown_4b_sprite_move) {
	setter<int>("unknown_4b_sprite_move", unknown_4b_sprite_move);
}

int RPG::SavePartyLocation::GetFlashRed() const {
	return getter<int>("flash_red");
}

void RPG::SavePartyLocation::SetFlashRed(int flash_red) {
	setter<int>("flash_red", flash_red);
}

int RPG::SavePartyLocation::GetFlashGreen() const {
	return getter<int>("flash_green");
}

void RPG::SavePartyLocation::SetFlashGreen(int flash_green) {
	setter<int>("flash_green", flash_green);
}

int RPG::SavePartyLocation::GetFlashBlue() const {
	return getter<int>("flash_blue");
}

void RPG::SavePartyLocation::SetFlashBlue(int flash_blue) {
	setter<int>("flash_blue", flash_blue);
}

double RPG::SavePartyLocation::GetFlashCurrentLevel() const {
	return getter<double>("flash_current_level");
}

void RPG::SavePartyLocation::SetFlashCurrentLevel(double flash_current_level) {
	setter<double>("flash_current_level", flash_current_level);
}

int RPG::SavePartyLocation::GetFlashTimeLeft() const {
	return getter<int>("flash_time_left");
}

void RPG::SavePartyLocation::SetFlashTimeLeft(int flash_time_left) {
	setter<int>("flash_time_left", flash_time_left);
}

bool RPG::SavePartyLocation::GetBoarding() const {
	return getter<bool>("boarding");
}

void RPG::SavePartyLocation::SetBoarding(bool boarding) {
	setter<bool>("boarding", boarding);
}

bool RPG::SavePartyLocation::GetAboard() const {
	return getter<bool>("aboard");
}

void RPG::SavePartyLocation::SetAboard(bool aboard) {
	setter<bool>("aboard", aboard);
}

int RPG::SavePartyLocation::GetVehicle() const {
	return getter<int>("vehicle");
}

void RPG::SavePartyLocation::SetVehicle(int vehicle) {
	setter<int>("vehicle", vehicle);
}

bool RPG::SavePartyLocation::GetUnboarding() const {
	return getter<bool>("unboarding");
}

void RPG::SavePartyLocation::SetUnboarding(bool unboarding) {
	setter<bool>("unboarding", unboarding);
}

int RPG::SavePartyLocation::GetPreboardMoveSpeed() const {
	return getter<int>("preboard_move_speed");
}

void RPG::SavePartyLocation::SetPreboardMoveSpeed(int preboard_move_speed) {
	setter<int>("preboard_move_speed", preboard_move_speed);
}

int RPG::SavePartyLocation::GetUnknown6cMenuCalling() const {
	return getter<int>("unknown_6c_menu_calling");
}

void RPG::SavePartyLocation::SetUnknown6cMenuCalling(int unknown_6c_menu_calling) {
	setter<int>("unknown_6c_menu_calling", unknown_6c_menu_calling);
}

int RPG::SavePartyLocation::GetPanState() const {
	return getter<int>("pan_state");
}

void RPG::SavePartyLocation::SetPanState(int pan_state) {
	setter<int>("pan_state", pan_state);
}

int RPG::SavePartyLocation::GetPanCurrentX() const {
	return getter<int>("pan_current_x");
}

void RPG::SavePartyLocation::SetPanCurrentX(int pan_current_x) {
	setter<int>("pan_current_x", pan_current_x);
}

int RPG::SavePartyLocation::GetPanCurrentY() const {
	return getter<int>("pan_current_y");
}

void RPG::SavePartyLocation::SetPanCurrentY(int pan_current_y) {
	setter<int>("pan_current_y", pan_current_y);
}

int RPG::SavePartyLocation::GetPanFinishX() const {
	return getter<int>("pan_finish_x");
}

void RPG::SavePartyLocation::SetPanFinishX(int pan_finish_x) {
	setter<int>("pan_finish_x", pan_finish_x);
}

int RPG::SavePartyLocation::GetPanFinishY() const {
	return getter<int>("pan_finish_y");
}

void RPG::SavePartyLocation::SetPanFinishY(int pan_finish_y) {
	setter<int>("pan_finish_y", pan_finish_y);
}

int RPG::SavePartyLocation::GetPanSpeed() const {
	return getter<int>("pan_speed");
}

void RPG::SavePartyLocation::SetPanSpeed(int pan_speed) {
	setter<int>("pan_speed", pan_speed);
}

int RPG::SavePartyLocation::GetEncounterSteps() const {
	return getter<int>("encounter_steps");
}

void RPG::SavePartyLocation::SetEncounterSteps(int encounter_steps) {
	setter<int>("encounter_steps", encounter_steps);
}

bool RPG::SavePartyLocation::GetUnknown7dEncounterCalling() const {
	return getter<bool>("unknown_7d_encounter_calling");
}

void RPG::SavePartyLocation::SetUnknown7dEncounterCalling(bool unknown_7d_encounter_calling) {
	setter<bool>("unknown_7d_encounter_calling", unknown_7d_encounter_calling);
}

int RPG::SavePartyLocation::GetMapSaveCount() const {
	return getter<int>("map_save_count");
}

void RPG::SavePartyLocation::SetMapSaveCount(int map_save_count) {
	setter<int>("map_save_count", map_save_count);
}

int RPG::SavePartyLocation::GetDatabaseSaveCount() const {
	return getter<int>("database_save_count");
}

void RPG::SavePartyLocation::SetDatabaseSaveCount(int database_save_count) {
	setter<int>("database_save_count", database_save_count);
}

