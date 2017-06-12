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


bool RPG::SaveVehicleLocation::GetActive() const {
    return active;
}

void RPG::SaveVehicleLocation::SetActive(bool active) {
    this->active = active;
}

int RPG::SaveVehicleLocation::GetMapId() const {
    return map_id;
}

void RPG::SaveVehicleLocation::SetMapId(int map_id) {
    this->map_id = map_id;
}

int RPG::SaveVehicleLocation::GetPositionX() const {
    return position_x;
}

void RPG::SaveVehicleLocation::SetPositionX(int position_x) {
    this->position_x = position_x;
}

int RPG::SaveVehicleLocation::GetPositionY() const {
    return position_y;
}

void RPG::SaveVehicleLocation::SetPositionY(int position_y) {
    this->position_y = position_y;
}

int RPG::SaveVehicleLocation::GetDirection() const {
    return direction;
}

void RPG::SaveVehicleLocation::SetDirection(int direction) {
    this->direction = direction;
}

int RPG::SaveVehicleLocation::GetSpriteDirection() const {
    return sprite_direction;
}

void RPG::SaveVehicleLocation::SetSpriteDirection(int sprite_direction) {
    this->sprite_direction = sprite_direction;
}

int RPG::SaveVehicleLocation::GetAnimFrame() const {
    return anim_frame;
}

void RPG::SaveVehicleLocation::SetAnimFrame(int anim_frame) {
    this->anim_frame = anim_frame;
}

int RPG::SaveVehicleLocation::GetTransparency() const {
    return transparency;
}

void RPG::SaveVehicleLocation::SetTransparency(int transparency) {
    this->transparency = transparency;
}

int RPG::SaveVehicleLocation::GetRemainingStep() const {
    return remaining_step;
}

void RPG::SaveVehicleLocation::SetRemainingStep(int remaining_step) {
    this->remaining_step = remaining_step;
}

int RPG::SaveVehicleLocation::GetMoveFrequency() const {
    return move_frequency;
}

void RPG::SaveVehicleLocation::SetMoveFrequency(int move_frequency) {
    this->move_frequency = move_frequency;
}

int RPG::SaveVehicleLocation::GetLayer() const {
    return layer;
}

void RPG::SaveVehicleLocation::SetLayer(int layer) {
    this->layer = layer;
}

bool RPG::SaveVehicleLocation::GetOverlapForbidden() const {
    return overlap_forbidden;
}

void RPG::SaveVehicleLocation::SetOverlapForbidden(bool overlap_forbidden) {
    this->overlap_forbidden = overlap_forbidden;
}

int RPG::SaveVehicleLocation::GetAnimationType() const {
    return animation_type;
}

void RPG::SaveVehicleLocation::SetAnimationType(int animation_type) {
    this->animation_type = animation_type;
}

bool RPG::SaveVehicleLocation::GetLockFacing() const {
    return lock_facing;
}

void RPG::SaveVehicleLocation::SetLockFacing(bool lock_facing) {
    this->lock_facing = lock_facing;
}

int RPG::SaveVehicleLocation::GetMoveSpeed() const {
    return move_speed;
}

void RPG::SaveVehicleLocation::SetMoveSpeed(int move_speed) {
    this->move_speed = move_speed;
}

const RPG::MoveRoute& RPG::SaveVehicleLocation::GetMoveRoute() const  {
    return move_route;
}

RPG::MoveRoute& RPG::SaveVehicleLocation::GetMoveRoute() {
    return move_route;
}

void RPG::SaveVehicleLocation::SetMoveRoute(const RPG::MoveRoute& move_route) {
    this->move_route = move_route;
}

bool RPG::SaveVehicleLocation::GetMoveRouteOverwrite() const {
    return move_route_overwrite;
}

void RPG::SaveVehicleLocation::SetMoveRouteOverwrite(bool move_route_overwrite) {
    this->move_route_overwrite = move_route_overwrite;
}

int RPG::SaveVehicleLocation::GetMoveRouteIndex() const {
    return move_route_index;
}

void RPG::SaveVehicleLocation::SetMoveRouteIndex(int move_route_index) {
    this->move_route_index = move_route_index;
}

bool RPG::SaveVehicleLocation::GetMoveRouteRepeated() const {
    return move_route_repeated;
}

void RPG::SaveVehicleLocation::SetMoveRouteRepeated(bool move_route_repeated) {
    this->move_route_repeated = move_route_repeated;
}

int RPG::SaveVehicleLocation::GetAnimPaused() const {
    return anim_paused;
}

void RPG::SaveVehicleLocation::SetAnimPaused(int anim_paused) {
    this->anim_paused = anim_paused;
}

bool RPG::SaveVehicleLocation::GetThrough() const {
    return through;
}

void RPG::SaveVehicleLocation::SetThrough(bool through) {
    this->through = through;
}

int RPG::SaveVehicleLocation::GetStopCount() const {
    return stop_count;
}

void RPG::SaveVehicleLocation::SetStopCount(int stop_count) {
    this->stop_count = stop_count;
}

int RPG::SaveVehicleLocation::GetAnimCount() const {
    return anim_count;
}

