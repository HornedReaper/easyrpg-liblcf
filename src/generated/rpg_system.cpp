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
#include "rpg_system.h"

RPG::System::System(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

int RPG::System::GetLdbId() const {
	return getter<int>("ldb_id");
}

void RPG::System::SetLdbId(int ldb_id) {
	setter<int>("ldb_id", ldb_id);
}

const std::string& RPG::System::GetBoatName() const {
	return getter<const std::string&>("boat_name");
}

std::string& RPG::System::GetBoatName() {
	return getter<std::string&>("boat_name");
}

void RPG::System::SetBoatName(const std::string& boat_name) {
	setter<std::string>("boat_name", boat_name);
}

const std::string& RPG::System::GetShipName() const {
	return getter<const std::string&>("ship_name");
}

std::string& RPG::System::GetShipName() {
	return getter<std::string&>("ship_name");
}

void RPG::System::SetShipName(const std::string& ship_name) {
	setter<std::string>("ship_name", ship_name);
}

const std::string& RPG::System::GetAirshipName() const {
	return getter<const std::string&>("airship_name");
}

std::string& RPG::System::GetAirshipName() {
	return getter<std::string&>("airship_name");
}

void RPG::System::SetAirshipName(const std::string& airship_name) {
	setter<std::string>("airship_name", airship_name);
}

int RPG::System::GetBoatIndex() const {
	return getter<int>("boat_index");
}

void RPG::System::SetBoatIndex(int boat_index) {
	setter<int>("boat_index", boat_index);
}

int RPG::System::GetShipIndex() const {
	return getter<int>("ship_index");
}

void RPG::System::SetShipIndex(int ship_index) {
	setter<int>("ship_index", ship_index);
}

int RPG::System::GetAirshipIndex() const {
	return getter<int>("airship_index");
}

void RPG::System::SetAirshipIndex(int airship_index) {
	setter<int>("airship_index", airship_index);
}

const std::string& RPG::System::GetTitleName() const {
	return getter<const std::string&>("title_name");
}

std::string& RPG::System::GetTitleName() {
	return getter<std::string&>("title_name");
}

void RPG::System::SetTitleName(const std::string& title_name) {
	setter<std::string>("title_name", title_name);
}

const std::string& RPG::System::GetGameoverName() const {
	return getter<const std::string&>("gameover_name");
}

std::string& RPG::System::GetGameoverName() {
	return getter<std::string&>("gameover_name");
}

void RPG::System::SetGameoverName(const std::string& gameover_name) {
	setter<std::string>("gameover_name", gameover_name);
}

const std::string& RPG::System::GetSystemName() const {
	return getter<const std::string&>("system_name");
}

std::string& RPG::System::GetSystemName() {
	return getter<std::string&>("system_name");
}

void RPG::System::SetSystemName(const std::string& system_name) {
	setter<std::string>("system_name", system_name);
}

const std::string& RPG::System::GetSystem2Name() const {
	return getter<const std::string&>("system2_name");
}

std::string& RPG::System::GetSystem2Name() {
	return getter<std::string&>("system2_name");
}

void RPG::System::SetSystem2Name(const std::string& system2_name) {
	setter<std::string>("system2_name", system2_name);
}


const std::vector<int16_t>& RPG::System::GetParty() const {
	return vector_getter<const std::vector<int16_t>&, int16_t>("party");
}

std::vector<int16_t>& RPG::System::GetParty() {
	return vector_getter<std::vector<int16_t>&, int16_t>("party");
}


const std::vector<int16_t>& RPG::System::GetMenuCommands() const {
	return vector_getter<const std::vector<int16_t>&, int16_t>("menu_commands");
}

std::vector<int16_t>& RPG::System::GetMenuCommands() {
	return vector_getter<std::vector<int16_t>&, int16_t>("menu_commands");
}

const RPG::Music& RPG::System::GetTitleMusic() const {
	return getter<const RPG::Music&>("title_music");
}

RPG::Music& RPG::System::GetTitleMusic() {
	return getter<RPG::Music&>("title_music");
}

void RPG::System::SetTitleMusic(const RPG::Music& title_music) {
	setter<RPG::Music>("title_music", title_music);
}

const RPG::Music& RPG::System::GetBattleMusic() const {
	return getter<const RPG::Music&>("battle_music");
}

RPG::Music& RPG::System::GetBattleMusic() {
	return getter<RPG::Music&>("battle_music");
}

void RPG::System::SetBattleMusic(const RPG::Music& battle_music) {
	setter<RPG::Music>("battle_music", battle_music);
}

const RPG::Music& RPG::System::GetBattleEndMusic() const {
	return getter<const RPG::Music&>("battle_end_music");
}

RPG::Music& RPG::System::GetBattleEndMusic() {
	return getter<RPG::Music&>("battle_end_music");
}

void RPG::System::SetBattleEndMusic(const RPG::Music& battle_end_music) {
	setter<RPG::Music>("battle_end_music", battle_end_music);
}

const RPG::Music& RPG::System::GetInnMusic() const {
	return getter<const RPG::Music&>("inn_music");
}

RPG::Music& RPG::System::GetInnMusic() {
	return getter<RPG::Music&>("inn_music");
}

void RPG::System::SetInnMusic(const RPG::Music& inn_music) {
	setter<RPG::Music>("inn_music", inn_music);
}

const RPG::Music& RPG::System::GetBoatMusic() const {
	return getter<const RPG::Music&>("boat_music");
}

RPG::Music& RPG::System::GetBoatMusic() {
	return getter<RPG::Music&>("boat_music");
}

void RPG::System::SetBoatMusic(const RPG::Music& boat_music) {
	setter<RPG::Music>("boat_music", boat_music);
}

const RPG::Music& RPG::System::GetShipMusic() const {
	return getter<const RPG::Music&>("ship_music");
}

RPG::Music& RPG::System::GetShipMusic() {
	return getter<RPG::Music&>("ship_music");
}

void RPG::System::SetShipMusic(const RPG::Music& ship_music) {
	setter<RPG::Music>("ship_music", ship_music);
}

const RPG::Music& RPG::System::GetAirshipMusic() const {
	return getter<const RPG::Music&>("airship_music");
}

RPG::Music& RPG::System::GetAirshipMusic() {
	return getter<RPG::Music&>("airship_music");
}

void RPG::System::SetAirshipMusic(const RPG::Music& airship_music) {
	setter<RPG::Music>("airship_music", airship_music);
}

const RPG::Music& RPG::System::GetGameoverMusic() const {
	return getter<const RPG::Music&>("gameover_music");
}

RPG::Music& RPG::System::GetGameoverMusic() {
	return getter<RPG::Music&>("gameover_music");
}

void RPG::System::SetGameoverMusic(const RPG::Music& gameover_music) {
	setter<RPG::Music>("gameover_music", gameover_music);
}

const RPG::Sound& RPG::System::GetCursorSe() const {
	return getter<const RPG::Sound&>("cursor_se");
}

RPG::Sound& RPG::System::GetCursorSe() {
	return getter<RPG::Sound&>("cursor_se");
}

void RPG::System::SetCursorSe(const RPG::Sound& cursor_se) {
	setter<RPG::Sound>("cursor_se", cursor_se);
}

const RPG::Sound& RPG::System::GetDecisionSe() const {
	return getter<const RPG::Sound&>("decision_se");
}

RPG::Sound& RPG::System::GetDecisionSe() {
	return getter<RPG::Sound&>("decision_se");
}

void RPG::System::SetDecisionSe(const RPG::Sound& decision_se) {
	setter<RPG::Sound>("decision_se", decision_se);
}

const RPG::Sound& RPG::System::GetCancelSe() const {
	return getter<const RPG::Sound&>("cancel_se");
}

RPG::Sound& RPG::System::GetCancelSe() {
	return getter<RPG::Sound&>("cancel_se");
}

void RPG::System::SetCancelSe(const RPG::Sound& cancel_se) {
	setter<RPG::Sound>("cancel_se", cancel_se);
}

const RPG::Sound& RPG::System::GetBuzzerSe() const {
	return getter<const RPG::Sound&>("buzzer_se");
}

RPG::Sound& RPG::System::GetBuzzerSe() {
	return getter<RPG::Sound&>("buzzer_se");
}

void RPG::System::SetBuzzerSe(const RPG::Sound& buzzer_se) {
	setter<RPG::Sound>("buzzer_se", buzzer_se);
}

const RPG::Sound& RPG::System::GetBattleSe() const {
	return getter<const RPG::Sound&>("battle_se");
}

RPG::Sound& RPG::System::GetBattleSe() {
	return getter<RPG::Sound&>("battle_se");
}

void RPG::System::SetBattleSe(const RPG::Sound& battle_se) {
	setter<RPG::Sound>("battle_se", battle_se);
}

const RPG::Sound& RPG::System::GetEscapeSe() const {
	return getter<const RPG::Sound&>("escape_se");
}

RPG::Sound& RPG::System::GetEscapeSe() {
	return getter<RPG::Sound&>("escape_se");
}

void RPG::System::SetEscapeSe(const RPG::Sound& escape_se) {
	setter<RPG::Sound>("escape_se", escape_se);
}

const RPG::Sound& RPG::System::GetEnemyAttackSe() const {
	return getter<const RPG::Sound&>("enemy_attack_se");
}

RPG::Sound& RPG::System::GetEnemyAttackSe() {
	return getter<RPG::Sound&>("enemy_attack_se");
}

void RPG::System::SetEnemyAttackSe(const RPG::Sound& enemy_attack_se) {
	setter<RPG::Sound>("enemy_attack_se", enemy_attack_se);
}

const RPG::Sound& RPG::System::GetEnemyDamagedSe() const {
	return getter<const RPG::Sound&>("enemy_damaged_se");
}

RPG::Sound& RPG::System::GetEnemyDamagedSe() {
	return getter<RPG::Sound&>("enemy_damaged_se");
}

void RPG::System::SetEnemyDamagedSe(const RPG::Sound& enemy_damaged_se) {
	setter<RPG::Sound>("enemy_damaged_se", enemy_damaged_se);
}

const RPG::Sound& RPG::System::GetActorDamagedSe() const {
	return getter<const RPG::Sound&>("actor_damaged_se");
}

RPG::Sound& RPG::System::GetActorDamagedSe() {
	return getter<RPG::Sound&>("actor_damaged_se");
}

void RPG::System::SetActorDamagedSe(const RPG::Sound& actor_damaged_se) {
	setter<RPG::Sound>("actor_damaged_se", actor_damaged_se);
}

const RPG::Sound& RPG::System::GetDodgeSe() const {
	return getter<const RPG::Sound&>("dodge_se");
}

RPG::Sound& RPG::System::GetDodgeSe() {
	return getter<RPG::Sound&>("dodge_se");
}

void RPG::System::SetDodgeSe(const RPG::Sound& dodge_se) {
	setter<RPG::Sound>("dodge_se", dodge_se);
}

const RPG::Sound& RPG::System::GetEnemyDeathSe() const {
	return getter<const RPG::Sound&>("enemy_death_se");
}

RPG::Sound& RPG::System::GetEnemyDeathSe() {
	return getter<RPG::Sound&>("enemy_death_se");
}

void RPG::System::SetEnemyDeathSe(const RPG::Sound& enemy_death_se) {
	setter<RPG::Sound>("enemy_death_se", enemy_death_se);
}

const RPG::Sound& RPG::System::GetItemSe() const {
	return getter<const RPG::Sound&>("item_se");
}

RPG::Sound& RPG::System::GetItemSe() {
	return getter<RPG::Sound&>("item_se");
}

void RPG::System::SetItemSe(const RPG::Sound& item_se) {
	setter<RPG::Sound>("item_se", item_se);
}

int RPG::System::GetTransitionOut() const {
	return getter<int>("transition_out");
}

void RPG::System::SetTransitionOut(int transition_out) {
	setter<int>("transition_out", transition_out);
}

int RPG::System::GetTransitionIn() const {
	return getter<int>("transition_in");
}

void RPG::System::SetTransitionIn(int transition_in) {
	setter<int>("transition_in", transition_in);
}

int RPG::System::GetBattleStartFadeout() const {
	return getter<int>("battle_start_fadeout");
}

void RPG::System::SetBattleStartFadeout(int battle_start_fadeout) {
	setter<int>("battle_start_fadeout", battle_start_fadeout);
}

int RPG::System::GetBattleStartFadein() const {
	return getter<int>("battle_start_fadein");
}

void RPG::System::SetBattleStartFadein(int battle_start_fadein) {
	setter<int>("battle_start_fadein", battle_start_fadein);
}

int RPG::System::GetBattleEndFadeout() const {
	return getter<int>("battle_end_fadeout");
}

void RPG::System::SetBattleEndFadeout(int battle_end_fadeout) {
	setter<int>("battle_end_fadeout", battle_end_fadeout);
}

int RPG::System::GetBattleEndFadein() const {
	return getter<int>("battle_end_fadein");
}

void RPG::System::SetBattleEndFadein(int battle_end_fadein) {
	setter<int>("battle_end_fadein", battle_end_fadein);
}

int RPG::System::GetMessageStretch() const {
	return getter<int>("message_stretch");
}

void RPG::System::SetMessageStretch(int message_stretch) {
	setter<int>("message_stretch", message_stretch);
}

int RPG::System::GetFontId() const {
	return getter<int>("font_id");
}

void RPG::System::SetFontId(int font_id) {
	setter<int>("font_id", font_id);
}

int RPG::System::GetSelectedCondition() const {
	return getter<int>("selected_condition");
}

void RPG::System::SetSelectedCondition(int selected_condition) {
	setter<int>("selected_condition", selected_condition);
}

int RPG::System::GetSelectedHero() const {
	return getter<int>("selected_hero");
}

void RPG::System::SetSelectedHero(int selected_hero) {
	setter<int>("selected_hero", selected_hero);
}

const std::string& RPG::System::GetBattletestBackground() const {
	return getter<const std::string&>("battletest_background");
}

std::string& RPG::System::GetBattletestBackground() {
	return getter<std::string&>("battletest_background");
}

void RPG::System::SetBattletestBackground(const std::string& battletest_background) {
	setter<std::string>("battletest_background", battletest_background);
}

const std::vector<RPG::TestBattler>& RPG::System::GetBattletestData() const {
	return vector_getter<const std::vector<RPG::TestBattler>&, RPG::TestBattler>("battletest_data");
}

std::vector<RPG::TestBattler>& RPG::System::GetBattletestData() {
	return vector_getter<std::vector<RPG::TestBattler>&, RPG::TestBattler>("battletest_data");
}

int RPG::System::GetSaveCount() const {
	return getter<int>("save_count");
}

void RPG::System::SetSaveCount(int save_count) {
	setter<int>("save_count", save_count);
}

int RPG::System::GetBattletestTerrain() const {
	return getter<int>("battletest_terrain");
}

void RPG::System::SetBattletestTerrain(int battletest_terrain) {
	setter<int>("battletest_terrain", battletest_terrain);
}

int RPG::System::GetBattletestFormation() const {
	return getter<int>("battletest_formation");
}

void RPG::System::SetBattletestFormation(int battletest_formation) {
	setter<int>("battletest_formation", battletest_formation);
}

int RPG::System::GetBattletestCondition() const {
	return getter<int>("battletest_condition");
}

void RPG::System::SetBattletestCondition(int battletest_condition) {
	setter<int>("battletest_condition", battletest_condition);
}

int RPG::System::GetUnknown61() const {
	return getter<int>("unknown_61");
}

void RPG::System::SetUnknown61(int unknown_61) {
	setter<int>("unknown_61", unknown_61);
}

bool RPG::System::GetShowFrame() const {
	return getter<bool>("show_frame");
}

void RPG::System::SetShowFrame(bool show_frame) {
	setter<bool>("show_frame", show_frame);
}

const std::string& RPG::System::GetFrameName() const {
	return getter<const std::string&>("frame_name");
}

std::string& RPG::System::GetFrameName() {
	return getter<std::string&>("frame_name");
}

void RPG::System::SetFrameName(const std::string& frame_name) {
	setter<std::string>("frame_name", frame_name);
}

bool RPG::System::GetInvertAnimations() const {
	return getter<bool>("invert_animations");
}

void RPG::System::SetInvertAnimations(bool invert_animations) {
	setter<bool>("invert_animations", invert_animations);
}

bool RPG::System::GetShowTitle() const {
	return getter<bool>("show_title");
}

void RPG::System::SetShowTitle(bool show_title) {
	setter<bool>("show_title", show_title);
}

