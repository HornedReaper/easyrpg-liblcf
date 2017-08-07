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
#include "rpg_savesystem.h"

RPG::SaveSystem::SaveSystem(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

int RPG::SaveSystem::GetScreen() const {
	return getter<int>("screen");
}

void RPG::SaveSystem::SetScreen(int screen) {
	setter<int>("screen", screen);
}

int RPG::SaveSystem::GetFrameCount() const {
	return getter<int>("frame_count");
}

void RPG::SaveSystem::SetFrameCount(int frame_count) {
	setter<int>("frame_count", frame_count);
}

const std::string& RPG::SaveSystem::GetGraphicsName() const {
	return getter<const std::string&>("graphics_name");
}

std::string& RPG::SaveSystem::GetGraphicsName() {
	return getter<std::string&>("graphics_name");
}

void RPG::SaveSystem::SetGraphicsName(const std::string& graphics_name) {
	setter<std::string>("graphics_name", graphics_name);
}

int RPG::SaveSystem::GetMessageStretch() const {
	return getter<int>("message_stretch");
}

void RPG::SaveSystem::SetMessageStretch(int message_stretch) {
	setter<int>("message_stretch", message_stretch);
}

int RPG::SaveSystem::GetFontId() const {
	return getter<int>("font_id");
}

void RPG::SaveSystem::SetFontId(int font_id) {
	setter<int>("font_id", font_id);
}

int RPG::SaveSystem::GetSwitchesSize() const {
	return getter<int>("switches_size");
}

void RPG::SaveSystem::SetSwitchesSize(int switches_size) {
	setter<int>("switches_size", switches_size);
}

const std::vector<bool>& RPG::SaveSystem::GetSwitches() const {
	return vector_getter<const std::vector<bool>&, bool>("switches");
}

std::vector<bool>& RPG::SaveSystem::GetSwitches() {
	return vector_getter<std::vector<bool>&, bool>("switches");
}

int RPG::SaveSystem::GetVariablesSize() const {
	return getter<int>("variables_size");
}

void RPG::SaveSystem::SetVariablesSize(int variables_size) {
	setter<int>("variables_size", variables_size);
}

const std::vector<uint32_t>& RPG::SaveSystem::GetVariables() const {
	return vector_getter<const std::vector<uint32_t>&, uint32_t>("variables");
}

std::vector<uint32_t>& RPG::SaveSystem::GetVariables() {
	return vector_getter<std::vector<uint32_t>&, uint32_t>("variables");
}

int RPG::SaveSystem::GetMessageTransparent() const {
	return getter<int>("message_transparent");
}

void RPG::SaveSystem::SetMessageTransparent(int message_transparent) {
	setter<int>("message_transparent", message_transparent);
}

int RPG::SaveSystem::GetMessagePosition() const {
	return getter<int>("message_position");
}

void RPG::SaveSystem::SetMessagePosition(int message_position) {
	setter<int>("message_position", message_position);
}

int RPG::SaveSystem::GetMessagePreventOverlap() const {
	return getter<int>("message_prevent_overlap");
}

void RPG::SaveSystem::SetMessagePreventOverlap(int message_prevent_overlap) {
	setter<int>("message_prevent_overlap", message_prevent_overlap);
}

int RPG::SaveSystem::GetMessageContinueEvents() const {
	return getter<int>("message_continue_events");
}

void RPG::SaveSystem::SetMessageContinueEvents(int message_continue_events) {
	setter<int>("message_continue_events", message_continue_events);
}

const std::string& RPG::SaveSystem::GetFaceName() const {
	return getter<const std::string&>("face_name");
}

std::string& RPG::SaveSystem::GetFaceName() {
	return getter<std::string&>("face_name");
}

void RPG::SaveSystem::SetFaceName(const std::string& face_name) {
	setter<std::string>("face_name", face_name);
}

int RPG::SaveSystem::GetFaceId() const {
	return getter<int>("face_id");
}

void RPG::SaveSystem::SetFaceId(int face_id) {
	setter<int>("face_id", face_id);
}

bool RPG::SaveSystem::GetFaceRight() const {
	return getter<bool>("face_right");
}

void RPG::SaveSystem::SetFaceRight(bool face_right) {
	setter<bool>("face_right", face_right);
}

bool RPG::SaveSystem::GetFaceFlip() const {
	return getter<bool>("face_flip");
}

void RPG::SaveSystem::SetFaceFlip(bool face_flip) {
	setter<bool>("face_flip", face_flip);
}

bool RPG::SaveSystem::GetTransparent() const {
	return getter<bool>("transparent");
}

void RPG::SaveSystem::SetTransparent(bool transparent) {
	setter<bool>("transparent", transparent);
}

int RPG::SaveSystem::GetUnknown3dMusicFadeout() const {
	return getter<int>("unknown_3d_music_fadeout");
}

void RPG::SaveSystem::SetUnknown3dMusicFadeout(int unknown_3d_music_fadeout) {
	setter<int>("unknown_3d_music_fadeout", unknown_3d_music_fadeout);
}

const RPG::Music& RPG::SaveSystem::GetTitleMusic() const {
	return getter<const RPG::Music&>("title_music");
}

RPG::Music& RPG::SaveSystem::GetTitleMusic() {
	return getter<RPG::Music&>("title_music");
}

void RPG::SaveSystem::SetTitleMusic(const RPG::Music& title_music) {
	setter<RPG::Music>("title_music", title_music);
}

const RPG::Music& RPG::SaveSystem::GetBattleMusic() const {
	return getter<const RPG::Music&>("battle_music");
}

RPG::Music& RPG::SaveSystem::GetBattleMusic() {
	return getter<RPG::Music&>("battle_music");
}

void RPG::SaveSystem::SetBattleMusic(const RPG::Music& battle_music) {
	setter<RPG::Music>("battle_music", battle_music);
}

const RPG::Music& RPG::SaveSystem::GetBattleEndMusic() const {
	return getter<const RPG::Music&>("battle_end_music");
}

RPG::Music& RPG::SaveSystem::GetBattleEndMusic() {
	return getter<RPG::Music&>("battle_end_music");
}

void RPG::SaveSystem::SetBattleEndMusic(const RPG::Music& battle_end_music) {
	setter<RPG::Music>("battle_end_music", battle_end_music);
}

const RPG::Music& RPG::SaveSystem::GetInnMusic() const {
	return getter<const RPG::Music&>("inn_music");
}

RPG::Music& RPG::SaveSystem::GetInnMusic() {
	return getter<RPG::Music&>("inn_music");
}

void RPG::SaveSystem::SetInnMusic(const RPG::Music& inn_music) {
	setter<RPG::Music>("inn_music", inn_music);
}

const RPG::Music& RPG::SaveSystem::GetCurrentMusic() const {
	return getter<const RPG::Music&>("current_music");
}

RPG::Music& RPG::SaveSystem::GetCurrentMusic() {
	return getter<RPG::Music&>("current_music");
}

void RPG::SaveSystem::SetCurrentMusic(const RPG::Music& current_music) {
	setter<RPG::Music>("current_music", current_music);
}

const RPG::Music& RPG::SaveSystem::GetBeforeVehicleMusic() const {
	return getter<const RPG::Music&>("before_vehicle_music");
}

RPG::Music& RPG::SaveSystem::GetBeforeVehicleMusic() {
	return getter<RPG::Music&>("before_vehicle_music");
}

void RPG::SaveSystem::SetBeforeVehicleMusic(const RPG::Music& before_vehicle_music) {
	setter<RPG::Music>("before_vehicle_music", before_vehicle_music);
}

const RPG::Music& RPG::SaveSystem::GetBeforeBattleMusic() const {
	return getter<const RPG::Music&>("before_battle_music");
}

RPG::Music& RPG::SaveSystem::GetBeforeBattleMusic() {
	return getter<RPG::Music&>("before_battle_music");
}

void RPG::SaveSystem::SetBeforeBattleMusic(const RPG::Music& before_battle_music) {
	setter<RPG::Music>("before_battle_music", before_battle_music);
}

const RPG::Music& RPG::SaveSystem::GetStoredMusic() const {
	return getter<const RPG::Music&>("stored_music");
}

RPG::Music& RPG::SaveSystem::GetStoredMusic() {
	return getter<RPG::Music&>("stored_music");
}

void RPG::SaveSystem::SetStoredMusic(const RPG::Music& stored_music) {
	setter<RPG::Music>("stored_music", stored_music);
}

const RPG::Music& RPG::SaveSystem::GetBoatMusic() const {
	return getter<const RPG::Music&>("boat_music");
}

RPG::Music& RPG::SaveSystem::GetBoatMusic() {
	return getter<RPG::Music&>("boat_music");
}

void RPG::SaveSystem::SetBoatMusic(const RPG::Music& boat_music) {
	setter<RPG::Music>("boat_music", boat_music);
}

const RPG::Music& RPG::SaveSystem::GetShipMusic() const {
	return getter<const RPG::Music&>("ship_music");
}

RPG::Music& RPG::SaveSystem::GetShipMusic() {
	return getter<RPG::Music&>("ship_music");
}

void RPG::SaveSystem::SetShipMusic(const RPG::Music& ship_music) {
	setter<RPG::Music>("ship_music", ship_music);
}

const RPG::Music& RPG::SaveSystem::GetAirshipMusic() const {
	return getter<const RPG::Music&>("airship_music");
}

RPG::Music& RPG::SaveSystem::GetAirshipMusic() {
	return getter<RPG::Music&>("airship_music");
}

void RPG::SaveSystem::SetAirshipMusic(const RPG::Music& airship_music) {
	setter<RPG::Music>("airship_music", airship_music);
}

const RPG::Music& RPG::SaveSystem::GetGameoverMusic() const {
	return getter<const RPG::Music&>("gameover_music");
}

RPG::Music& RPG::SaveSystem::GetGameoverMusic() {
	return getter<RPG::Music&>("gameover_music");
}

void RPG::SaveSystem::SetGameoverMusic(const RPG::Music& gameover_music) {
	setter<RPG::Music>("gameover_music", gameover_music);
}

const RPG::Sound& RPG::SaveSystem::GetCursorSe() const {
	return getter<const RPG::Sound&>("cursor_se");
}

RPG::Sound& RPG::SaveSystem::GetCursorSe() {
	return getter<RPG::Sound&>("cursor_se");
}

void RPG::SaveSystem::SetCursorSe(const RPG::Sound& cursor_se) {
	setter<RPG::Sound>("cursor_se", cursor_se);
}

const RPG::Sound& RPG::SaveSystem::GetDecisionSe() const {
	return getter<const RPG::Sound&>("decision_se");
}

RPG::Sound& RPG::SaveSystem::GetDecisionSe() {
	return getter<RPG::Sound&>("decision_se");
}

void RPG::SaveSystem::SetDecisionSe(const RPG::Sound& decision_se) {
	setter<RPG::Sound>("decision_se", decision_se);
}

const RPG::Sound& RPG::SaveSystem::GetCancelSe() const {
	return getter<const RPG::Sound&>("cancel_se");
}

RPG::Sound& RPG::SaveSystem::GetCancelSe() {
	return getter<RPG::Sound&>("cancel_se");
}

void RPG::SaveSystem::SetCancelSe(const RPG::Sound& cancel_se) {
	setter<RPG::Sound>("cancel_se", cancel_se);
}

const RPG::Sound& RPG::SaveSystem::GetBuzzerSe() const {
	return getter<const RPG::Sound&>("buzzer_se");
}

RPG::Sound& RPG::SaveSystem::GetBuzzerSe() {
	return getter<RPG::Sound&>("buzzer_se");
}

void RPG::SaveSystem::SetBuzzerSe(const RPG::Sound& buzzer_se) {
	setter<RPG::Sound>("buzzer_se", buzzer_se);
}

const RPG::Sound& RPG::SaveSystem::GetBattleSe() const {
	return getter<const RPG::Sound&>("battle_se");
}

RPG::Sound& RPG::SaveSystem::GetBattleSe() {
	return getter<RPG::Sound&>("battle_se");
}

void RPG::SaveSystem::SetBattleSe(const RPG::Sound& battle_se) {
	setter<RPG::Sound>("battle_se", battle_se);
}

const RPG::Sound& RPG::SaveSystem::GetEscapeSe() const {
	return getter<const RPG::Sound&>("escape_se");
}

RPG::Sound& RPG::SaveSystem::GetEscapeSe() {
	return getter<RPG::Sound&>("escape_se");
}

void RPG::SaveSystem::SetEscapeSe(const RPG::Sound& escape_se) {
	setter<RPG::Sound>("escape_se", escape_se);
}

const RPG::Sound& RPG::SaveSystem::GetEnemyAttackSe() const {
	return getter<const RPG::Sound&>("enemy_attack_se");
}

RPG::Sound& RPG::SaveSystem::GetEnemyAttackSe() {
	return getter<RPG::Sound&>("enemy_attack_se");
}

void RPG::SaveSystem::SetEnemyAttackSe(const RPG::Sound& enemy_attack_se) {
	setter<RPG::Sound>("enemy_attack_se", enemy_attack_se);
}

const RPG::Sound& RPG::SaveSystem::GetEnemyDamagedSe() const {
	return getter<const RPG::Sound&>("enemy_damaged_se");
}

RPG::Sound& RPG::SaveSystem::GetEnemyDamagedSe() {
	return getter<RPG::Sound&>("enemy_damaged_se");
}

void RPG::SaveSystem::SetEnemyDamagedSe(const RPG::Sound& enemy_damaged_se) {
	setter<RPG::Sound>("enemy_damaged_se", enemy_damaged_se);
}

const RPG::Sound& RPG::SaveSystem::GetActorDamagedSe() const {
	return getter<const RPG::Sound&>("actor_damaged_se");
}

RPG::Sound& RPG::SaveSystem::GetActorDamagedSe() {
	return getter<RPG::Sound&>("actor_damaged_se");
}

void RPG::SaveSystem::SetActorDamagedSe(const RPG::Sound& actor_damaged_se) {
	setter<RPG::Sound>("actor_damaged_se", actor_damaged_se);
}

const RPG::Sound& RPG::SaveSystem::GetDodgeSe() const {
	return getter<const RPG::Sound&>("dodge_se");
}

RPG::Sound& RPG::SaveSystem::GetDodgeSe() {
	return getter<RPG::Sound&>("dodge_se");
}

void RPG::SaveSystem::SetDodgeSe(const RPG::Sound& dodge_se) {
	setter<RPG::Sound>("dodge_se", dodge_se);
}

const RPG::Sound& RPG::SaveSystem::GetEnemyDeathSe() const {
	return getter<const RPG::Sound&>("enemy_death_se");
}

RPG::Sound& RPG::SaveSystem::GetEnemyDeathSe() {
	return getter<RPG::Sound&>("enemy_death_se");
}

void RPG::SaveSystem::SetEnemyDeathSe(const RPG::Sound& enemy_death_se) {
	setter<RPG::Sound>("enemy_death_se", enemy_death_se);
}

const RPG::Sound& RPG::SaveSystem::GetItemSe() const {
	return getter<const RPG::Sound&>("item_se");
}

RPG::Sound& RPG::SaveSystem::GetItemSe() {
	return getter<RPG::Sound&>("item_se");
}

void RPG::SaveSystem::SetItemSe(const RPG::Sound& item_se) {
	setter<RPG::Sound>("item_se", item_se);
}

uint8_t RPG::SaveSystem::GetTransitionOut() const {
	return getter<uint8_t>("transition_out");
}

void RPG::SaveSystem::SetTransitionOut(uint8_t transition_out) {
	setter<uint8_t>("transition_out", transition_out);
}

uint8_t RPG::SaveSystem::GetTransitionIn() const {
	return getter<uint8_t>("transition_in");
}

void RPG::SaveSystem::SetTransitionIn(uint8_t transition_in) {
	setter<uint8_t>("transition_in", transition_in);
}

uint8_t RPG::SaveSystem::GetBattleStartFadeout() const {
	return getter<uint8_t>("battle_start_fadeout");
}

void RPG::SaveSystem::SetBattleStartFadeout(uint8_t battle_start_fadeout) {
	setter<uint8_t>("battle_start_fadeout", battle_start_fadeout);
}

uint8_t RPG::SaveSystem::GetBattleStartFadein() const {
	return getter<uint8_t>("battle_start_fadein");
}

void RPG::SaveSystem::SetBattleStartFadein(uint8_t battle_start_fadein) {
	setter<uint8_t>("battle_start_fadein", battle_start_fadein);
}

uint8_t RPG::SaveSystem::GetBattleEndFadeout() const {
	return getter<uint8_t>("battle_end_fadeout");
}

void RPG::SaveSystem::SetBattleEndFadeout(uint8_t battle_end_fadeout) {
	setter<uint8_t>("battle_end_fadeout", battle_end_fadeout);
}

uint8_t RPG::SaveSystem::GetBattleEndFadein() const {
	return getter<uint8_t>("battle_end_fadein");
}

void RPG::SaveSystem::SetBattleEndFadein(uint8_t battle_end_fadein) {
	setter<uint8_t>("battle_end_fadein", battle_end_fadein);
}

bool RPG::SaveSystem::GetTeleportAllowed() const {
	return getter<bool>("teleport_allowed");
}

void RPG::SaveSystem::SetTeleportAllowed(bool teleport_allowed) {
	setter<bool>("teleport_allowed", teleport_allowed);
}

bool RPG::SaveSystem::GetEscapeAllowed() const {
	return getter<bool>("escape_allowed");
}

void RPG::SaveSystem::SetEscapeAllowed(bool escape_allowed) {
	setter<bool>("escape_allowed", escape_allowed);
}

bool RPG::SaveSystem::GetSaveAllowed() const {
	return getter<bool>("save_allowed");
}

void RPG::SaveSystem::SetSaveAllowed(bool save_allowed) {
	setter<bool>("save_allowed", save_allowed);
}

bool RPG::SaveSystem::GetMenuAllowed() const {
	return getter<bool>("menu_allowed");
}

void RPG::SaveSystem::SetMenuAllowed(bool menu_allowed) {
	setter<bool>("menu_allowed", menu_allowed);
}

const std::string& RPG::SaveSystem::GetBackground() const {
	return getter<const std::string&>("background");
}

std::string& RPG::SaveSystem::GetBackground() {
	return getter<std::string&>("background");
}

void RPG::SaveSystem::SetBackground(const std::string& background) {
	setter<std::string>("background", background);
}

int RPG::SaveSystem::GetSaveCount() const {
	return getter<int>("save_count");
}

void RPG::SaveSystem::SetSaveCount(int save_count) {
	setter<int>("save_count", save_count);
}

int RPG::SaveSystem::GetSaveSlot() const {
	return getter<int>("save_slot");
}

void RPG::SaveSystem::SetSaveSlot(int save_slot) {
	setter<int>("save_slot", save_slot);
}

int RPG::SaveSystem::GetAtbMode() const {
	return getter<int>("atb_mode");
}

void RPG::SaveSystem::SetAtbMode(int atb_mode) {
	setter<int>("atb_mode", atb_mode);
}