void RPG::SaveVehicleLocation::SetAnimCount(int anim_count) {
    this->anim_count = anim_count;
}

int RPG::SaveVehicleLocation::GetMaxStopCount() const {
    return max_stop_count;
}

void RPG::SaveVehicleLocation::SetMaxStopCount(int max_stop_count) {
    this->max_stop_count = max_stop_count;
}

bool RPG::SaveVehicleLocation::GetJumping() const {
    return jumping;
}

void RPG::SaveVehicleLocation::SetJumping(bool jumping) {
    this->jumping = jumping;
}

int RPG::SaveVehicleLocation::GetBeginJumpX() const {
    return begin_jump_x;
}

void RPG::SaveVehicleLocation::SetBeginJumpX(int begin_jump_x) {
    this->begin_jump_x = begin_jump_x;
}

int RPG::SaveVehicleLocation::GetBeginJumpY() const {
    return begin_jump_y;
}

void RPG::SaveVehicleLocation::SetBeginJumpY(int begin_jump_y) {
    this->begin_jump_y = begin_jump_y;
}

int RPG::SaveVehicleLocation::GetUnknown47Pause() const {
    return unknown_47_pause;
}

void RPG::SaveVehicleLocation::SetUnknown47Pause(int unknown_47_pause) {
    this->unknown_47_pause = unknown_47_pause;
}

bool RPG::SaveVehicleLocation::GetFlying() const {
    return flying;
}

void RPG::SaveVehicleLocation::SetFlying(bool flying) {
    this->flying = flying;
}

const std::string& RPG::SaveVehicleLocation::GetSpriteName() const  {
    return sprite_name;
}

std::string& RPG::SaveVehicleLocation::GetSpriteName() {
    return sprite_name;
}

void RPG::SaveVehicleLocation::SetSpriteName(const std::string& sprite_name) {
    this->sprite_name = sprite_name;
}

int RPG::SaveVehicleLocation::GetSpriteId() const {
    return sprite_id;
}

void RPG::SaveVehicleLocation::SetSpriteId(int sprite_id) {
    this->sprite_id = sprite_id;
}

int RPG::SaveVehicleLocation::GetUnknown4bSpriteMove() const {
    return unknown_4b_sprite_move;
}

void RPG::SaveVehicleLocation::SetUnknown4bSpriteMove(int unknown_4b_sprite_move) {
    this->unknown_4b_sprite_move = unknown_4b_sprite_move;
}

int RPG::SaveVehicleLocation::GetFlashRed() const {
    return flash_red;
}

void RPG::SaveVehicleLocation::SetFlashRed(int flash_red) {
    this->flash_red = flash_red;
}

int RPG::SaveVehicleLocation::GetFlashGreen() const {
    return flash_green;
}

void RPG::SaveVehicleLocation::SetFlashGreen(int flash_green) {
    this->flash_green = flash_green;
}

int RPG::SaveVehicleLocation::GetFlashBlue() const {
    return flash_blue;
}

void RPG::SaveVehicleLocation::SetFlashBlue(int flash_blue) {
    this->flash_blue = flash_blue;
}

double RPG::SaveVehicleLocation::GetFlashCurrentLevel() const {
    return flash_current_level;
}

void RPG::SaveVehicleLocation::SetFlashCurrentLevel(double flash_current_level) {
    this->flash_current_level = flash_current_level;
}

int RPG::SaveVehicleLocation::GetFlashTimeLeft() const {
    return flash_time_left;
}

void RPG::SaveVehicleLocation::SetFlashTimeLeft(int flash_time_left) {
    this->flash_time_left = flash_time_left;
}

int RPG::SaveVehicleLocation::GetVehicle() const {
    return vehicle;
}

void RPG::SaveVehicleLocation::SetVehicle(int vehicle) {
    this->vehicle = vehicle;
}

int RPG::SaveVehicleLocation::GetOriginalMoveRouteIndex() const {
    return original_move_route_index;
}

void RPG::SaveVehicleLocation::SetOriginalMoveRouteIndex(int original_move_route_index) {
    this->original_move_route_index = original_move_route_index;
}

int RPG::SaveVehicleLocation::GetRemainingAscent() const {
    return remaining_ascent;
}

void RPG::SaveVehicleLocation::SetRemainingAscent(int remaining_ascent) {
    this->remaining_ascent = remaining_ascent;
}

int RPG::SaveVehicleLocation::GetRemainingDescent() const {
    return remaining_descent;
}

void RPG::SaveVehicleLocation::SetRemainingDescent(int remaining_descent) {
    this->remaining_descent = remaining_descent;
}

const std::string& RPG::SaveVehicleLocation::GetSprite2Name() const  {
    return sprite2_name;
}

std::string& RPG::SaveVehicleLocation::GetSprite2Name() {
    return sprite2_name;
}

void RPG::SaveVehicleLocation::SetSprite2Name(const std::string& sprite2_name) {
    this->sprite2_name = sprite2_name;
}

int RPG::SaveVehicleLocation::GetSprite2Id() const {
    return sprite2_id;
}

void RPG::SaveVehicleLocation::SetSprite2Id(int sprite2_id) {
    this->sprite2_id = sprite2_id;
}

