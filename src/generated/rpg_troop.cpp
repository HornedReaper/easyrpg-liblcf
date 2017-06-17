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
#include "rpg_troop.h"


const std::string& RPG::Troop::GetName() const  {
	return name;
}

std::string& RPG::Troop::GetName() {
	return name;
}

void RPG::Troop::SetName(const std::string& name) {
	this->name = name;
}

const LcfVector<RPG::TroopMember>& RPG::Troop::GetMembers() const  {
	return members;
}

LcfVector<RPG::TroopMember>& RPG::Troop::GetMembers() {
	return members;
}

void RPG::Troop::SetMembers(const LcfVector<RPG::TroopMember>& members) {
	this->members = members;
}

bool RPG::Troop::GetAutoAlignment() const {
	return auto_alignment;
}

void RPG::Troop::SetAutoAlignment(bool auto_alignment) {
	this->auto_alignment = auto_alignment;
}


const LcfVector<bool>& RPG::Troop::GetTerrainSet() const  {
	return terrain_set;
}

LcfVector<bool>& RPG::Troop::GetTerrainSet() {
	return terrain_set;
}

void RPG::Troop::SetTerrainSet(const LcfVector<bool>& terrain_set) {
	this->terrain_set = terrain_set;
}

bool RPG::Troop::GetAppearRandomly() const {
	return appear_randomly;
}

void RPG::Troop::SetAppearRandomly(bool appear_randomly) {
	this->appear_randomly = appear_randomly;
}

const LcfVector<RPG::TroopPage>& RPG::Troop::GetPages() const  {
	return pages;
}

LcfVector<RPG::TroopPage>& RPG::Troop::GetPages() {
	return pages;
}

void RPG::Troop::SetPages(const LcfVector<RPG::TroopPage>& pages) {
	this->pages = pages;
}

