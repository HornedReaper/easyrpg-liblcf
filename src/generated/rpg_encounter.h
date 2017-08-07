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

#ifndef LCF_RPG_ENCOUNTER_H
#define LCF_RPG_ENCOUNTER_H

// Headers
#include "rpg_base.h"

/**
 * RPG::Encounter class.
 */
namespace RPG {
	class Encounter : Base {
	public:
		Encounter() {}
		Encounter(rapidjson::Value& json_values);
		int ID = 0;
		int troop_id = 0;
		int GetTroopId() const;
		void SetTroopId(int troop_id);

	};
}

#endif
