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

#ifndef LCF_RPG_ANIMATIONCELLDATA_H
#define LCF_RPG_ANIMATIONCELLDATA_H

// Headers
#include "rpg_base.h"

/**
 * RPG::AnimationCellData class.
 */
namespace RPG {
	class AnimationCellData : Base {
	public:
		AnimationCellData() {}
		AnimationCellData(rapidjson::Value& json_values);
		int ID = 0;
		int GetValid() const;
		void SetValid(int valid);

		int GetCellId() const;
		void SetCellId(int cell_id);

		int GetX() const;
		void SetX(int x);

		int GetY() const;
		void SetY(int y);

		int GetZoom() const;
		void SetZoom(int zoom);

		int GetToneRed() const;
		void SetToneRed(int tone_red);

		int GetToneGreen() const;
		void SetToneGreen(int tone_green);

		int GetToneBlue() const;
		void SetToneBlue(int tone_blue);

		int GetToneGray() const;
		void SetToneGray(int tone_gray);

		int GetTransparency() const;
		void SetTransparency(int transparency);

	};
}

#endif
