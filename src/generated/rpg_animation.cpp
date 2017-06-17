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
#include "rpg_animation.h"


const std::string& RPG::Animation::GetName() const  {
	return name;
}

std::string& RPG::Animation::GetName() {
	return name;
}

void RPG::Animation::SetName(const std::string& name) {
	this->name = name;
}

const std::string& RPG::Animation::GetAnimationName() const  {
	return animation_name;
}

std::string& RPG::Animation::GetAnimationName() {
	return animation_name;
}

void RPG::Animation::SetAnimationName(const std::string& animation_name) {
	this->animation_name = animation_name;
}

int RPG::Animation::GetUnknown03() const {
	return unknown_03;
}

void RPG::Animation::SetUnknown03(int unknown_03) {
	this->unknown_03 = unknown_03;
}

const LcfVector<RPG::AnimationTiming>& RPG::Animation::GetTimings() const  {
	return timings;
}

LcfVector<RPG::AnimationTiming>& RPG::Animation::GetTimings() {
	return timings;
}

void RPG::Animation::SetTimings(const LcfVector<RPG::AnimationTiming>& timings) {
	this->timings = timings;
}

int RPG::Animation::GetScope() const {
	return scope;
}

void RPG::Animation::SetScope(int scope) {
	this->scope = scope;
}

int RPG::Animation::GetPosition() const {
	return position;
}

void RPG::Animation::SetPosition(int position) {
	this->position = position;
}

const LcfVector<RPG::AnimationFrame>& RPG::Animation::GetFrames() const  {
	return frames;
}

LcfVector<RPG::AnimationFrame>& RPG::Animation::GetFrames() {
	return frames;
}

void RPG::Animation::SetFrames(const LcfVector<RPG::AnimationFrame>& frames) {
	this->frames = frames;
}

