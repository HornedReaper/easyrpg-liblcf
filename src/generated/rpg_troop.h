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

#ifndef LCF_RPG_TROOP_H
#define LCF_RPG_TROOP_H

// Headers
#include <string>
#include <vector>
#include "rpg_base.h"
#include "rpg_troopmember.h"
#include "rpg_trooppage.h"

/**
 * RPG::Troop class.
 */
namespace RPG {
	class Troop : Base {
	public:
		Troop() {}
		Troop(rapidjson::Value& json_values);
		int ID = 0;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		const std::vector<TroopMember>& GetMembers() const;
		std::vector<TroopMember>& GetMembers();

		bool GetAutoAlignment() const;
		void SetAutoAlignment(bool auto_alignment);


		const std::vector<bool>& GetTerrainSet() const;
		std::vector<bool>& GetTerrainSet();

		bool GetAppearRandomly() const;
		void SetAppearRandomly(bool appear_randomly);

		const std::vector<TroopPage>& GetPages() const;
		std::vector<TroopPage>& GetPages();

	};
}

#endif
