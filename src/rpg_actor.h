/*
 * Copyright (c) 2015 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_ACTOR_H
#define LCF_RPG_ACTOR_H

// Header
#include "rpg_actor_gen.h"

/**
 * RPG::Actor class.
 */
namespace RPG {
	class Actor : public Actor_Gen {
	public:
		void Setup();
	};
}

#endif
