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

#ifndef LCF_RPG_STATE_H
#define LCF_RPG_STATE_H

// Headers
#include <string>

/**
 * RPG::State class.
 */
namespace RPG {
	class State {
	public:
		enum Persistence {
			Persistence_ends = 0,
			Persistence_persists = 1
		};
		enum Restriction {
			Restriction_normal = 0,
			Restriction_do_nothing = 1,
			Restriction_attack_enemy = 2,
			Restriction_attack_ally = 3
		};
		enum AffectType {
			AffectType_half = 0,
			AffectType_double = 1,
			AffectType_nothing = 2
		};
		enum ChangeType {
			ChangeType_lose = 0,
			ChangeType_gain = 1,
			ChangeType_nothing = 2
		};

		int ID = 0;
		std::string name;
		int type = 0;
		int color = 6;
		int priority = 50;
		int restriction = 0;
		int a_rate = 100;
		int b_rate = 80;
		int c_rate = 60;
		int d_rate = 30;
		int e_rate = 0;
		int hold_turn = 0;
		int auto_release_prob = 0;
		int release_by_damage = 0;
		int affect_type = 0;
		bool affect_attack = false;
		bool affect_defense = false;
		bool affect_spirit = false;
		bool affect_agility = false;
		int reduce_hit_ratio = 100;
		bool avoid_attacks = false;
		bool reflect_magic = false;
		bool cursed = false;
		int battler_animation_id = 100;
		bool restrict_skill = false;
		int restrict_skill_level = 0;
		bool restrict_magic = false;
		int restrict_magic_level = 0;
		int hp_change_type = 0;
		int sp_change_type = 0;
		std::string message_actor;
		std::string message_enemy;
		std::string message_already;
		std::string message_affected;
		std::string message_recovery;
		int hp_change_max = 0;
		int hp_change_val = 0;
		int hp_change_map_val = 0;
		int hp_change_map_steps = 0;
		int sp_change_max = 0;
		int sp_change_val = 0;
		int sp_change_map_val = 0;
		int sp_change_map_steps = 0;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		int GetType() const;
		void SetType(int type);

		int GetColor() const;
		void SetColor(int color);

		int GetPriority() const;
		void SetPriority(int priority);

		int GetRestriction() const;
		void SetRestriction(int restriction);

		int GetARate() const;
		void SetARate(int a_rate);

		int GetBRate() const;
		void SetBRate(int b_rate);

		int GetCRate() const;
		void SetCRate(int c_rate);

		int GetDRate() const;
		void SetDRate(int d_rate);

		int GetERate() const;
		void SetERate(int e_rate);

		int GetHoldTurn() const;
		void SetHoldTurn(int hold_turn);

		int GetAutoReleaseProb() const;
		void SetAutoReleaseProb(int auto_release_prob);

		int GetReleaseByDamage() const;
		void SetReleaseByDamage(int release_by_damage);

		int GetAffectType() const;
		void SetAffectType(int affect_type);

		bool GetAffectAttack() const;
		void SetAffectAttack(bool affect_attack);

		bool GetAffectDefense() const;
		void SetAffectDefense(bool affect_defense);

		bool GetAffectSpirit() const;
		void SetAffectSpirit(bool affect_spirit);

		bool GetAffectAgility() const;
		void SetAffectAgility(bool affect_agility);

		int GetReduceHitRatio() const;
		void SetReduceHitRatio(int reduce_hit_ratio);

		bool GetAvoidAttacks() const;
		void SetAvoidAttacks(bool avoid_attacks);

		bool GetReflectMagic() const;
		void SetReflectMagic(bool reflect_magic);

		bool GetCursed() const;
		void SetCursed(bool cursed);

		int GetBattlerAnimationId() const;
		void SetBattlerAnimationId(int battler_animation_id);

		bool GetRestrictSkill() const;
		void SetRestrictSkill(bool restrict_skill);

		int GetRestrictSkillLevel() const;
		void SetRestrictSkillLevel(int restrict_skill_level);

		bool GetRestrictMagic() const;
		void SetRestrictMagic(bool restrict_magic);

		int GetRestrictMagicLevel() const;
		void SetRestrictMagicLevel(int restrict_magic_level);

		int GetHpChangeType() const;
		void SetHpChangeType(int hp_change_type);

		int GetSpChangeType() const;
		void SetSpChangeType(int sp_change_type);

		const std::string& GetMessageActor() const;
		std::string& GetMessageActor();
		void SetMessageActor(const std::string& message_actor);

		const std::string& GetMessageEnemy() const;
		std::string& GetMessageEnemy();
		void SetMessageEnemy(const std::string& message_enemy);

		const std::string& GetMessageAlready() const;
		std::string& GetMessageAlready();
		void SetMessageAlready(const std::string& message_already);

		const std::string& GetMessageAffected() const;
		std::string& GetMessageAffected();
		void SetMessageAffected(const std::string& message_affected);

		const std::string& GetMessageRecovery() const;
		std::string& GetMessageRecovery();
		void SetMessageRecovery(const std::string& message_recovery);

		int GetHpChangeMax() const;
		void SetHpChangeMax(int hp_change_max);

		int GetHpChangeVal() const;
		void SetHpChangeVal(int hp_change_val);

		int GetHpChangeMapVal() const;
		void SetHpChangeMapVal(int hp_change_map_val);

		int GetHpChangeMapSteps() const;
		void SetHpChangeMapSteps(int hp_change_map_steps);

		int GetSpChangeMax() const;
		void SetSpChangeMax(int sp_change_max);

		int GetSpChangeVal() const;
		void SetSpChangeVal(int sp_change_val);

		int GetSpChangeMapVal() const;
		void SetSpChangeMapVal(int sp_change_map_val);

		int GetSpChangeMapSteps() const;
		void SetSpChangeMapSteps(int sp_change_map_steps);

	};
}

#endif
