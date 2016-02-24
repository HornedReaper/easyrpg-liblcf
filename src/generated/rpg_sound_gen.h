/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2015 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_SOUND_GEN_H
#define LCF_RPG_SOUND_GEN_H

// Headers
#include <string>

/**
 * RPG::Sound class.
 */
namespace RPG {
	class Sound_Gen {
	public:
		std::string name;
		int volume = 100;
		int tempo = 100;
		int balance = 50;
	};
}

#endif
