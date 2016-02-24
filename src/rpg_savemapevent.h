/*
 * Copyright (c) 2015 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_SAVEMAPEVENT_H
#define LCF_RPG_SAVEMAPEVENT_H

// Header
#include "rpg_savemapevent_gen.h"

/**
 * RPG::SaveMapEvent class.
 */
namespace RPG {
class Event;
class EventPage;

class SaveMapEvent : public SaveMapEvent_Gen {
	public:
		void Setup(const RPG::Event& event);
		void Fixup(const RPG::EventPage& page);
	};
}

#endif
