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

#ifndef LCF_RPG_SAVEPARTYLOCATION_H
#define LCF_RPG_SAVEPARTYLOCATION_H

// Headers
#include <string>
#include "rpg_base.h"
#include "rpg_moveroute.h"

/**
 * RPG::SavePartyLocation class.
 */
namespace RPG {
	class SavePartyLocation : Base {
	public:
		enum VehicleType {
			VehicleType_none = 0,
			VehicleType_skiff = 1,
			VehicleType_ship = 2,
			VehicleType_airship = 3
		};

		SavePartyLocation() {}
		SavePartyLocation(rapidjson::Value& json_values);
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

		bool GetSpriteTransparent() const;
		void SetSpriteTransparent(bool sprite_transparent);

		int GetUnknown2fOverlap() const;
		void SetUnknown2fOverlap(int unknown_2f_overlap);

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

		bool GetBoarding() const;
		void SetBoarding(bool boarding);

		bool GetAboard() const;
		void SetAboard(bool aboard);

		int GetVehicle() const;
		void SetVehicle(int vehicle);

		bool GetUnboarding() const;
		void SetUnboarding(bool unboarding);

		int GetPreboardMoveSpeed() const;
		void SetPreboardMoveSpeed(int preboard_move_speed);

		int GetUnknown6cMenuCalling() const;
		void SetUnknown6cMenuCalling(int unknown_6c_menu_calling);

		int GetPanState() const;
		void SetPanState(int pan_state);

		int GetPanCurrentX() const;
		void SetPanCurrentX(int pan_current_x);

		int GetPanCurrentY() const;
		void SetPanCurrentY(int pan_current_y);

		int GetPanFinishX() const;
		void SetPanFinishX(int pan_finish_x);

		int GetPanFinishY() const;
		void SetPanFinishY(int pan_finish_y);

		int GetPanSpeed() const;
		void SetPanSpeed(int pan_speed);

		int GetEncounterSteps() const;
		void SetEncounterSteps(int encounter_steps);

		bool GetUnknown7dEncounterCalling() const;
		void SetUnknown7dEncounterCalling(bool unknown_7d_encounter_calling);

		int GetMapSaveCount() const;
		void SetMapSaveCount(int map_save_count);

		int GetDatabaseSaveCount() const;
		void SetDatabaseSaveCount(int database_save_count);

	};
}

#endif
