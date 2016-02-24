/*
 * Copyright (c) 2015 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_PARAMETERS_H
#define LCF_RPG_PARAMETERS_H

// Header
#include "rpg_parameters_gen.h"

/**
 * RPG::Parameters class.
 */
namespace RPG {
	class Parameters : public Parameters_Gen {
	public:
		void Setup(int final_level);
	};
}

#endif
