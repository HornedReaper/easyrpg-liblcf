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
#include "lcf_vector.h"
#include "rpg_troopmember.h"
#include "rpg_trooppage.h"

/**
 * RPG::Troop class.
 */
namespace RPG {
	class Troop {
	public:
		int ID = 0;
		std::string name;
		LcfVector<TroopMember> members;
		bool auto_alignment = false;
		LcfVector<bool> terrain_set;
		bool appear_randomly = false;
		LcfVector<TroopPage> pages;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		const LcfVector<TroopMember>& GetMembers() const;
		LcfVector<TroopMember>& GetMembers();
		void AddMembers(const TroopMember& troopmember);
		TroopMember&

		bool GetAutoAlignment() const;
		void SetAutoAlignment(bool auto_alignment);


		const LcfVector<bool>& GetTerrainSet() const;
		LcfVector<bool>& GetTerrainSet();
		void AddTerrainSet(const bool& bool);
		bool&

		bool GetAppearRandomly() const;
		void SetAppearRandomly(bool appear_randomly);

		const LcfVector<TroopPage>& GetPages() const;
		LcfVector<TroopPage>& GetPages();
		void AddPages(const TroopPage& trooppage);
		TroopPage&

	};
}

#endif
