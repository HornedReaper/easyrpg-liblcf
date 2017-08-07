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

#ifndef LCF_RPG_BATTLERANIMATIONDATA_H
#define LCF_RPG_BATTLERANIMATIONDATA_H

// Headers
#include "rpg_base.h"

/**
 * RPG::BattlerAnimationData class.
 */
namespace RPG {
	class BattlerAnimationData : Base {
	public:
		enum Movement {
			Movement_none = 0,
			Movement_step = 1,
			Movement_jump = 2,
			Movement_move = 3
		};
		enum AfterImage {
			AfterImage_none = 0,
			AfterImage_add = 1
		};

		BattlerAnimationData() {}
		BattlerAnimationData(rapidjson::Value& json_values);
		int ID = 0;
		int move = 0;
		int after_image = 0;
		int pose = 0;
		int GetMove() const;
		void SetMove(int move);

		int GetAfterImage() const;
		void SetAfterImage(int after_image);

		int GetPose() const;
		void SetPose(int pose);

	};
}

#endif
