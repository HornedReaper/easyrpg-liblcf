/*
 * Copyright (c) 2015 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_SAVEACTOR_H
#define LCF_RPG_SAVEACTOR_H

// Header
#include "rpg_saveactor_gen.h"

/**
 * RPG::SaveActor class.
 */
namespace RPG {
	class SaveActor : public SaveActor_Gen {
	public:
		void Setup(int actor_id);
		void Fixup();
	};
}

#endif
