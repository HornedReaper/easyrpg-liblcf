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
#include <vector>
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
		std::vector<Actor> actors;
		std::vector<Skill> skills;
		std::vector<Item> items;
		std::vector<Enemy> enemies;
		std::vector<Troop> troops;
		std::vector<Terrain> terrains;
		std::vector<Attribute> attributes;
		std::vector<State> states;
		std::vector<Animation> animations;
		std::vector<Chipset> chipsets;
		Terms terms;
		System system;
		std::vector<Switch> switches;
		std::vector<Variable> variables;
		std::vector<CommonEvent> commonevents;
		int version = 0;
		BattleCommands battlecommands;
		std::vector<Class> classes;
		std::vector<BattlerAnimation> battleranimations;
		const std::vector<Actor>& GetActors() const;
		std::vector<Actor>& GetActors();
		void SetActors(const std::vector<Actor>& actors);

		const std::vector<Skill>& GetSkills() const;
		std::vector<Skill>& GetSkills();
		void SetSkills(const std::vector<Skill>& skills);

		const std::vector<Item>& GetItems() const;
		std::vector<Item>& GetItems();
		void SetItems(const std::vector<Item>& items);

		const std::vector<Enemy>& GetEnemies() const;
		std::vector<Enemy>& GetEnemies();
		void SetEnemies(const std::vector<Enemy>& enemies);

		const std::vector<Troop>& GetTroops() const;
		std::vector<Troop>& GetTroops();
		void SetTroops(const std::vector<Troop>& troops);

		const std::vector<Terrain>& GetTerrains() const;
		std::vector<Terrain>& GetTerrains();
		void SetTerrains(const std::vector<Terrain>& terrains);

		const std::vector<Attribute>& GetAttributes() const;
		std::vector<Attribute>& GetAttributes();
		void SetAttributes(const std::vector<Attribute>& attributes);

		const std::vector<State>& GetStates() const;
		std::vector<State>& GetStates();
		void SetStates(const std::vector<State>& states);

		const std::vector<Animation>& GetAnimations() const;
		std::vector<Animation>& GetAnimations();
		void SetAnimations(const std::vector<Animation>& animations);

		const std::vector<Chipset>& GetChipsets() const;
		std::vector<Chipset>& GetChipsets();
		void SetChipsets(const std::vector<Chipset>& chipsets);

		const Terms& GetTerms() const;
		Terms& GetTerms();
		void SetTerms(const Terms& terms);

		const System& GetSystem() const;
		System& GetSystem();
		void SetSystem(const System& system);

		const std::vector<Switch>& GetSwitches() const;
		std::vector<Switch>& GetSwitches();
		void SetSwitches(const std::vector<Switch>& switches);

		const std::vector<Variable>& GetVariables() const;
		std::vector<Variable>& GetVariables();
		void SetVariables(const std::vector<Variable>& variables);

		const std::vector<CommonEvent>& GetCommonevents() const;
		std::vector<CommonEvent>& GetCommonevents();
		void SetCommonevents(const std::vector<CommonEvent>& commonevents);

		int GetVersion() const;
		void SetVersion(int version);

		const BattleCommands& GetBattlecommands() const;
		BattleCommands& GetBattlecommands();
		void SetBattlecommands(const BattleCommands& battlecommands);

		const std::vector<Class>& GetClasses() const;
		std::vector<Class>& GetClasses();
		void SetClasses(const std::vector<Class>& classes);

		const std::vector<BattlerAnimation>& GetBattleranimations() const;
		std::vector<BattlerAnimation>& GetBattleranimations();
		void SetBattleranimations(const std::vector<BattlerAnimation>& battleranimations);

	};
}

#endif
