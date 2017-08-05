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

#ifndef LCF_RPG_ANIMATIONFRAME_H
#define LCF_RPG_ANIMATIONFRAME_H

// Headers
#include "lcf_vector.h"
#include "rpg_animationcelldata.h"

/**
 * RPG::AnimationFrame class.
 */
namespace RPG {
	class AnimationFrame {
	public:
		int ID = 0;
		LcfVector<AnimationCellData> cells;
		const LcfVector<AnimationCellData>& GetCells() const;
		LcfVector<AnimationCellData>& GetCells();
		void AddCells(const AnimationCellData& animationcelldata);
		AnimationCellData&

	};
}

#endif
