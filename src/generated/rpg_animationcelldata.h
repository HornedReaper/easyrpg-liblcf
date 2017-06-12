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

/**
 * RPG::AnimationCellData class.
 */
namespace RPG {
	class AnimationCellData {
	public:
		int ID = 0;
		int valid = 1;
		int cell_id = 0;
		int x = 0;
		int y = 0;
		int zoom = 100;
		int tone_red = 100;
		int tone_green = 100;
		int tone_blue = 100;
		int tone_gray = 100;
		int transparency = 0;
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
