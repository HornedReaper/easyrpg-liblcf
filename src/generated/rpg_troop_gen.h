/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2015 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_TROOP_GEN_H
#define LCF_RPG_TROOP_GEN_H

// Headers
#include <string>
#include <vector>
#include "rpg_troopmember.h"
#include "rpg_trooppage.h"

/**
 * RPG::Troop class.
 */
namespace RPG {
	class Troop_Gen {
	public:
		int ID = 0;
		std::string name;
		std::vector<TroopMember> members;
		bool auto_alignment = false;
		std::vector<bool> terrain_set;
		std::vector<TroopPage> pages;
	};
}

#endif
