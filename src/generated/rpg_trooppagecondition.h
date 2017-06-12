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

#ifndef LCF_RPG_TROOPPAGECONDITION_H
#define LCF_RPG_TROOPPAGECONDITION_H

/**
 * RPG::TroopPageCondition class.
 */
namespace RPG {
	class TroopPageCondition {
	public:
		struct Flags {
			bool switch_a;
			bool switch_b;
			bool variable;
			bool turn;
			bool fatigue;
			bool enemy_hp;
			bool actor_hp;
			bool turn_enemy;
			bool turn_actor;
			bool command_actor;
		} flags;
		int switch_a_id = 1;
		int switch_b_id = 1;
		int variable_id = 1;
		int variable_value = 0;
		int turn_a = 0;
		int turn_b = 0;
		int fatigue_min = 0;
		int fatigue_max = 100;
		int enemy_id = 0;
		int enemy_hp_min = 0;
		int enemy_hp_max = 100;
		int actor_id = 1;
		int actor_hp_min = 0;
		int actor_hp_max = 100;
		int turn_enemy_id = 0;
		int turn_enemy_a = 0;
		int turn_enemy_b = 0;
		int turn_actor_id = 1;
		int turn_actor_a = 0;
		int turn_actor_b = 0;
		int command_actor_id = 1;
		int command_id = 1;
        const Flags& GetFlags() const;
        Flags& GetFlags();
        void SetFlags(const Flags& flags);

        int GetSwitchAId() const;
        void SetSwitchAId(int switch_a_id);

        int GetSwitchBId() const;
        void SetSwitchBId(int switch_b_id);

        int GetVariableId() const;
        void SetVariableId(int variable_id);

        int GetVariableValue() const;
        void SetVariableValue(int variable_value);

        int GetTurnA() const;
        void SetTurnA(int turn_a);

        int GetTurnB() const;
        void SetTurnB(int turn_b);

        int GetFatigueMin() const;
        void SetFatigueMin(int fatigue_min);

        int GetFatigueMax() const;
        void SetFatigueMax(int fatigue_max);

        int GetEnemyId() const;
        void SetEnemyId(int enemy_id);

        int GetEnemyHpMin() const;
        void SetEnemyHpMin(int enemy_hp_min);

        int GetEnemyHpMax() const;
        void SetEnemyHpMax(int enemy_hp_max);

        int GetActorId() const;
        void SetActorId(int actor_id);

        int GetActorHpMin() const;
        void SetActorHpMin(int actor_hp_min);

        int GetActorHpMax() const;
        void SetActorHpMax(int actor_hp_max);

        int GetTurnEnemyId() const;
        void SetTurnEnemyId(int turn_enemy_id);

        int GetTurnEnemyA() const;
        void SetTurnEnemyA(int turn_enemy_a);

        int GetTurnEnemyB() const;
        void SetTurnEnemyB(int turn_enemy_b);

        int GetTurnActorId() const;
        void SetTurnActorId(int turn_actor_id);

        int GetTurnActorA() const;
        void SetTurnActorA(int turn_actor_a);

        int GetTurnActorB() const;
        void SetTurnActorB(int turn_actor_b);

        int GetCommandActorId() const;
        void SetCommandActorId(int command_actor_id);

        int GetCommandId() const;
        void SetCommandId(int command_id);

	};
}

#endif
