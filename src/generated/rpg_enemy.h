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

#ifndef LCF_RPG_ENEMY_H
#define LCF_RPG_ENEMY_H

// Headers
#include <string>
#include <vector>
#include "reader_types.h"
#include "rpg_enemyaction.h"

/**
 * RPG::Enemy class.
 */
namespace RPG {
	class Enemy {
	public:
		int ID = 0;
		std::string name;
		std::string battler_name;
		int battler_hue = 0;
		int max_hp = 10;
		int max_sp = 10;
		int attack = 10;
		int defense = 10;
		int spirit = 10;
		int agility = 10;
		bool transparent = false;
		int exp = 0;
		int gold = 0;
		int drop_id = 0;
		int drop_prob = 100;
		bool critical_hit = false;
		int critical_hit_chance = 30;
		bool miss = false;
		bool levitate = false;
		std::vector<uint8_t> state_ranks;
		std::vector<uint8_t> attribute_ranks;
		std::vector<EnemyAction> actions;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		const std::string& GetBattlerName() const;
		std::string& GetBattlerName();
		void SetBattlerName(const std::string& battler_name);

		int GetBattlerHue() const;
		void SetBattlerHue(int battler_hue);

		int GetMaxHp() const;
		void SetMaxHp(int max_hp);

		int GetMaxSp() const;
		void SetMaxSp(int max_sp);

		int GetAttack() const;
		void SetAttack(int attack);

		int GetDefense() const;
		void SetDefense(int defense);

		int GetSpirit() const;
		void SetSpirit(int spirit);

		int GetAgility() const;
		void SetAgility(int agility);

		bool GetTransparent() const;
		void SetTransparent(bool transparent);

		int GetExp() const;
		void SetExp(int exp);

		int GetGold() const;
		void SetGold(int gold);

		int GetDropId() const;
		void SetDropId(int drop_id);

		int GetDropProb() const;
		void SetDropProb(int drop_prob);

		bool GetCriticalHit() const;
		void SetCriticalHit(bool critical_hit);

		int GetCriticalHitChance() const;
		void SetCriticalHitChance(int critical_hit_chance);

		bool GetMiss() const;
		void SetMiss(bool miss);

		bool GetLevitate() const;
		void SetLevitate(bool levitate);


		const std::vector<uint8_t>& GetStateRanks() const;
		std::vector<uint8_t>& GetStateRanks();


		const std::vector<uint8_t>& GetAttributeRanks() const;
		std::vector<uint8_t>& GetAttributeRanks();

		const std::vector<EnemyAction>& GetActions() const;
		std::vector<EnemyAction>& GetActions();

	};
}

#endif
