/*
 * Copyright (c) 2015 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_SAVEMAPINFO_H
#define LCF_RPG_SAVEMAPINFO_H

// Header
#include "rpg_savemapinfo_gen.h"

/**
 * RPG::SaveMapInfo class.
 */
namespace RPG {
	class Map;
	class MapInfo;

	class SaveMapInfo : public SaveMapInfo_Gen {
	public:
		void Setup();
		void Setup(const RPG::Map& map);
		void Setup(const RPG::MapInfo& map_info);
		void Fixup(const RPG::Map& map);
	};
}

#endif
