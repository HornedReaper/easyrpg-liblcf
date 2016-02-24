/*
 * Copyright (c) 2015 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_CHIPSET_H
#define LCF_RPG_CHIPSET_H

// Header
#include "rpg_chipset_gen.h"

/**
 * RPG::Chipset class.
 */
namespace RPG {
	class Chipset : public Chipset_Gen {
	public:
		void Init();
	};
}

#endif
