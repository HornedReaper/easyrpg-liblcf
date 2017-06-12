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

#ifndef LCF_RPG_EVENTPAGE_H
#define LCF_RPG_EVENTPAGE_H

// Headers
#include <string>
#include <vector>
#include "rpg_eventcommand.h"
#include "rpg_eventpagecondition.h"
#include "rpg_moveroute.h"

/**
 * RPG::EventPage class.
 */
namespace RPG {
	class EventPage {
	public:
		enum Direction {
			Direction_up = 0,
			Direction_right = 1,
			Direction_down = 2,
			Direction_left = 3
		};
		enum Frame {
			Frame_left = 0,
			Frame_middle = 1,
			Frame_right = 2
		};
		enum MoveType {
			MoveType_stationary = 0,
			MoveType_random = 1,
			MoveType_vertical = 2,
			MoveType_horizontal = 3,
			MoveType_toward = 4,
			MoveType_away = 5,
			MoveType_custom = 6
		};
		enum Trigger {
			Trigger_action = 0,
			Trigger_touched = 1,
			Trigger_collision = 2,
			Trigger_auto_start = 3,
			Trigger_parallel = 4
		};
		enum Layers {
			Layers_below = 0,
			Layers_same = 1,
			Layers_above = 2
		};
		enum AnimType {
			AnimType_non_continuous = 0,
			AnimType_continuous = 1,
			AnimType_fixed_non_continuous = 2,
			AnimType_fixed_continuous = 3,
			AnimType_fixed_graphic = 4,
			AnimType_spin = 5
		};
		enum MoveSpeed {
			MoveSpeed_eighth = 1,
			MoveSpeed_quarter = 2,
			MoveSpeed_half = 3,
			MoveSpeed_normal = 4,
			MoveSpeed_double = 5,
			MoveSpeed_fourfold = 6
		};

		int ID = 0;
		EventPageCondition condition;
		std::string character_name;
		int character_index = 0;
		int character_direction = 2;
		int character_pattern = 1;
		bool translucent = false;
		int move_type = 1;
		int move_frequency = 3;
		int trigger = 0;
		int layer = 0;
		bool overlap_forbidden = false;
		int animation_type = 0;
		int move_speed = 3;
		MoveRoute move_route;
		std::vector<EventCommand> event_commands;
		const EventPageCondition& GetCondition() const;
		EventPageCondition& GetCondition();
		void SetCondition(const EventPageCondition& condition);

		const std::string& GetCharacterName() const;
		std::string& GetCharacterName();
		void SetCharacterName(const std::string& character_name);

		int GetCharacterIndex() const;
		void SetCharacterIndex(int character_index);

		int GetCharacterDirection() const;
		void SetCharacterDirection(int character_direction);

		int GetCharacterPattern() const;
		void SetCharacterPattern(int character_pattern);

		bool GetTranslucent() const;
		void SetTranslucent(bool translucent);

		int GetMoveType() const;
		void SetMoveType(int move_type);

		int GetMoveFrequency() const;
		void SetMoveFrequency(int move_frequency);

		int GetTrigger() const;
		void SetTrigger(int trigger);

		int GetLayer() const;
		void SetLayer(int layer);

		bool GetOverlapForbidden() const;
		void SetOverlapForbidden(bool overlap_forbidden);

		int GetAnimationType() const;
		void SetAnimationType(int animation_type);

		int GetMoveSpeed() const;
		void SetMoveSpeed(int move_speed);

		const MoveRoute& GetMoveRoute() const;
		MoveRoute& GetMoveRoute();
		void SetMoveRoute(const MoveRoute& move_route);


		const std::vector<EventCommand>& GetEventCommands() const;
		std::vector<EventCommand>& GetEventCommands();
		void SetEventCommands(const std::vector<EventCommand>& event_commands);

	};
}

#endif
