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
#include "rpg_database.h"


const LcfVector<RPG::Actor>& RPG::Database::GetActors() const  {
	return actors;
}

LcfVector<RPG::Actor>& RPG::Database::GetActors() {
	return actors;
}

void RPG::Database::SetActors(const LcfVector<RPG::Actor>& actors) {
	this->actors = actors;
}

const LcfVector<RPG::Skill>& RPG::Database::GetSkills() const  {
	return skills;
}

LcfVector<RPG::Skill>& RPG::Database::GetSkills() {
	return skills;
}

void RPG::Database::SetSkills(const LcfVector<RPG::Skill>& skills) {
	this->skills = skills;
}

const LcfVector<RPG::Item>& RPG::Database::GetItems() const  {
	return items;
}

LcfVector<RPG::Item>& RPG::Database::GetItems() {
	return items;
}

void RPG::Database::SetItems(const LcfVector<RPG::Item>& items) {
	this->items = items;
}

const LcfVector<RPG::Enemy>& RPG::Database::GetEnemies() const  {
	return enemies;
}

LcfVector<RPG::Enemy>& RPG::Database::GetEnemies() {
	return enemies;
}

void RPG::Database::SetEnemies(const LcfVector<RPG::Enemy>& enemies) {
	this->enemies = enemies;
}

const LcfVector<RPG::Troop>& RPG::Database::GetTroops() const  {
	return troops;
}

LcfVector<RPG::Troop>& RPG::Database::GetTroops() {
	return troops;
}

void RPG::Database::SetTroops(const LcfVector<RPG::Troop>& troops) {
	this->troops = troops;
}

const LcfVector<RPG::Terrain>& RPG::Database::GetTerrains() const  {
	return terrains;
}

LcfVector<RPG::Terrain>& RPG::Database::GetTerrains() {
	return terrains;
}

void RPG::Database::SetTerrains(const LcfVector<RPG::Terrain>& terrains) {
	this->terrains = terrains;
}

const LcfVector<RPG::Attribute>& RPG::Database::GetAttributes() const  {
	return attributes;
}

LcfVector<RPG::Attribute>& RPG::Database::GetAttributes() {
	return attributes;
}

void RPG::Database::SetAttributes(const LcfVector<RPG::Attribute>& attributes) {
	this->attributes = attributes;
}

const LcfVector<RPG::State>& RPG::Database::GetStates() const  {
	return states;
}

LcfVector<RPG::State>& RPG::Database::GetStates() {
	return states;
}

void RPG::Database::SetStates(const LcfVector<RPG::State>& states) {
	this->states = states;
}

const LcfVector<RPG::Animation>& RPG::Database::GetAnimations() const  {
	return animations;
}

LcfVector<RPG::Animation>& RPG::Database::GetAnimations() {
	return animations;
}

void RPG::Database::SetAnimations(const LcfVector<RPG::Animation>& animations) {
	this->animations = animations;
}

const LcfVector<RPG::Chipset>& RPG::Database::GetChipsets() const  {
	return chipsets;
}

LcfVector<RPG::Chipset>& RPG::Database::GetChipsets() {
	return chipsets;
}

void RPG::Database::SetChipsets(const LcfVector<RPG::Chipset>& chipsets) {
	this->chipsets = chipsets;
}

const RPG::Terms& RPG::Database::GetTerms() const  {
	return terms;
}

RPG::Terms& RPG::Database::GetTerms() {
	return terms;
}

void RPG::Database::SetTerms(const RPG::Terms& terms) {
	this->terms = terms;
}

const RPG::System& RPG::Database::GetSystem() const  {
	return system;
}

RPG::System& RPG::Database::GetSystem() {
	return system;
}

void RPG::Database::SetSystem(const RPG::System& system) {
	this->system = system;
}

const LcfVector<RPG::Switch>& RPG::Database::GetSwitches() const  {
	return switches;
}

LcfVector<RPG::Switch>& RPG::Database::GetSwitches() {
	return switches;
}

void RPG::Database::SetSwitches(const LcfVector<RPG::Switch>& switches) {
	this->switches = switches;
}

const LcfVector<RPG::Variable>& RPG::Database::GetVariables() const  {
	return variables;
}

LcfVector<RPG::Variable>& RPG::Database::GetVariables() {
	return variables;
}

void RPG::Database::SetVariables(const LcfVector<RPG::Variable>& variables) {
	this->variables = variables;
}

const LcfVector<RPG::CommonEvent>& RPG::Database::GetCommonevents() const  {
	return commonevents;
}

LcfVector<RPG::CommonEvent>& RPG::Database::GetCommonevents() {
	return commonevents;
}

void RPG::Database::SetCommonevents(const LcfVector<RPG::CommonEvent>& commonevents) {
	this->commonevents = commonevents;
}

int RPG::Database::GetVersion() const {
	return version;
}

void RPG::Database::SetVersion(int version) {
	this->version = version;
}

const RPG::BattleCommands& RPG::Database::GetBattlecommands() const  {
	return battlecommands;
}

RPG::BattleCommands& RPG::Database::GetBattlecommands() {
	return battlecommands;
}

void RPG::Database::SetBattlecommands(const RPG::BattleCommands& battlecommands) {
	this->battlecommands = battlecommands;
}

const LcfVector<RPG::Class>& RPG::Database::GetClasses() const  {
	return classes;
}

LcfVector<RPG::Class>& RPG::Database::GetClasses() {
	return classes;
}

void RPG::Database::SetClasses(const LcfVector<RPG::Class>& classes) {
	this->classes = classes;
}

const LcfVector<RPG::BattlerAnimation>& RPG::Database::GetBattleranimations() const  {
	return battleranimations;
}

LcfVector<RPG::BattlerAnimation>& RPG::Database::GetBattleranimations() {
	return battleranimations;
}

void RPG::Database::SetBattleranimations(const LcfVector<RPG::BattlerAnimation>& battleranimations) {
	this->battleranimations = battleranimations;
}

