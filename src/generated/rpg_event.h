/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2017 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_EVENT_H
#define LCF_RPG_EVENT_H

// Headers
#include <string>
#include "lcf_vector.h"
#include "rpg_eventpage.h"

/**
 * RPG::Event class.
 */
namespace RPG {
	class Event {
	public:
		int ID = 0;
		std::string name;
		int x = 0;
		int y = 0;
		LcfVector<EventPage> pages;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		int GetX() const;
		void SetX(int x);

		int GetY() const;
		void SetY(int y);

		const LcfVector<EventPage>& GetPages() const;
		LcfVector<EventPage>& GetPages();
		void AddPages(const EventPage& eventpage);
		EventPage&

	};
}

#endif
