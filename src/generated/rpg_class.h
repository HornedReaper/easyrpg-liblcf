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

#ifndef LCF_RPG_CLASS_H
#define LCF_RPG_CLASS_H

// Headers
#include <string>
#include <vector>
#include "reader_types.h"
#include "rpg_learning.h"
#include "rpg_parameters.h"

/**
 * RPG::Class class.
 */
namespace RPG {
	class Class {
	public:
		int ID = 0;
		std::string name;
		bool two_weapon = false;
		bool lock_equipment = false;
		bool auto_battle = false;
		bool super_guard = false;
		Parameters parameters;
		int exp_base = 300;
		int exp_inflation = 300;
		int exp_correction = 0;
		int battler_animation = 0;
		std::vector<Learning> skills;
		std::vector<uint8_t> state_ranks;
		std::vector<uint8_t> attribute_ranks;
		std::vector<uint32_t> battle_commands;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		bool GetTwoWeapon() const;
		void SetTwoWeapon(bool two_weapon);

		bool GetLockEquipment() const;
		void SetLockEquipment(bool lock_equipment);

		bool GetAutoBattle() const;
		void SetAutoBattle(bool auto_battle);

		bool GetSuperGuard() const;
		void SetSuperGuard(bool super_guard);

		const Parameters& GetParameters() const;
		Parameters& GetParameters();
		void SetParameters(const Parameters& parameters);

		int GetExpBase() const;
		void SetExpBase(int exp_base);

		int GetExpInflation() const;
		void SetExpInflation(int exp_inflation);

		int GetExpCorrection() const;
		void SetExpCorrection(int exp_correction);

		int GetBattlerAnimation() const;
		void SetBattlerAnimation(int battler_animation);

		const std::vector<Learning>& GetSkills() const;
		std::vector<Learning>& GetSkills();
		void SetSkills(const std::vector<Learning>& skills);


		const std::vector<uint8_t>& GetStateRanks() const;
		std::vector<uint8_t>& GetStateRanks();
		void SetStateRanks(const std::vector<uint8_t>& state_ranks);


		const std::vector<uint8_t>& GetAttributeRanks() const;
		std::vector<uint8_t>& GetAttributeRanks();
		void SetAttributeRanks(const std::vector<uint8_t>& attribute_ranks);

		const std::vector<uint32_t>& GetBattleCommands() const;
		std::vector<uint32_t>& GetBattleCommands();
		void SetBattleCommands(const std::vector<uint32_t>& battle_commands);

	};
}

#endif
