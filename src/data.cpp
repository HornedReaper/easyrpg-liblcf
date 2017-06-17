/*
 * This file is part of liblcf. Copyright (c) 2017 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include "rpg_database.h"
#include "data.h"

namespace Data {
	RPG::Database data;

	LcfVector<RPG::Actor>& actors = data.actors;
	LcfVector<RPG::Skill>& skills = data.skills;
	LcfVector<RPG::Item>& items = data.items;
	LcfVector<RPG::Enemy>& enemies = data.enemies;
	LcfVector<RPG::Troop>& troops = data.troops;
	LcfVector<RPG::Terrain>& terrains = data.terrains;
	LcfVector<RPG::Attribute>& attributes = data.attributes;
	LcfVector<RPG::State>& states = data.states;
	LcfVector<RPG::Animation>& animations = data.animations;
	LcfVector<RPG::Chipset>& chipsets = data.chipsets;
	LcfVector<RPG::CommonEvent>& commonevents = data.commonevents;
	RPG::BattleCommands& battlecommands = data.battlecommands;
	LcfVector<RPG::Class>& classes = data.classes;
	LcfVector<RPG::BattlerAnimation>& battleranimations = data.battleranimations;
	RPG::Terms& terms = data.terms;
	RPG::System& system = data.system;
	LcfVector<RPG::Switch>& switches = data.switches;
	LcfVector<RPG::Variable>& variables = data.variables;

	RPG::TreeMap treemap;
}

void Data::Clear() {
	actors.clear();
	skills.clear();
	items.clear();
	enemies.clear();
	troops.clear();
	terrains.clear();
	attributes.clear();
	states.clear();
	animations.clear();
	chipsets.clear();
	commonevents.clear();
	battlecommands = RPG::BattleCommands();
	classes.clear();
	battleranimations.clear();
	terms = RPG::Terms();
	system = RPG::System();
	switches.clear();
	variables.clear();
	treemap.active_node = 0;
	treemap.maps.clear();
	treemap.tree_order.clear();
}
