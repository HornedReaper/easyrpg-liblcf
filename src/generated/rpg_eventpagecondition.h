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

#ifndef LCF_RPG_EVENTPAGECONDITION_H
#define LCF_RPG_EVENTPAGECONDITION_H

// Headers
#include "rpg_base.h"

/**
 * RPG::EventPageCondition class.
 */
namespace RPG {
	class EventPageCondition : Base {
	public:
		enum Comparison {
			Comparison_equal = 0,
			Comparison_greater_equal = 1,
			Comparison_less_equal = 2,
			Comparison_greater = 3,
			Comparison_less = 4,
			Comparison_not_equal = 5
		};

		EventPageCondition() {}
		EventPageCondition(rapidjson::Value& json_values);
		struct Flags : Flags_Base {
			bool switch_a;
			bool switch_b;
			bool variable;
			bool item;
			bool actor;
			bool timer;
			bool timer2;
		} flags;
		const EventPageCondition::Flags& GetFlags() const;
		EventPageCondition::Flags& GetFlags();
		void SetFlags(const EventPageCondition::Flags& flags);

		int GetSwitchAId() const;
		void SetSwitchAId(int switch_a_id);

		int GetSwitchBId() const;
		void SetSwitchBId(int switch_b_id);

		int GetVariableId() const;
		void SetVariableId(int variable_id);

		int GetVariableValue() const;
		void SetVariableValue(int variable_value);

		int GetItemId() const;
		void SetItemId(int item_id);

		int GetActorId() const;
		void SetActorId(int actor_id);

		int GetTimerSec() const;
		void SetTimerSec(int timer_sec);

		int GetTimer2Sec() const;
		void SetTimer2Sec(int timer2_sec);

		int GetCompareOperator() const;
		void SetCompareOperator(int compare_operator);

	};
}

#endif
