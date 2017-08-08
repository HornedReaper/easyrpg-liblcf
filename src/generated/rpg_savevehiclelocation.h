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

#ifndef LCF_RPG_SAVEVEHICLELOCATION_H
#define LCF_RPG_SAVEVEHICLELOCATION_H

// Headers
#include <string>
#include "rpg_base.h"
#include "rpg_moveroute.h"

/**
 * RPG::SaveVehicleLocation class.
 */
namespace RPG {
	class SaveVehicleLocation : Base {
	public:
		SaveVehicleLocation() {}
		SaveVehicleLocation(rapidjson::Value& json_values);
		bool GetActive() const;
		void SetActive(bool active);

		int GetMapId() const;
		void SetMapId(int map_id);

		int GetPositionX() const;
		void SetPositionX(int position_x);

		int GetPositionY() const;
		void SetPositionY(int position_y);

		int GetDirection() const;
		void SetDirection(int direction);

		int GetSpriteDirection() const;
		void SetSpriteDirection(int sprite_direction);

		int GetAnimFrame() const;
		void SetAnimFrame(int anim_frame);

		int GetTransparency() const;
		void SetTransparency(int transparency);

		int GetRemainingStep() const;
		void SetRemainingStep(int remaining_step);

		int GetMoveFrequency() const;
		void SetMoveFrequency(int move_frequency);

		int GetLayer() const;
		void SetLayer(int layer);

		bool GetOverlapForbidden() const;
		void SetOverlapForbidden(bool overlap_forbidden);

		int GetAnimationType() const;
		void SetAnimationType(int animation_type);

		bool GetLockFacing() const;
		void SetLockFacing(bool lock_facing);

		int GetMoveSpeed() const;
		void SetMoveSpeed(int move_speed);

		const MoveRoute& GetMoveRoute() const;
		MoveRoute& GetMoveRoute();
		void SetMoveRoute(const MoveRoute& move_route);

		bool GetMoveRouteOverwrite() const;
		void SetMoveRouteOverwrite(bool move_route_overwrite);

		int GetMoveRouteIndex() const;
		void SetMoveRouteIndex(int move_route_index);

		bool GetMoveRouteRepeated() const;
		void SetMoveRouteRepeated(bool move_route_repeated);

		int GetAnimPaused() const;
		void SetAnimPaused(int anim_paused);

		bool GetThrough() const;
		void SetThrough(bool through);

		int GetStopCount() const;
		void SetStopCount(int stop_count);

		int GetAnimCount() const;
		void SetAnimCount(int anim_count);

		int GetMaxStopCount() const;
		void SetMaxStopCount(int max_stop_count);

		bool GetJumping() const;
		void SetJumping(bool jumping);

		int GetBeginJumpX() const;
		void SetBeginJumpX(int begin_jump_x);

		int GetBeginJumpY() const;
		void SetBeginJumpY(int begin_jump_y);

		int GetUnknown47Pause() const;
		void SetUnknown47Pause(int unknown_47_pause);

		bool GetFlying() const;
		void SetFlying(bool flying);

		const std::string& GetSpriteName() const;
		std::string& GetSpriteName();
		void SetSpriteName(const std::string& sprite_name);

		int GetSpriteId() const;
		void SetSpriteId(int sprite_id);

		int GetUnknown4bSpriteMove() const;
		void SetUnknown4bSpriteMove(int unknown_4b_sprite_move);

		int GetFlashRed() const;
		void SetFlashRed(int flash_red);

		int GetFlashGreen() const;
		void SetFlashGreen(int flash_green);

		int GetFlashBlue() const;
		void SetFlashBlue(int flash_blue);

		double GetFlashCurrentLevel() const;
		void SetFlashCurrentLevel(double flash_current_level);

		int GetFlashTimeLeft() const;
		void SetFlashTimeLeft(int flash_time_left);

		int GetVehicle() const;
		void SetVehicle(int vehicle);

		int GetOriginalMoveRouteIndex() const;
		void SetOriginalMoveRouteIndex(int original_move_route_index);

		int GetRemainingAscent() const;
		void SetRemainingAscent(int remaining_ascent);

		int GetRemainingDescent() const;
		void SetRemainingDescent(int remaining_descent);

		const std::string& GetSprite2Name() const;
		std::string& GetSprite2Name();
		void SetSprite2Name(const std::string& sprite2_name);

		int GetSprite2Id() const;
		void SetSprite2Id(int sprite2_id);

	};
}

#endif
