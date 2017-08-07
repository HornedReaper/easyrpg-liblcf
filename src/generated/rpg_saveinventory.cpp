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
#include "rpg_saveinventory.h"

RPG::SaveInventory::SaveInventory(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

int RPG::SaveInventory::GetPartySize() const {
	return getter<int>("party_size");
}

void RPG::SaveInventory::SetPartySize(int party_size) {
	setter<int>("party_size", party_size);
}

const std::vector<int16_t>& RPG::SaveInventory::GetParty() const {
	return vector_getter<const std::vector<int16_t>&, int16_t>("party");
}

std::vector<int16_t>& RPG::SaveInventory::GetParty() {
	return vector_getter<std::vector<int16_t>&, int16_t>("party");
}

int RPG::SaveInventory::GetItemsSize() const {
	return getter<int>("items_size");
}

void RPG::SaveInventory::SetItemsSize(int items_size) {
	setter<int>("items_size", items_size);
}

const std::vector<int16_t>& RPG::SaveInventory::GetItemIds() const {
	return vector_getter<const std::vector<int16_t>&, int16_t>("item_ids");
}

std::vector<int16_t>& RPG::SaveInventory::GetItemIds() {
	return vector_getter<std::vector<int16_t>&, int16_t>("item_ids");
}

const std::vector<uint8_t>& RPG::SaveInventory::GetItemCounts() const {
	return vector_getter<const std::vector<uint8_t>&, uint8_t>("item_counts");
}

std::vector<uint8_t>& RPG::SaveInventory::GetItemCounts() {
	return vector_getter<std::vector<uint8_t>&, uint8_t>("item_counts");
}

const std::vector<uint8_t>& RPG::SaveInventory::GetItemUsage() const {
	return vector_getter<const std::vector<uint8_t>&, uint8_t>("item_usage");
}

std::vector<uint8_t>& RPG::SaveInventory::GetItemUsage() {
	return vector_getter<std::vector<uint8_t>&, uint8_t>("item_usage");
}

int RPG::SaveInventory::GetGold() const {
	return getter<int>("gold");
}

void RPG::SaveInventory::SetGold(int gold) {
	setter<int>("gold", gold);
}

int RPG::SaveInventory::GetTimer1Secs() const {
	return getter<int>("timer1_secs");
}

void RPG::SaveInventory::SetTimer1Secs(int timer1_secs) {
	setter<int>("timer1_secs", timer1_secs);
}

bool RPG::SaveInventory::GetTimer1Active() const {
	return getter<bool>("timer1_active");
}

void RPG::SaveInventory::SetTimer1Active(bool timer1_active) {
	setter<bool>("timer1_active", timer1_active);
}

bool RPG::SaveInventory::GetTimer1Visible() const {
	return getter<bool>("timer1_visible");
}

void RPG::SaveInventory::SetTimer1Visible(bool timer1_visible) {
	setter<bool>("timer1_visible", timer1_visible);
}

bool RPG::SaveInventory::GetTimer1Battle() const {
	return getter<bool>("timer1_battle");
}

void RPG::SaveInventory::SetTimer1Battle(bool timer1_battle) {
	setter<bool>("timer1_battle", timer1_battle);
}

int RPG::SaveInventory::GetTimer2Secs() const {
	return getter<int>("timer2_secs");
}

void RPG::SaveInventory::SetTimer2Secs(int timer2_secs) {
	setter<int>("timer2_secs", timer2_secs);
}

bool RPG::SaveInventory::GetTimer2Active() const {
	return getter<bool>("timer2_active");
}

void RPG::SaveInventory::SetTimer2Active(bool timer2_active) {
	setter<bool>("timer2_active", timer2_active);
}

bool RPG::SaveInventory::GetTimer2Visible() const {
	return getter<bool>("timer2_visible");
}

void RPG::SaveInventory::SetTimer2Visible(bool timer2_visible) {
	setter<bool>("timer2_visible", timer2_visible);
}

bool RPG::SaveInventory::GetTimer2Battle() const {
	return getter<bool>("timer2_battle");
}

void RPG::SaveInventory::SetTimer2Battle(bool timer2_battle) {
	setter<bool>("timer2_battle", timer2_battle);
}

int RPG::SaveInventory::GetBattles() const {
	return getter<int>("battles");
}

void RPG::SaveInventory::SetBattles(int battles) {
	setter<int>("battles", battles);
}

int RPG::SaveInventory::GetDefeats() const {
	return getter<int>("defeats");
}

void RPG::SaveInventory::SetDefeats(int defeats) {
	setter<int>("defeats", defeats);
}

int RPG::SaveInventory::GetEscapes() const {
	return getter<int>("escapes");
}

void RPG::SaveInventory::SetEscapes(int escapes) {
	setter<int>("escapes", escapes);
}

int RPG::SaveInventory::GetVictories() const {
	return getter<int>("victories");
}

void RPG::SaveInventory::SetVictories(int victories) {
	setter<int>("victories", victories);
}

int RPG::SaveInventory::GetTurns() const {
	return getter<int>("turns");
}

void RPG::SaveInventory::SetTurns(int turns) {
	setter<int>("turns", turns);
}

int RPG::SaveInventory::GetSteps() const {
	return getter<int>("steps");
}

void RPG::SaveInventory::SetSteps(int steps) {
	setter<int>("steps", steps);
}

