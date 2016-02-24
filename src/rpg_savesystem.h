/*
 * Copyright (c) 2015 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_SAVESYSTEM_H
#define LCF_RPG_SAVESYSTEM_H

// Header
#include "rpg_savesystem_gen.h"

/**
 * RPG::SaveSystem class.
 */
namespace RPG {
	class SaveSystem : public SaveSystem_Gen {
	public:
		void Setup();
		void Fixup();
	};
}

#endif
