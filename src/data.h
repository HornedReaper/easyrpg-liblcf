/*
 * This file is part of liblcf. Copyright (c) 2017 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_DATA_H
#define LCF_DATA_H

#include <string>
#include "rpg_actor.h"
#include "rpg_skill.h"
#include "rpg_item.h"
#include "rpg_enemy.h"
#include "rpg_troop.h"
#include "rpg_attribute.h"
#include "rpg_state.h"
#include "rpg_terrain.h"
#include "rpg_animation.h"
#include "rpg_chipset.h"
#include "rpg_terms.h"
#include "rpg_system.h"
#include "rpg_commonevent.h"
#include "rpg_class.h"
#include "rpg_battlecommand.h"
#include "rpg_battleranimation.h"
#include "rpg_sound.h"
#include "rpg_music.h"
#include "rpg_eventcommand.h"
#include "rpg_treemap.h"
#include "rpg_database.h"

/**
 * Data namespace
 */
namespace Data {
	/** Database Data (ldb) */
	extern RPG::Database data;
	/** @{ */
	extern LcfVector<RPG::Actor>& actors;
	extern LcfVector<RPG::Skill>& skills;
	extern LcfVector<RPG::Item>& items;
	extern LcfVector<RPG::Enemy>& enemies;
	extern LcfVector<RPG::Troop>& troops;
	extern LcfVector<RPG::Terrain>& terrains;
	extern LcfVector<RPG::Attribute>& attributes;
	extern LcfVector<RPG::State>& states;
	extern LcfVector<RPG::Animation>& animations;
	extern LcfVector<RPG::Chipset>& chipsets;
	extern LcfVector<RPG::CommonEvent>& commonevents;
	extern RPG::BattleCommands& battlecommands;
	extern LcfVector<RPG::Class>& classes;
	extern LcfVector<RPG::BattlerAnimation>& battleranimations;
	extern RPG::Terms& terms;
	extern RPG::System& system;
	extern LcfVector<RPG::Switch>& switches;
	extern LcfVector<RPG::Variable>& variables;
	/** @} */

	/** TreeMap (lmt) */
	extern RPG::TreeMap treemap;

	/**
	 * Clears database data.
	 */
	void Clear();
}

#endif
