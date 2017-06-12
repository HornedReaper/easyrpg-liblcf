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


bool RPG::SavePartyLocation::GetActive() const {
    return active;
}

void RPG::SavePartyLocation::SetActive(bool active) {
    this->active = active;
}

int RPG::SavePartyLocation::GetMapId() const {
    return map_id;
}

void RPG::SavePartyLocation::SetMapId(int map_id) {
    this->map_id = map_id;
}

int RPG::SavePartyLocation::GetPositionX() const {
    return position_x;
}

void RPG::SavePartyLocation::SetPositionX(int position_x) {
    this->position_x = position_x;
}

int RPG::SavePartyLocation::GetPositionY() const {
    return position_y;
}

void RPG::SavePartyLocation::SetPositionY(int position_y) {
    this->position_y = position_y;
}

int RPG::SavePartyLocation::GetDirection() const {
    return direction;
}

void RPG::SavePartyLocation::SetDirection(int direction) {
    this->direction = direction;
}

int RPG::SavePartyLocation::GetSpriteDirection() const {
    return sprite_direction;
}

void RPG::SavePartyLocation::SetSpriteDirection(int sprite_direction) {
    this->sprite_direction = sprite_direction;
}

int RPG::SavePartyLocation::GetAnimFrame() const {
    return anim_frame;
}

void RPG::SavePartyLocation::SetAnimFrame(int anim_frame) {
    this->anim_frame = anim_frame;
}

int RPG::SavePartyLocation::GetTransparency() const {
    return transparency;
}

void RPG::SavePartyLocation::SetTransparency(int transparency) {
    this->transparency = transparency;
}

int RPG::SavePartyLocation::GetRemainingStep() const {
    return remaining_step;
}

void RPG::SavePartyLocation::SetRemainingStep(int remaining_step) {
    this->remaining_step = remaining_step;
}

int RPG::SavePartyLocation::GetMoveFrequency() const {
    return move_frequency;
}

void RPG::SavePartyLocation::SetMoveFrequency(int move_frequency) {
    this->move_frequency = move_frequency;
}

int RPG::SavePartyLocation::GetLayer() const {
    return layer;
}

void RPG::SavePartyLocation::SetLayer(int layer) {
    this->layer = layer;
}

bool RPG::SavePartyLocation::GetOverlapForbidden() const {
    return overlap_forbidden;
}

void RPG::SavePartyLocation::SetOverlapForbidden(bool overlap_forbidden) {
    this->overlap_forbidden = overlap_forbidden;
}

int RPG::SavePartyLocation::GetAnimationType() const {
    return animation_type;
}

void RPG::SavePartyLocation::SetAnimationType(int animation_type) {
    this->animation_type = animation_type;
}

bool RPG::SavePartyLocation::GetLockFacing() const {
    return lock_facing;
}

void RPG::SavePartyLocation::SetLockFacing(bool lock_facing) {
    this->lock_facing = lock_facing;
}

int RPG::SavePartyLocation::GetMoveSpeed() const {
    return move_speed;
}

void RPG::SavePartyLocation::SetMoveSpeed(int move_speed) {
    this->move_speed = move_speed;
}

const RPG::MoveRoute& RPG::SavePartyLocation::GetMoveRoute() const  {
    return move_route;
}

RPG::MoveRoute& RPG::SavePartyLocation::GetMoveRoute() {
    return move_route;
}

void RPG::SavePartyLocation::SetMoveRoute(const RPG::MoveRoute& move_route) {
    this->move_route = move_route;
}

bool RPG::SavePartyLocation::GetMoveRouteOverwrite() const {
    return move_route_overwrite;
}

void RPG::SavePartyLocation::SetMoveRouteOverwrite(bool move_route_overwrite) {
    this->move_route_overwrite = move_route_overwrite;
}

int RPG::SavePartyLocation::GetMoveRouteIndex() const {
    return move_route_index;
}

void RPG::SavePartyLocation::SetMoveRouteIndex(int move_route_index) {
    this->move_route_index = move_route_index;
}

bool RPG::SavePartyLocation::GetMoveRouteRepeated() const {
    return move_route_repeated;
}

void RPG::SavePartyLocation::SetMoveRouteRepeated(bool move_route_repeated) {
    this->move_route_repeated = move_route_repeated;
}

