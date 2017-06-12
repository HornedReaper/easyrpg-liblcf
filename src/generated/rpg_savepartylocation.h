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
#include "rpg_moveroute.h"

/**
 * RPG::SavePartyLocation class.
 */
namespace RPG {
	class SavePartyLocation {
	public:
		enum VehicleType {
			VehicleType_none = 0,
			VehicleType_skiff = 1,
			VehicleType_ship = 2,
			VehicleType_airship = 3
		};

		bool active = true;
		int map_id = -1;
		int position_x = -1;
		int position_y = -1;
		int direction = 2;
		int sprite_direction = 2;
		int anim_frame = 1;
		int transparency = 0;
		int remaining_step = 0;
		int move_frequency = 2;
		int layer = 1;
		bool overlap_forbidden = false;
		int animation_type = 1;
		bool lock_facing = false;
		int move_speed = 4;
		MoveRoute move_route;
		bool move_route_overwrite = false;
		int move_route_index = 0;
		bool move_route_repeated = false;
		bool sprite_transparent = false;
		int unknown_2f_overlap = 0;
		int anim_paused = 0;
		bool through = false;
		int stop_count = 0;
		int anim_count = 0;
		int max_stop_count = 0;
		bool jumping = false;
		int begin_jump_x = 0;
		int begin_jump_y = 0;
		int unknown_47_pause = 0;
		bool flying = false;
		std::string sprite_name;
		int sprite_id = 0;
		int unknown_4b_sprite_move = 0;
		int flash_red = 100;
		int flash_green = 100;
		int flash_blue = 100;
		double flash_current_level = 0.0;
		int flash_time_left = 0;
		bool boarding = false;
		bool aboard = false;
		int vehicle = 0;
		bool unboarding = false;
		int preboard_move_speed = 4;
		int unknown_6c_menu_calling = 0;
		int pan_state = 1;
		int pan_current_x = 2304;
		int pan_current_y = 1792;
		int pan_finish_x = 2304;
		int pan_finish_y = 1792;
		int pan_speed = 16;
		int encounter_steps = 0;
		bool unknown_7d_encounter_calling = false;
		int map_save_count = 0;
		int database_save_count = 0;
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
