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

#ifndef LCF_RPG_ANIMATIONTIMING_H
#define LCF_RPG_ANIMATIONTIMING_H

// Headers
#include "rpg_base.h"
#include "rpg_sound.h"

/**
 * RPG::AnimationTiming class.
 */
namespace RPG {
	class AnimationTiming : Base {
	public:
		enum FlashScope {
			FlashScope_nothing = 0,
			FlashScope_target = 1,
			FlashScope_screen = 2
		};
		enum ScreenShake {
			ScreenShake_nothing = 0,
			ScreenShake_target = 1,
			ScreenShake_screen = 2
		};

		AnimationTiming() {}
		AnimationTiming(rapidjson::Value& json_values);
		int ID = 0;
		int GetFrame() const;
		void SetFrame(int frame);

		const Sound& GetSe() const;
		Sound& GetSe();
		void SetSe(const Sound& se);

		int GetFlashScope() const;
		void SetFlashScope(int flash_scope);

		int GetFlashRed() const;
		void SetFlashRed(int flash_red);

		int GetFlashGreen() const;
		void SetFlashGreen(int flash_green);

		int GetFlashBlue() const;
		void SetFlashBlue(int flash_blue);

		int GetFlashPower() const;
		void SetFlashPower(int flash_power);

		int GetScreenShake() const;
		void SetScreenShake(int screen_shake);

	};
}

#endif
