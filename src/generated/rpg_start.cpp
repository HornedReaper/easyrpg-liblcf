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
#include "rpg_start.h"

RPG::Start::Start(rapidjson::Value& json_values) {
	this->json_values = &json_values;
}

int RPG::Start::GetPartyMapId() const {
	return getter<int>("party_map_id");
}

void RPG::Start::SetPartyMapId(int party_map_id) {
	setter<int>("party_map_id", party_map_id);
}

int RPG::Start::GetPartyX() const {
	return getter<int>("party_x");
}

void RPG::Start::SetPartyX(int party_x) {
	setter<int>("party_x", party_x);
}

int RPG::Start::GetPartyY() const {
	return getter<int>("party_y");
}

void RPG::Start::SetPartyY(int party_y) {
	setter<int>("party_y", party_y);
}

int RPG::Start::GetBoatMapId() const {
	return getter<int>("boat_map_id");
}

void RPG::Start::SetBoatMapId(int boat_map_id) {
	setter<int>("boat_map_id", boat_map_id);
}

int RPG::Start::GetBoatX() const {
	return getter<int>("boat_x");
}

void RPG::Start::SetBoatX(int boat_x) {
	setter<int>("boat_x", boat_x);
}

int RPG::Start::GetBoatY() const {
	return getter<int>("boat_y");
}

void RPG::Start::SetBoatY(int boat_y) {
	setter<int>("boat_y", boat_y);
}

int RPG::Start::GetShipMapId() const {
	return getter<int>("ship_map_id");
}

void RPG::Start::SetShipMapId(int ship_map_id) {
	setter<int>("ship_map_id", ship_map_id);
}

int RPG::Start::GetShipX() const {
	return getter<int>("ship_x");
}

void RPG::Start::SetShipX(int ship_x) {
	setter<int>("ship_x", ship_x);
}

int RPG::Start::GetShipY() const {
	return getter<int>("ship_y");
}

void RPG::Start::SetShipY(int ship_y) {
	setter<int>("ship_y", ship_y);
}

int RPG::Start::GetAirshipMapId() const {
	return getter<int>("airship_map_id");
}

void RPG::Start::SetAirshipMapId(int airship_map_id) {
	setter<int>("airship_map_id", airship_map_id);
}

int RPG::Start::GetAirshipX() const {
	return getter<int>("airship_x");
}

void RPG::Start::SetAirshipX(int airship_x) {
	setter<int>("airship_x", airship_x);
}

int RPG::Start::GetAirshipY() const {
	return getter<int>("airship_y");
}

void RPG::Start::SetAirshipY(int airship_y) {
	setter<int>("airship_y", airship_y);
}