bool RPG::SavePartyLocation::GetSpriteTransparent() const {
    return sprite_transparent;
}

void RPG::SavePartyLocation::SetSpriteTransparent(bool sprite_transparent) {
    this->sprite_transparent = sprite_transparent;
}

int RPG::SavePartyLocation::GetUnknown2fOverlap() const {
    return unknown_2f_overlap;
}

void RPG::SavePartyLocation::SetUnknown2fOverlap(int unknown_2f_overlap) {
    this->unknown_2f_overlap = unknown_2f_overlap;
}

int RPG::SavePartyLocation::GetAnimPaused() const {
    return anim_paused;
}

void RPG::SavePartyLocation::SetAnimPaused(int anim_paused) {
    this->anim_paused = anim_paused;
}

bool RPG::SavePartyLocation::GetThrough() const {
    return through;
}

void RPG::SavePartyLocation::SetThrough(bool through) {
    this->through = through;
}

int RPG::SavePartyLocation::GetStopCount() const {
    return stop_count;
}

void RPG::SavePartyLocation::SetStopCount(int stop_count) {
    this->stop_count = stop_count;
}

int RPG::SavePartyLocation::GetAnimCount() const {
    return anim_count;
}

void RPG::SavePartyLocation::SetAnimCount(int anim_count) {
    this->anim_count = anim_count;
}

int RPG::SavePartyLocation::GetMaxStopCount() const {
    return max_stop_count;
}

void RPG::SavePartyLocation::SetMaxStopCount(int max_stop_count) {
    this->max_stop_count = max_stop_count;
}

bool RPG::SavePartyLocation::GetJumping() const {
    return jumping;
}

void RPG::SavePartyLocation::SetJumping(bool jumping) {
    this->jumping = jumping;
}

int RPG::SavePartyLocation::GetBeginJumpX() const {
    return begin_jump_x;
}

void RPG::SavePartyLocation::SetBeginJumpX(int begin_jump_x) {
    this->begin_jump_x = begin_jump_x;
}

int RPG::SavePartyLocation::GetBeginJumpY() const {
    return begin_jump_y;
}

void RPG::SavePartyLocation::SetBeginJumpY(int begin_jump_y) {
    this->begin_jump_y = begin_jump_y;
}

int RPG::SavePartyLocation::GetUnknown47Pause() const {
    return unknown_47_pause;
}

void RPG::SavePartyLocation::SetUnknown47Pause(int unknown_47_pause) {
    this->unknown_47_pause = unknown_47_pause;
}

bool RPG::SavePartyLocation::GetFlying() const {
    return flying;
}

void RPG::SavePartyLocation::SetFlying(bool flying) {
    this->flying = flying;
}

const std::string& RPG::SavePartyLocation::GetSpriteName() const  {
    return sprite_name;
}

std::string& RPG::SavePartyLocation::GetSpriteName() {
    return sprite_name;
}

void RPG::SavePartyLocation::SetSpriteName(const std::string& sprite_name) {
    this->sprite_name = sprite_name;
}

int RPG::SavePartyLocation::GetSpriteId() const {
    return sprite_id;
}

void RPG::SavePartyLocation::SetSpriteId(int sprite_id) {
    this->sprite_id = sprite_id;
}

int RPG::SavePartyLocation::GetUnknown4bSpriteMove() const {
    return unknown_4b_sprite_move;
}

void RPG::SavePartyLocation::SetUnknown4bSpriteMove(int unknown_4b_sprite_move) {
    this->unknown_4b_sprite_move = unknown_4b_sprite_move;
}

int RPG::SavePartyLocation::GetFlashRed() const {
    return flash_red;
}

void RPG::SavePartyLocation::SetFlashRed(int flash_red) {
    this->flash_red = flash_red;
}

int RPG::SavePartyLocation::GetFlashGreen() const {
    return flash_green;
}

void RPG::SavePartyLocation::SetFlashGreen(int flash_green) {
    this->flash_green = flash_green;
}

int RPG::SavePartyLocation::GetFlashBlue() const {
    return flash_blue;
}

void RPG::SavePartyLocation::SetFlashBlue(int flash_blue) {
    this->flash_blue = flash_blue;
}

