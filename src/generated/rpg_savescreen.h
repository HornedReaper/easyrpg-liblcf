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

#ifndef LCF_RPG_SAVESCREEN_H
#define LCF_RPG_SAVESCREEN_H

// Headers
#include "rpg_base.h"

/**
 * RPG::SaveScreen class.
 */
namespace RPG {
	class SaveScreen : Base {
	public:
		SaveScreen() {}
		SaveScreen(rapidjson::Value& json_values);
		int tint_finish_red = 100;
		int tint_finish_green = 100;
		int tint_finish_blue = 100;
		int tint_finish_sat = 100;
		double tint_current_red = 100.0;
		double tint_current_green = 100.0;
		double tint_current_blue = 100.0;
		double tint_current_sat = 100.0;
		int tint_time_left = 0;
		bool flash_continuous = false;
		int flash_red = 0;
		int flash_green = 0;
		int flash_blue = 0;
		double flash_current_level = 0.0;
		int flash_time_left = 0;
		bool shake_continuous = false;
		int shake_strength = 0;
		int shake_speed = 0;
		int shake_position = 0;
		int shake_position_y = 0;
		int shake_time_left = 0;
		int pan_x = 0;
		int pan_y = 0;
		int battleanim_id = 0;
		int battleanim_target = 0;
		int battleanim_frame = 0;
		int unknown_2e_battleanim_active = 0;
		bool battleanim_global = false;
		int weather = 0;
		int weather_strength = 0;
		int GetTintFinishRed() const;
		void SetTintFinishRed(int tint_finish_red);

		int GetTintFinishGreen() const;
		void SetTintFinishGreen(int tint_finish_green);

		int GetTintFinishBlue() const;
		void SetTintFinishBlue(int tint_finish_blue);

		int GetTintFinishSat() const;
		void SetTintFinishSat(int tint_finish_sat);

		double GetTintCurrentRed() const;
		void SetTintCurrentRed(double tint_current_red);

		double GetTintCurrentGreen() const;
		void SetTintCurrentGreen(double tint_current_green);

		double GetTintCurrentBlue() const;
		void SetTintCurrentBlue(double tint_current_blue);

		double GetTintCurrentSat() const;
		void SetTintCurrentSat(double tint_current_sat);

		int GetTintTimeLeft() const;
		void SetTintTimeLeft(int tint_time_left);

		bool GetFlashContinuous() const;
		void SetFlashContinuous(bool flash_continuous);

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

		bool GetShakeContinuous() const;
		void SetShakeContinuous(bool shake_continuous);

		int GetShakeStrength() const;
		void SetShakeStrength(int shake_strength);

		int GetShakeSpeed() const;
		void SetShakeSpeed(int shake_speed);

		int GetShakePosition() const;
		void SetShakePosition(int shake_position);

		int GetShakePositionY() const;
		void SetShakePositionY(int shake_position_y);

		int GetShakeTimeLeft() const;
		void SetShakeTimeLeft(int shake_time_left);

		int GetPanX() const;
		void SetPanX(int pan_x);

		int GetPanY() const;
		void SetPanY(int pan_y);

		int GetBattleanimId() const;
		void SetBattleanimId(int battleanim_id);

		int GetBattleanimTarget() const;
		void SetBattleanimTarget(int battleanim_target);

		int GetBattleanimFrame() const;
		void SetBattleanimFrame(int battleanim_frame);

		int GetUnknown2eBattleanimActive() const;
		void SetUnknown2eBattleanimActive(int unknown_2e_battleanim_active);

		bool GetBattleanimGlobal() const;
		void SetBattleanimGlobal(bool battleanim_global);

		int GetWeather() const;
		void SetWeather(int weather);

		int GetWeatherStrength() const;
		void SetWeatherStrength(int weather_strength);

	};
}

#endif
