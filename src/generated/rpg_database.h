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

#ifndef LCF_RPG_DATABASE_H
#define LCF_RPG_DATABASE_H

// Headers
#include "lcf_vector.h"
#include "rpg_actor.h"
#include "rpg_animation.h"
#include "rpg_attribute.h"
#include "rpg_battlecommands.h"
#include "rpg_battleranimation.h"
#include "rpg_chipset.h"
#include "rpg_class.h"
#include "rpg_commonevent.h"
#include "rpg_enemy.h"
#include "rpg_item.h"
#include "rpg_skill.h"
#include "rpg_state.h"
#include "rpg_switch.h"
#include "rpg_system.h"
#include "rpg_terms.h"
#include "rpg_terrain.h"
#include "rpg_troop.h"
#include "rpg_variable.h"

/**
 * RPG::Database class.
 */
namespace RPG {
	class Database {
	public:
		LcfVector<Actor> actors;
		LcfVector<Skill> skills;
		LcfVector<Item> items;
		LcfVector<Enemy> enemies;
		LcfVector<Troop> troops;
		LcfVector<Terrain> terrains;
		LcfVector<Attribute> attributes;
		LcfVector<State> states;
		LcfVector<Animation> animations;
		LcfVector<Chipset> chipsets;
		Terms terms;
		System system;
		LcfVector<Switch> switches;
		LcfVector<Variable> variables;
		LcfVector<CommonEvent> commonevents;
		int version = 0;
		BattleCommands battlecommands;
		LcfVector<Class> classes;
		LcfVector<BattlerAnimation> battleranimations;
		const LcfVector<Actor>& GetActors() const;
		LcfVector<Actor>& GetActors();
		void SetActors(const LcfVector<Actor>& actors);

		const LcfVector<Skill>& GetSkills() const;
		LcfVector<Skill>& GetSkills();
		void SetSkills(const LcfVector<Skill>& skills);

		const LcfVector<Item>& GetItems() const;
		LcfVector<Item>& GetItems();
		void SetItems(const LcfVector<Item>& items);

		const LcfVector<Enemy>& GetEnemies() const;
		LcfVector<Enemy>& GetEnemies();
		void SetEnemies(const LcfVector<Enemy>& enemies);

		const LcfVector<Troop>& GetTroops() const;
		LcfVector<Troop>& GetTroops();
		void SetTroops(const LcfVector<Troop>& troops);

		const LcfVector<Terrain>& GetTerrains() const;
		LcfVector<Terrain>& GetTerrains();
		void SetTerrains(const LcfVector<Terrain>& terrains);

		const LcfVector<Attribute>& GetAttributes() const;
		LcfVector<Attribute>& GetAttributes();
		void SetAttributes(const LcfVector<Attribute>& attributes);

		const LcfVector<State>& GetStates() const;
		LcfVector<State>& GetStates();
		void SetStates(const LcfVector<State>& states);

		const LcfVector<Animation>& GetAnimations() const;
		LcfVector<Animation>& GetAnimations();
		void SetAnimations(const LcfVector<Animation>& animations);

		const LcfVector<Chipset>& GetChipsets() const;
		LcfVector<Chipset>& GetChipsets();
		void SetChipsets(const LcfVector<Chipset>& chipsets);

		const Terms& GetTerms() const;
		Terms& GetTerms();
		void SetTerms(const Terms& terms);

		const System& GetSystem() const;
		System& GetSystem();
		void SetSystem(const System& system);

		const LcfVector<Switch>& GetSwitches() const;
		LcfVector<Switch>& GetSwitches();
		void SetSwitches(const LcfVector<Switch>& switches);

		const LcfVector<Variable>& GetVariables() const;
		LcfVector<Variable>& GetVariables();
		void SetVariables(const LcfVector<Variable>& variables);

		const LcfVector<CommonEvent>& GetCommonevents() const;
		LcfVector<CommonEvent>& GetCommonevents();
		void SetCommonevents(const LcfVector<CommonEvent>& commonevents);

		int GetVersion() const;
		void SetVersion(int version);

		const BattleCommands& GetBattlecommands() const;
		BattleCommands& GetBattlecommands();
		void SetBattlecommands(const BattleCommands& battlecommands);

		const LcfVector<Class>& GetClasses() const;
		LcfVector<Class>& GetClasses();
		void SetClasses(const LcfVector<Class>& classes);

		const LcfVector<BattlerAnimation>& GetBattleranimations() const;
		LcfVector<BattlerAnimation>& GetBattleranimations();
		void SetBattleranimations(const LcfVector<BattlerAnimation>& battleranimations);

	};
}

#endif
