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

#ifndef LCF_RPG_SAVEACTOR_H
#define LCF_RPG_SAVEACTOR_H

// Headers
#include <string>
#include <vector>
#include "reader_types.h"

/**
 * RPG::SaveActor class.
 */
namespace RPG {
	class SaveActor {
	public:
		void Setup(int actor_id);
		void Fixup(int actor_id);
		int ID = 0;
		std::string name;
		std::string title;
		std::string sprite_name;
		int sprite_id = 0;
		int sprite_flags = 0;
		std::string face_name;
		int face_id = 0;
		int level = -1;
		int exp = -1;
		int hp_mod = -1;
		int sp_mod = -1;
		int attack_mod = 0;
		int defense_mod = 0;
		int spirit_mod = 0;
		int agility_mod = 0;
		int skills_size = -1;
		std::vector<int16_t> skills;
		std::vector<int16_t> equipped;
		int current_hp = -1;
		int current_sp = -1;
		std::vector<uint32_t> battle_commands;
		int status_size = 0;
		std::vector<int16_t> status;
		bool changed_class = false;
		int class_id = -1;
		int row = 0;
		bool two_weapon = false;
		bool lock_equipment = false;
		bool auto_battle = false;
		bool super_guard = false;
		int battler_animation = 0;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		const std::string& GetTitle() const;
		std::string& GetTitle();
		void SetTitle(const std::string& title);

		const std::string& GetSpriteName() const;
		std::string& GetSpriteName();
		void SetSpriteName(const std::string& sprite_name);

		int GetSpriteId() const;
		void SetSpriteId(int sprite_id);

		int GetSpriteFlags() const;
		void SetSpriteFlags(int sprite_flags);

		const std::string& GetFaceName() const;
		std::string& GetFaceName();
		void SetFaceName(const std::string& face_name);

		int GetFaceId() const;
		void SetFaceId(int face_id);

		int GetLevel() const;
		void SetLevel(int level);

		int GetExp() const;
		void SetExp(int exp);

		int GetHpMod() const;
		void SetHpMod(int hp_mod);

		int GetSpMod() const;
		void SetSpMod(int sp_mod);

		int GetAttackMod() const;
		void SetAttackMod(int attack_mod);

		int GetDefenseMod() const;
		void SetDefenseMod(int defense_mod);

		int GetSpiritMod() const;
		void SetSpiritMod(int spirit_mod);

		int GetAgilityMod() const;
		void SetAgilityMod(int agility_mod);

		int GetSkillsSize() const;
		void SetSkillsSize(int skills_size);

		const std::vector<int16_t>& GetSkills() const;
		std::vector<int16_t>& GetSkills();
		void SetSkills(const std::vector<int16_t>& skills);

		const std::vector<int16_t>& GetEquipped() const;
		std::vector<int16_t>& GetEquipped();
		void SetEquipped(const std::vector<int16_t>& equipped);

		int GetCurrentHp() const;
		void SetCurrentHp(int current_hp);

		int GetCurrentSp() const;
		void SetCurrentSp(int current_sp);

		const std::vector<uint32_t>& GetBattleCommands() const;
		std::vector<uint32_t>& GetBattleCommands();
		void SetBattleCommands(const std::vector<uint32_t>& battle_commands);

		int GetStatusSize() const;
		void SetStatusSize(int status_size);

		const std::vector<int16_t>& GetStatus() const;
		std::vector<int16_t>& GetStatus();
		void SetStatus(const std::vector<int16_t>& status);

		bool GetChangedClass() const;
		void SetChangedClass(bool changed_class);

		int GetClassId() const;
		void SetClassId(int class_id);

		int GetRow() const;
		void SetRow(int row);

		bool GetTwoWeapon() const;
		void SetTwoWeapon(bool two_weapon);

		bool GetLockEquipment() const;
		void SetLockEquipment(bool lock_equipment);

		bool GetAutoBattle() const;
		void SetAutoBattle(bool auto_battle);

		bool GetSuperGuard() const;
		void SetSuperGuard(bool super_guard);

		int GetBattlerAnimation() const;
		void SetBattlerAnimation(int battler_animation);

	};
}

#endif
