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
#include "rpg_savepicture.h"

RPG::SavePicture::SavePicture(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

const std::string& RPG::SavePicture::GetName() const {
	return getter<const std::string&>("name");
}

std::string& RPG::SavePicture::GetName() {
	return getter<std::string&>("name");
}

void RPG::SavePicture::SetName(const std::string& name) {
	setter<std::string>("name", name);
}

double RPG::SavePicture::GetStartX() const {
	return getter<double>("start_x");
}

void RPG::SavePicture::SetStartX(double start_x) {
	setter<double>("start_x", start_x);
}

double RPG::SavePicture::GetStartY() const {
	return getter<double>("start_y");
}

void RPG::SavePicture::SetStartY(double start_y) {
	setter<double>("start_y", start_y);
}

double RPG::SavePicture::GetCurrentX() const {
	return getter<double>("current_x");
}

void RPG::SavePicture::SetCurrentX(double current_x) {
	setter<double>("current_x", current_x);
}

double RPG::SavePicture::GetCurrentY() const {
	return getter<double>("current_y");
}

void RPG::SavePicture::SetCurrentY(double current_y) {
	setter<double>("current_y", current_y);
}

bool RPG::SavePicture::GetFixedToMap() const {
	return getter<bool>("fixed_to_map");
}

void RPG::SavePicture::SetFixedToMap(bool fixed_to_map) {
	setter<bool>("fixed_to_map", fixed_to_map);
}

double RPG::SavePicture::GetCurrentMagnify() const {
	return getter<double>("current_magnify");
}

void RPG::SavePicture::SetCurrentMagnify(double current_magnify) {
	setter<double>("current_magnify", current_magnify);
}

double RPG::SavePicture::GetCurrentTopTrans() const {
	return getter<double>("current_top_trans");
}

void RPG::SavePicture::SetCurrentTopTrans(double current_top_trans) {
	setter<double>("current_top_trans", current_top_trans);
}

bool RPG::SavePicture::GetTransparency() const {
	return getter<bool>("transparency");
}

void RPG::SavePicture::SetTransparency(bool transparency) {
	setter<bool>("transparency", transparency);
}

double RPG::SavePicture::GetCurrentRed() const {
	return getter<double>("current_red");
}

void RPG::SavePicture::SetCurrentRed(double current_red) {
	setter<double>("current_red", current_red);
}

double RPG::SavePicture::GetCurrentGreen() const {
	return getter<double>("current_green");
}

void RPG::SavePicture::SetCurrentGreen(double current_green) {
	setter<double>("current_green", current_green);
}

double RPG::SavePicture::GetCurrentBlue() const {
	return getter<double>("current_blue");
}

void RPG::SavePicture::SetCurrentBlue(double current_blue) {
	setter<double>("current_blue", current_blue);
}

double RPG::SavePicture::GetCurrentSat() const {
	return getter<double>("current_sat");
}

void RPG::SavePicture::SetCurrentSat(double current_sat) {
	setter<double>("current_sat", current_sat);
}

int RPG::SavePicture::GetEffectMode() const {
	return getter<int>("effect_mode");
}

void RPG::SavePicture::SetEffectMode(int effect_mode) {
	setter<int>("effect_mode", effect_mode);
}

double RPG::SavePicture::GetCurrentEffect() const {
	return getter<double>("current_effect");
}

void RPG::SavePicture::SetCurrentEffect(double current_effect) {
	setter<double>("current_effect", current_effect);
}

double RPG::SavePicture::GetCurrentBotTrans() const {
	return getter<double>("current_bot_trans");
}

void RPG::SavePicture::SetCurrentBotTrans(double current_bot_trans) {
	setter<double>("current_bot_trans", current_bot_trans);
}

double RPG::SavePicture::GetFinishX() const {
	return getter<double>("finish_x");
}

void RPG::SavePicture::SetFinishX(double finish_x) {
	setter<double>("finish_x", finish_x);
}

double RPG::SavePicture::GetFinishY() const {
	return getter<double>("finish_y");
}

void RPG::SavePicture::SetFinishY(double finish_y) {
	setter<double>("finish_y", finish_y);
}

int RPG::SavePicture::GetFinishMagnify() const {
	return getter<int>("finish_magnify");
}

void RPG::SavePicture::SetFinishMagnify(int finish_magnify) {
	setter<int>("finish_magnify", finish_magnify);
}

int RPG::SavePicture::GetFinishTopTrans() const {
	return getter<int>("finish_top_trans");
}

void RPG::SavePicture::SetFinishTopTrans(int finish_top_trans) {
	setter<int>("finish_top_trans", finish_top_trans);
}

int RPG::SavePicture::GetFinishBotTrans() const {
	return getter<int>("finish_bot_trans");
}

void RPG::SavePicture::SetFinishBotTrans(int finish_bot_trans) {
	setter<int>("finish_bot_trans", finish_bot_trans);
}

int RPG::SavePicture::GetFinishRed() const {
	return getter<int>("finish_red");
}

void RPG::SavePicture::SetFinishRed(int finish_red) {
	setter<int>("finish_red", finish_red);
}

int RPG::SavePicture::GetFinishGreen() const {
	return getter<int>("finish_green");
}

void RPG::SavePicture::SetFinishGreen(int finish_green) {
	setter<int>("finish_green", finish_green);
}

int RPG::SavePicture::GetFinishBlue() const {
	return getter<int>("finish_blue");
}

void RPG::SavePicture::SetFinishBlue(int finish_blue) {
	setter<int>("finish_blue", finish_blue);
}

int RPG::SavePicture::GetFinishSat() const {
	return getter<int>("finish_sat");
}

void RPG::SavePicture::SetFinishSat(int finish_sat) {
	setter<int>("finish_sat", finish_sat);
}

int RPG::SavePicture::GetFinishEffect() const {
	return getter<int>("finish_effect");
}

void RPG::SavePicture::SetFinishEffect(int finish_effect) {
	setter<int>("finish_effect", finish_effect);
}

int RPG::SavePicture::GetTimeLeft() const {
	return getter<int>("time_left");
}

void RPG::SavePicture::SetTimeLeft(int time_left) {
	setter<int>("time_left", time_left);
}

double RPG::SavePicture::GetCurrentRotation() const {
	return getter<double>("current_rotation");
}

void RPG::SavePicture::SetCurrentRotation(double current_rotation) {
	setter<double>("current_rotation", current_rotation);
}

int RPG::SavePicture::GetCurrentWaver() const {
	return getter<int>("current_waver");
}

void RPG::SavePicture::SetCurrentWaver(int current_waver) {
	setter<int>("current_waver", current_waver);
}

