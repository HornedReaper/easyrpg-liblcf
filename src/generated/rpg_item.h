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

#ifndef LCF_RPG_ITEM_H
#define LCF_RPG_ITEM_H

// Headers
#include <string>
#include <vector>
#include "rpg_itemanimation.h"

/**
 * RPG::Item class.
 */
namespace RPG {
	class Item {
	public:
		enum Type {
			Type_normal = 0,
			Type_weapon = 1,
			Type_shield = 2,
			Type_armor = 3,
			Type_helmet = 4,
			Type_accessory = 5,
			Type_medicine = 6,
			Type_book = 7,
			Type_material = 8,
			Type_special = 9,
			Type_switch = 10
		};
		enum Trajectory {
			Trajectory_straight = 0,
			Trajectory_return = 1
		};
		enum Target {
			Target_single = 0,
			Target_center = 1,
			Target_simultaneous = 2,
			Target_sequential = 3
		};

		int ID = 0;
		std::string name;
		std::string description;
		int type = 0;
		int price = 0;
		int uses = 1;
		int atk_points1 = 0;
		int def_points1 = 0;
		int spi_points1 = 0;
		int agi_points1 = 0;
		bool two_handed = false;
		int sp_cost = 0;
		int hit = 90;
		int critical_hit = 0;
		int animation_id = 1;
		bool preemptive = false;
		bool dual_attack = false;
		bool attack_all = false;
		bool ignore_evasion = false;
		bool prevent_critical = false;
		bool raise_evasion = false;
		bool half_sp_cost = false;
		bool no_terrain_damage = false;
		bool cursed = false;
		bool entire_party = false;
		int recover_hp_rate = 0;
		int recover_hp = 0;
		int recover_sp_rate = 0;
		int recover_sp = 0;
		bool occasion_field1 = false;
		bool ko_only = false;
		int max_hp_points = 0;
		int max_sp_points = 0;
		int atk_points2 = 0;
		int def_points2 = 0;
		int spi_points2 = 0;
		int agi_points2 = 0;
		int using_message = 0;
		int skill_id = 1;
		int switch_id = 1;
		bool occasion_field2 = true;
		bool occasion_battle = false;
		std::vector<bool> actor_set;
		std::vector<bool> state_set;
		std::vector<bool> attribute_set;
		int state_chance = 0;
		bool state_effect = false;
		int weapon_animation = 1;
		std::vector<ItemAnimation> animation_data;
		bool use_skill = false;
		std::vector<bool> class_set;
		int ranged_trajectory = 0;
		int ranged_target = 0;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		const std::string& GetDescription() const;
		std::string& GetDescription();
		void SetDescription(const std::string& description);

		int GetType() const;
		void SetType(int type);

		int GetPrice() const;
		void SetPrice(int price);

		int GetUses() const;
		void SetUses(int uses);

		int GetAtkPoints1() const;
		void SetAtkPoints1(int atk_points1);

		int GetDefPoints1() const;
		void SetDefPoints1(int def_points1);

		int GetSpiPoints1() const;
		void SetSpiPoints1(int spi_points1);

		int GetAgiPoints1() const;
		void SetAgiPoints1(int agi_points1);

		bool GetTwoHanded() const;
		void SetTwoHanded(bool two_handed);

		int GetSpCost() const;
		void SetSpCost(int sp_cost);

		int GetHit() const;
		void SetHit(int hit);

		int GetCriticalHit() const;
		void SetCriticalHit(int critical_hit);

		int GetAnimationId() const;
		void SetAnimationId(int animation_id);

		bool GetPreemptive() const;
		void SetPreemptive(bool preemptive);

		bool GetDualAttack() const;
		void SetDualAttack(bool dual_attack);

		bool GetAttackAll() const;
		void SetAttackAll(bool attack_all);

		bool GetIgnoreEvasion() const;
		void SetIgnoreEvasion(bool ignore_evasion);

		bool GetPreventCritical() const;
		void SetPreventCritical(bool prevent_critical);

		bool GetRaiseEvasion() const;
		void SetRaiseEvasion(bool raise_evasion);

		bool GetHalfSpCost() const;
		void SetHalfSpCost(bool half_sp_cost);

		bool GetNoTerrainDamage() const;
		void SetNoTerrainDamage(bool no_terrain_damage);

		bool GetCursed() const;
		void SetCursed(bool cursed);

		bool GetEntireParty() const;
		void SetEntireParty(bool entire_party);

		int GetRecoverHpRate() const;
		void SetRecoverHpRate(int recover_hp_rate);

		int GetRecoverHp() const;
		void SetRecoverHp(int recover_hp);

		int GetRecoverSpRate() const;
		void SetRecoverSpRate(int recover_sp_rate);

		int GetRecoverSp() const;
		void SetRecoverSp(int recover_sp);

		bool GetOccasionField1() const;
		void SetOccasionField1(bool occasion_field1);

		bool GetKoOnly() const;
		void SetKoOnly(bool ko_only);

		int GetMaxHpPoints() const;
		void SetMaxHpPoints(int max_hp_points);

		int GetMaxSpPoints() const;
		void SetMaxSpPoints(int max_sp_points);

		int GetAtkPoints2() const;
		void SetAtkPoints2(int atk_points2);

		int GetDefPoints2() const;
		void SetDefPoints2(int def_points2);

		int GetSpiPoints2() const;
		void SetSpiPoints2(int spi_points2);

		int GetAgiPoints2() const;
		void SetAgiPoints2(int agi_points2);

		int GetUsingMessage() const;
		void SetUsingMessage(int using_message);

		int GetSkillId() const;
		void SetSkillId(int skill_id);

		int GetSwitchId() const;
		void SetSwitchId(int switch_id);

		bool GetOccasionField2() const;
		void SetOccasionField2(bool occasion_field2);

		bool GetOccasionBattle() const;
		void SetOccasionBattle(bool occasion_battle);


		const std::vector<bool>& GetActorSet() const;
		std::vector<bool>& GetActorSet();
		void SetActorSet(const std::vector<bool>& actor_set);


		const std::vector<bool>& GetStateSet() const;
		std::vector<bool>& GetStateSet();
		void SetStateSet(const std::vector<bool>& state_set);


		const std::vector<bool>& GetAttributeSet() const;
		std::vector<bool>& GetAttributeSet();
		void SetAttributeSet(const std::vector<bool>& attribute_set);

		int GetStateChance() const;
		void SetStateChance(int state_chance);

		bool GetStateEffect() const;
		void SetStateEffect(bool state_effect);

		int GetWeaponAnimation() const;
		void SetWeaponAnimation(int weapon_animation);

		const std::vector<ItemAnimation>& GetAnimationData() const;
		std::vector<ItemAnimation>& GetAnimationData();
		void SetAnimationData(const std::vector<ItemAnimation>& animation_data);

		bool GetUseSkill() const;
		void SetUseSkill(bool use_skill);


		const std::vector<bool>& GetClassSet() const;
		std::vector<bool>& GetClassSet();
		void SetClassSet(const std::vector<bool>& class_set);

		int GetRangedTrajectory() const;
		void SetRangedTrajectory(int ranged_trajectory);

		int GetRangedTarget() const;
		void SetRangedTarget(int ranged_target);

	};
}

#endif
