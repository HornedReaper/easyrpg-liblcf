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

#ifndef LCF_RPG_ACTOR_H
#define LCF_RPG_ACTOR_H

// Headers
#include <string>
#include "lcf_vector.h"
#include "reader_types.h"
#include "rpg_equipment.h"
#include "rpg_learning.h"
#include "rpg_parameters.h"

/**
 * RPG::Actor class.
 */
namespace RPG {
	class Actor {
	public:
		void Setup();
		int ID = 0;
		std::string name;
		std::string title;
		std::string character_name;
		int character_index = 0;
		bool transparent = false;
		int initial_level = 1;
		int final_level = -1;
		bool critical_hit = true;
		int critical_hit_chance = 30;
		std::string face_name;
		int face_index = 0;
		bool two_weapon = false;
		bool lock_equipment = false;
		bool auto_battle = false;
		bool super_guard = false;
		Parameters parameters;
		int exp_base = -1;
		int exp_inflation = -1;
		int exp_correction = 0;
		Equipment initial_equipment;
		int unarmed_animation = 1;
		int class_id = 0;
		int battle_x = 220;
		int battle_y = 120;
		int battler_animation = 1;
		LcfVector<Learning> skills;
		bool rename_skill = false;
		std::string skill_name;
		LcfVector<uint8_t> state_ranks;
		LcfVector<uint8_t> attribute_ranks;
		LcfVector<uint32_t> battle_commands;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		const std::string& GetTitle() const;
		std::string& GetTitle();
		void SetTitle(const std::string& title);

		const std::string& GetCharacterName() const;
		std::string& GetCharacterName();
		void SetCharacterName(const std::string& character_name);

		int GetCharacterIndex() const;
		void SetCharacterIndex(int character_index);

		bool GetTransparent() const;
		void SetTransparent(bool transparent);

		int GetInitialLevel() const;
		void SetInitialLevel(int initial_level);

		int GetFinalLevel() const;
		void SetFinalLevel(int final_level);

		bool GetCriticalHit() const;
		void SetCriticalHit(bool critical_hit);

		int GetCriticalHitChance() const;
		void SetCriticalHitChance(int critical_hit_chance);

		const std::string& GetFaceName() const;
		std::string& GetFaceName();
		void SetFaceName(const std::string& face_name);

		int GetFaceIndex() const;
		void SetFaceIndex(int face_index);

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

		const Equipment& GetInitialEquipment() const;
		Equipment& GetInitialEquipment();
		void SetInitialEquipment(const Equipment& initial_equipment);

		int GetUnarmedAnimation() const;
		void SetUnarmedAnimation(int unarmed_animation);

		int GetClassId() const;
		void SetClassId(int class_id);

		int GetBattleX() const;
		void SetBattleX(int battle_x);

		int GetBattleY() const;
		void SetBattleY(int battle_y);

		int GetBattlerAnimation() const;
		void SetBattlerAnimation(int battler_animation);

		const LcfVector<Learning>& GetSkills() const;
		LcfVector<Learning>& GetSkills();
		void AddSkills(const Learning& learning);
		Learning&

		bool GetRenameSkill() const;
		void SetRenameSkill(bool rename_skill);

		const std::string& GetSkillName() const;
		std::string& GetSkillName();
		void SetSkillName(const std::string& skill_name);


		const LcfVector<uint8_t>& GetStateRanks() const;
		LcfVector<uint8_t>& GetStateRanks();
		void AddStateRanks(const uint8_t& uint8_t);
		uint8_t&


		const LcfVector<uint8_t>& GetAttributeRanks() const;
		LcfVector<uint8_t>& GetAttributeRanks();
		void AddAttributeRanks(const uint8_t& uint8_t);
		uint8_t&

		const LcfVector<uint32_t>& GetBattleCommands() const;
		LcfVector<uint32_t>& GetBattleCommands();
		void AddBattleCommands(const uint32_t& uint32_t);
		uint32_t&

	};
}

#endif
