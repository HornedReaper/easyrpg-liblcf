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

#ifndef LCF_RPG_BATTLERANIMATION_H
#define LCF_RPG_BATTLERANIMATION_H

// Headers
#include <string>
#include <vector>
#include "rpg_battleranimationextension.h"

/**
 * RPG::BattlerAnimation class.
 */
namespace RPG {
	class BattlerAnimation {
	public:
		enum Speed {
			Speed_slow = 0,
			Speed_normal = 8,
			Speed_fast = 14
		};

		int ID = 0;
		std::string name;
		int speed = 0;
		std::vector<BattlerAnimationExtension> base_data;
		std::vector<BattlerAnimationExtension> weapon_data;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		int GetSpeed() const;
		void SetSpeed(int speed);

		const std::vector<BattlerAnimationExtension>& GetBaseData() const;
		std::vector<BattlerAnimationExtension>& GetBaseData();
		void SetBaseData(const std::vector<BattlerAnimationExtension>& base_data);

		const std::vector<BattlerAnimationExtension>& GetWeaponData() const;
		std::vector<BattlerAnimationExtension>& GetWeaponData();
		void SetWeaponData(const std::vector<BattlerAnimationExtension>& weapon_data);

	};
}

#endif
