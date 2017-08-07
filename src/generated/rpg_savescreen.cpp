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
#include "rpg_savescreen.h"

RPG::SaveScreen::SaveScreen(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

int RPG::SaveScreen::GetTintFinishRed() const {
	return getter<int>("tint_finish_red");
}

void RPG::SaveScreen::SetTintFinishRed(int tint_finish_red) {
	setter<int>("tint_finish_red", tint_finish_red);
}

int RPG::SaveScreen::GetTintFinishGreen() const {
	return getter<int>("tint_finish_green");
}

void RPG::SaveScreen::SetTintFinishGreen(int tint_finish_green) {
	setter<int>("tint_finish_green", tint_finish_green);
}

int RPG::SaveScreen::GetTintFinishBlue() const {
	return getter<int>("tint_finish_blue");
}

void RPG::SaveScreen::SetTintFinishBlue(int tint_finish_blue) {
	setter<int>("tint_finish_blue", tint_finish_blue);
}

int RPG::SaveScreen::GetTintFinishSat() const {
	return getter<int>("tint_finish_sat");
}

void RPG::SaveScreen::SetTintFinishSat(int tint_finish_sat) {
	setter<int>("tint_finish_sat", tint_finish_sat);
}

double RPG::SaveScreen::GetTintCurrentRed() const {
	return getter<double>("tint_current_red");
}

void RPG::SaveScreen::SetTintCurrentRed(double tint_current_red) {
	setter<double>("tint_current_red", tint_current_red);
}

double RPG::SaveScreen::GetTintCurrentGreen() const {
	return getter<double>("tint_current_green");
}

void RPG::SaveScreen::SetTintCurrentGreen(double tint_current_green) {
	setter<double>("tint_current_green", tint_current_green);
}

double RPG::SaveScreen::GetTintCurrentBlue() const {
	return getter<double>("tint_current_blue");
}

void RPG::SaveScreen::SetTintCurrentBlue(double tint_current_blue) {
	setter<double>("tint_current_blue", tint_current_blue);
}

double RPG::SaveScreen::GetTintCurrentSat() const {
	return getter<double>("tint_current_sat");
}

void RPG::SaveScreen::SetTintCurrentSat(double tint_current_sat) {
	setter<double>("tint_current_sat", tint_current_sat);
}

int RPG::SaveScreen::GetTintTimeLeft() const {
	return getter<int>("tint_time_left");
}

void RPG::SaveScreen::SetTintTimeLeft(int tint_time_left) {
	setter<int>("tint_time_left", tint_time_left);
}

bool RPG::SaveScreen::GetFlashContinuous() const {
	return getter<bool>("flash_continuous");
}

void RPG::SaveScreen::SetFlashContinuous(bool flash_continuous) {
	setter<bool>("flash_continuous", flash_continuous);
}

int RPG::SaveScreen::GetFlashRed() const {
	return getter<int>("flash_red");
}

void RPG::SaveScreen::SetFlashRed(int flash_red) {
	setter<int>("flash_red", flash_red);
}

int RPG::SaveScreen::GetFlashGreen() const {
	return getter<int>("flash_green");
}

void RPG::SaveScreen::SetFlashGreen(int flash_green) {
	setter<int>("flash_green", flash_green);
}

int RPG::SaveScreen::GetFlashBlue() const {
	return getter<int>("flash_blue");
}

void RPG::SaveScreen::SetFlashBlue(int flash_blue) {
	setter<int>("flash_blue", flash_blue);
}

double RPG::SaveScreen::GetFlashCurrentLevel() const {
	return getter<double>("flash_current_level");
}

void RPG::SaveScreen::SetFlashCurrentLevel(double flash_current_level) {
	setter<double>("flash_current_level", flash_current_level);
}

int RPG::SaveScreen::GetFlashTimeLeft() const {
	return getter<int>("flash_time_left");
}

void RPG::SaveScreen::SetFlashTimeLeft(int flash_time_left) {
	setter<int>("flash_time_left", flash_time_left);
}

bool RPG::SaveScreen::GetShakeContinuous() const {
	return getter<bool>("shake_continuous");
}

void RPG::SaveScreen::SetShakeContinuous(bool shake_continuous) {
	setter<bool>("shake_continuous", shake_continuous);
}

int RPG::SaveScreen::GetShakeStrength() const {
	return getter<int>("shake_strength");
}

void RPG::SaveScreen::SetShakeStrength(int shake_strength) {
	setter<int>("shake_strength", shake_strength);
}

int RPG::SaveScreen::GetShakeSpeed() const {
	return getter<int>("shake_speed");
}

void RPG::SaveScreen::SetShakeSpeed(int shake_speed) {
	setter<int>("shake_speed", shake_speed);
}

int RPG::SaveScreen::GetShakePosition() const {
	return getter<int>("shake_position");
}

void RPG::SaveScreen::SetShakePosition(int shake_position) {
	setter<int>("shake_position", shake_position);
}

int RPG::SaveScreen::GetShakePositionY() const {
	return getter<int>("shake_position_y");
}

void RPG::SaveScreen::SetShakePositionY(int shake_position_y) {
	setter<int>("shake_position_y", shake_position_y);
}

int RPG::SaveScreen::GetShakeTimeLeft() const {
	return getter<int>("shake_time_left");
}

void RPG::SaveScreen::SetShakeTimeLeft(int shake_time_left) {
	setter<int>("shake_time_left", shake_time_left);
}

int RPG::SaveScreen::GetPanX() const {
	return getter<int>("pan_x");
}

void RPG::SaveScreen::SetPanX(int pan_x) {
	setter<int>("pan_x", pan_x);
}

int RPG::SaveScreen::GetPanY() const {
	return getter<int>("pan_y");
}

void RPG::SaveScreen::SetPanY(int pan_y) {
	setter<int>("pan_y", pan_y);
}

int RPG::SaveScreen::GetBattleanimId() const {
	return getter<int>("battleanim_id");
}

void RPG::SaveScreen::SetBattleanimId(int battleanim_id) {
	setter<int>("battleanim_id", battleanim_id);
}

int RPG::SaveScreen::GetBattleanimTarget() const {
	return getter<int>("battleanim_target");
}

void RPG::SaveScreen::SetBattleanimTarget(int battleanim_target) {
	setter<int>("battleanim_target", battleanim_target);
}

int RPG::SaveScreen::GetBattleanimFrame() const {
	return getter<int>("battleanim_frame");
}

void RPG::SaveScreen::SetBattleanimFrame(int battleanim_frame) {
	setter<int>("battleanim_frame", battleanim_frame);
}

int RPG::SaveScreen::GetUnknown2eBattleanimActive() const {
	return getter<int>("unknown_2e_battleanim_active");
}

void RPG::SaveScreen::SetUnknown2eBattleanimActive(int unknown_2e_battleanim_active) {
	setter<int>("unknown_2e_battleanim_active", unknown_2e_battleanim_active);
}

bool RPG::SaveScreen::GetBattleanimGlobal() const {
	return getter<bool>("battleanim_global");
}

void RPG::SaveScreen::SetBattleanimGlobal(bool battleanim_global) {
	setter<bool>("battleanim_global", battleanim_global);
}

int RPG::SaveScreen::GetWeather() const {
	return getter<int>("weather");
}

void RPG::SaveScreen::SetWeather(int weather) {
	setter<int>("weather", weather);
}

int RPG::SaveScreen::GetWeatherStrength() const {
	return getter<int>("weather_strength");
}

void RPG::SaveScreen::SetWeatherStrength(int weather_strength) {
	setter<int>("weather_strength", weather_strength);
}

