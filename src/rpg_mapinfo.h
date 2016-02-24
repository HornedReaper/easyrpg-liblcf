/*
 * Copyright (c) 2015 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_MAPINFO_H
#define LCF_RPG_MAPINFO_H

// Header
#include "rpg_mapinfo_gen.h"

/**
 * RPG::MapInfo class.
 */
namespace RPG {
	class MapInfo : public MapInfo_Gen {
	public:
		void Init();
	};
}

#endif
