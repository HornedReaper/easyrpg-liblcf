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

#ifndef LCF_RPG_TESTBATTLER_H
#define LCF_RPG_TESTBATTLER_H

/**
 * RPG::TestBattler class.
 */
namespace RPG {
	class TestBattler {
	public:
		int ID = 0;
		int actor_id = 1;
		int level = 1;
		int weapon_id = 0;
		int shield_id = 0;
		int armor_id = 0;
		int helmet_id = 0;
		int accessory_id = 0;
		int GetActorId() const;
		void SetActorId(int actor_id);

		int GetLevel() const;
		void SetLevel(int level);

		int GetWeaponId() const;
		void SetWeaponId(int weapon_id);

		int GetShieldId() const;
		void SetShieldId(int shield_id);

		int GetArmorId() const;
		void SetArmorId(int armor_id);

		int GetHelmetId() const;
		void SetHelmetId(int helmet_id);

		int GetAccessoryId() const;
		void SetAccessoryId(int accessory_id);

	};
}

#endif
