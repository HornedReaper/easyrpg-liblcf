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

#ifndef LCF_RPG_SAVEMAPEVENT_H
#define LCF_RPG_SAVEMAPEVENT_H

// Headers
#include <string>
#include "rpg_base.h"
#include "rpg_event.h"
#include "rpg_moveroute.h"
#include "rpg_saveeventdata.h"

/**
 * RPG::SaveMapEvent class.
 */
namespace RPG {
	class SaveMapEvent : Base {
	public:
		SaveMapEvent() {}
		SaveMapEvent(rapidjson::Value& json_values);
		void Setup(const RPG::Event& event);
		void Fixup(const RPG::EventPage& page);
		int ID = 0;
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
		int move_speed = -1;
		MoveRoute move_route;
		bool move_route_overwrite = false;
		int move_route_index = 0;
		bool move_route_repeated = false;
		int unknown_2f_overlap = -1;
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
		int sprite_id = -1;
		int unknown_4b_sprite_move = -1;
		int flash_red = 100;
		int flash_green = 100;
		int flash_blue = 100;
		double flash_current_level = 0.0;
		int flash_time_left = 0;
		bool running = false;
		int original_move_route_index = 0;
		bool pending = false;
		SaveEventData event_data;
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

		bool GetRunning() const;
		void SetRunning(bool running);

		int GetOriginalMoveRouteIndex() const;
		void SetOriginalMoveRouteIndex(int original_move_route_index);

		bool GetPending() const;
		void SetPending(bool pending);

		const SaveEventData& GetEventData() const;
		SaveEventData& GetEventData();
		void SetEventData(const SaveEventData& event_data);

	};
}

#endif
