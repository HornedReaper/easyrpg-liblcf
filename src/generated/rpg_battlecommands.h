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

#ifndef LCF_RPG_BATTLECOMMANDS_H
#define LCF_RPG_BATTLECOMMANDS_H

// Headers
#include <vector>
#include "rpg_base.h"
#include "rpg_battlecommand.h"

/**
 * RPG::BattleCommands class.
 */
namespace RPG {
	class BattleCommands : Base {
	public:
		enum Placement {
			Placement_manual = 0,
			Placement_automatic = 1
		};
		enum RowShown {
			RowShown_front = 0,
			RowShown_back = 1
		};
		enum BattleType {
			BattleType_traditional = 0,
			BattleType_alternative = 1,
			BattleType_gauge = 2
		};
		enum WindowSize {
			WindowSize_large = 0,
			WindowSize_small = 1
		};
		enum Transparency {
			Transparency_opaque = 0,
			Transparency_transparent = 1
		};
		enum Facing {
			Facing_retain = 0,
			Facing_up = 1,
			Facing_right = 2,
			Facing_down = 3,
			Facing_left = 4
		};

		BattleCommands() {}
		BattleCommands(rapidjson::Value& json_values);
		int GetPlacement() const;
		void SetPlacement(int placement);

		int GetDeathHandler1() const;
		void SetDeathHandler1(int death_handler1);

		int GetRow() const;
		void SetRow(int row);

		int GetBattleType() const;
		void SetBattleType(int battle_type);

		int GetUnknown09() const;
		void SetUnknown09(int unknown_09);

		const std::vector<BattleCommand>& GetCommands() const;
		std::vector<BattleCommand>& GetCommands();

		int GetDeathHandler2() const;
		void SetDeathHandler2(int death_handler2);

		int GetDeathEvent() const;
		void SetDeathEvent(int death_event);

		int GetWindowSize() const;
		void SetWindowSize(int window_size);

		int GetTransparency() const;
		void SetTransparency(int transparency);

		bool GetTeleport() const;
		void SetTeleport(bool teleport);

		int GetTeleportId() const;
		void SetTeleportId(int teleport_id);

		int GetTeleportX() const;
		void SetTeleportX(int teleport_x);

		int GetTeleportY() const;
		void SetTeleportY(int teleport_y);

		int GetTeleportFace() const;
		void SetTeleportFace(int teleport_face);

	};
}

#endif
