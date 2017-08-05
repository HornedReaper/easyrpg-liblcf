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

#ifndef LCF_RPG_ANIMATION_H
#define LCF_RPG_ANIMATION_H

// Headers
#include <string>
#include "lcf_vector.h"
#include "rpg_animationframe.h"
#include "rpg_animationtiming.h"

/**
 * RPG::Animation class.
 */
namespace RPG {
	class Animation {
	public:
		enum Scope {
			Scope_target = 0,
			Scope_screen = 1
		};
		enum Position {
			Position_up = 0,
			Position_middle = 1,
			Position_down = 2
		};

		int ID = 0;
		std::string name;
		std::string animation_name;
		int unknown_03 = -1;
		LcfVector<AnimationTiming> timings;
		int scope = 0;
		int position = 2;
		LcfVector<AnimationFrame> frames;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		const std::string& GetAnimationName() const;
		std::string& GetAnimationName();
		void SetAnimationName(const std::string& animation_name);

		int GetUnknown03() const;
		void SetUnknown03(int unknown_03);

		const LcfVector<AnimationTiming>& GetTimings() const;
		LcfVector<AnimationTiming>& GetTimings();
		void AddTimings(const AnimationTiming& animationtiming);
		AnimationTiming&

		int GetScope() const;
		void SetScope(int scope);

		int GetPosition() const;
		void SetPosition(int position);

		const LcfVector<AnimationFrame>& GetFrames() const;
		LcfVector<AnimationFrame>& GetFrames();
		void AddFrames(const AnimationFrame& animationframe);
		AnimationFrame&

	};
}

#endif