double RPG::SavePartyLocation::GetFlashCurrentLevel() const {
    return flash_current_level;
}

void RPG::SavePartyLocation::SetFlashCurrentLevel(double flash_current_level) {
    this->flash_current_level = flash_current_level;
}

int RPG::SavePartyLocation::GetFlashTimeLeft() const {
    return flash_time_left;
}

void RPG::SavePartyLocation::SetFlashTimeLeft(int flash_time_left) {
    this->flash_time_left = flash_time_left;
}

bool RPG::SavePartyLocation::GetBoarding() const {
    return boarding;
}

void RPG::SavePartyLocation::SetBoarding(bool boarding) {
    this->boarding = boarding;
}

bool RPG::SavePartyLocation::GetAboard() const {
    return aboard;
}

void RPG::SavePartyLocation::SetAboard(bool aboard) {
    this->aboard = aboard;
}

int RPG::SavePartyLocation::GetVehicle() const {
    return vehicle;
}

void RPG::SavePartyLocation::SetVehicle(int vehicle) {
    this->vehicle = vehicle;
}

bool RPG::SavePartyLocation::GetUnboarding() const {
    return unboarding;
}

void RPG::SavePartyLocation::SetUnboarding(bool unboarding) {
    this->unboarding = unboarding;
}

int RPG::SavePartyLocation::GetPreboardMoveSpeed() const {
    return preboard_move_speed;
}

void RPG::SavePartyLocation::SetPreboardMoveSpeed(int preboard_move_speed) {
    this->preboard_move_speed = preboard_move_speed;
}

int RPG::SavePartyLocation::GetUnknown6cMenuCalling() const {
    return unknown_6c_menu_calling;
}

void RPG::SavePartyLocation::SetUnknown6cMenuCalling(int unknown_6c_menu_calling) {
    this->unknown_6c_menu_calling = unknown_6c_menu_calling;
}

int RPG::SavePartyLocation::GetPanState() const {
    return pan_state;
}

void RPG::SavePartyLocation::SetPanState(int pan_state) {
    this->pan_state = pan_state;
}

int RPG::SavePartyLocation::GetPanCurrentX() const {
    return pan_current_x;
}

void RPG::SavePartyLocation::SetPanCurrentX(int pan_current_x) {
    this->pan_current_x = pan_current_x;
}

int RPG::SavePartyLocation::GetPanCurrentY() const {
    return pan_current_y;
}

void RPG::SavePartyLocation::SetPanCurrentY(int pan_current_y) {
    this->pan_current_y = pan_current_y;
}

int RPG::SavePartyLocation::GetPanFinishX() const {
    return pan_finish_x;
}

void RPG::SavePartyLocation::SetPanFinishX(int pan_finish_x) {
    this->pan_finish_x = pan_finish_x;
}

int RPG::SavePartyLocation::GetPanFinishY() const {
    return pan_finish_y;
}

void RPG::SavePartyLocation::SetPanFinishY(int pan_finish_y) {
    this->pan_finish_y = pan_finish_y;
}

int RPG::SavePartyLocation::GetPanSpeed() const {
    return pan_speed;
}

void RPG::SavePartyLocation::SetPanSpeed(int pan_speed) {
    this->pan_speed = pan_speed;
}

int RPG::SavePartyLocation::GetEncounterSteps() const {
    return encounter_steps;
}

void RPG::SavePartyLocation::SetEncounterSteps(int encounter_steps) {
    this->encounter_steps = encounter_steps;
}

bool RPG::SavePartyLocation::GetUnknown7dEncounterCalling() const {
    return unknown_7d_encounter_calling;
}

void RPG::SavePartyLocation::SetUnknown7dEncounterCalling(bool unknown_7d_encounter_calling) {
    this->unknown_7d_encounter_calling = unknown_7d_encounter_calling;
}

int RPG::SavePartyLocation::GetMapSaveCount() const {
    return map_save_count;
}

void RPG::SavePartyLocation::SetMapSaveCount(int map_save_count) {
    this->map_save_count = map_save_count;
}

int RPG::SavePartyLocation::GetDatabaseSaveCount() const {
    return database_save_count;
}

void RPG::SavePartyLocation::SetDatabaseSaveCount(int database_save_count) {
    this->database_save_count = database_save_count;
}

