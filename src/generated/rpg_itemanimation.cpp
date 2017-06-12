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
#include "rpg_itemanimation.h"


int RPG::ItemAnimation::GetType() const {
    return type;
}

void RPG::ItemAnimation::SetType(int type) {
    this->type = type;
}

int RPG::ItemAnimation::GetWeaponAnim() const {
    return weapon_anim;
}

void RPG::ItemAnimation::SetWeaponAnim(int weapon_anim) {
    this->weapon_anim = weapon_anim;
}

int RPG::ItemAnimation::GetMovement() const {
    return movement;
}

void RPG::ItemAnimation::SetMovement(int movement) {
    this->movement = movement;
}

int RPG::ItemAnimation::GetAfterImage() const {
    return after_image;
}

void RPG::ItemAnimation::SetAfterImage(int after_image) {
    this->after_image = after_image;
}

int RPG::ItemAnimation::GetAttacks() const {
    return attacks;
}

void RPG::ItemAnimation::SetAttacks(int attacks) {
    this->attacks = attacks;
}

bool RPG::ItemAnimation::GetRanged() const {
    return ranged;
}

void RPG::ItemAnimation::SetRanged(bool ranged) {
    this->ranged = ranged;
}

int RPG::ItemAnimation::GetRangedAnim() const {
    return ranged_anim;
}

void RPG::ItemAnimation::SetRangedAnim(int ranged_anim) {
    this->ranged_anim = ranged_anim;
}

int RPG::ItemAnimation::GetRangedSpeed() const {
    return ranged_speed;
}

void RPG::ItemAnimation::SetRangedSpeed(int ranged_speed) {
    this->ranged_speed = ranged_speed;
}

int RPG::ItemAnimation::GetBattleAnim() const {
    return battle_anim;
}

void RPG::ItemAnimation::SetBattleAnim(int battle_anim) {
    this->battle_anim = battle_anim;
}

