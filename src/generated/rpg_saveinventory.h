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

#ifndef LCF_RPG_SAVEINVENTORY_H
#define LCF_RPG_SAVEINVENTORY_H

// Headers
#include "lcf_vector.h"
#include "reader_types.h"

/**
 * RPG::SaveInventory class.
 */
namespace RPG {
	class SaveInventory {
	public:
		void Setup();
		int party_size = -1;
		LcfVector<int16_t> party;
		int items_size = -1;
		LcfVector<int16_t> item_ids;
		LcfVector<uint8_t> item_counts;
		LcfVector<uint8_t> item_usage;
		int gold = 0;
		int timer1_secs = 0;
		bool timer1_active = false;
		bool timer1_visible = false;
		bool timer1_battle = false;
		int timer2_secs = 0;
		bool timer2_active = false;
		bool timer2_visible = false;
		bool timer2_battle = false;
		int battles = 0;
		int defeats = 0;
		int escapes = 0;
		int victories = 0;
		int turns = 0;
		int steps = 0;
		int GetPartySize() const;
		void SetPartySize(int party_size);

		const LcfVector<int16_t>& GetParty() const;
		LcfVector<int16_t>& GetParty();
		void AddParty(const int16_t& int16_t);
		int16_t&

		int GetItemsSize() const;
		void SetItemsSize(int items_size);

		const LcfVector<int16_t>& GetItemIds() const;
		LcfVector<int16_t>& GetItemIds();
		void AddItemIds(const int16_t& int16_t);
		int16_t&

		const LcfVector<uint8_t>& GetItemCounts() const;
		LcfVector<uint8_t>& GetItemCounts();
		void AddItemCounts(const uint8_t& uint8_t);
		uint8_t&

		const LcfVector<uint8_t>& GetItemUsage() const;
		LcfVector<uint8_t>& GetItemUsage();
		void AddItemUsage(const uint8_t& uint8_t);
		uint8_t&

		int GetGold() const;
		void SetGold(int gold);

		int GetTimer1Secs() const;
		void SetTimer1Secs(int timer1_secs);

		bool GetTimer1Active() const;
		void SetTimer1Active(bool timer1_active);

		bool GetTimer1Visible() const;
		void SetTimer1Visible(bool timer1_visible);

		bool GetTimer1Battle() const;
		void SetTimer1Battle(bool timer1_battle);

		int GetTimer2Secs() const;
		void SetTimer2Secs(int timer2_secs);

		bool GetTimer2Active() const;
		void SetTimer2Active(bool timer2_active);

		bool GetTimer2Visible() const;
		void SetTimer2Visible(bool timer2_visible);

		bool GetTimer2Battle() const;
		void SetTimer2Battle(bool timer2_battle);

		int GetBattles() const;
		void SetBattles(int battles);

		int GetDefeats() const;
		void SetDefeats(int defeats);

		int GetEscapes() const;
		void SetEscapes(int escapes);

		int GetVictories() const;
		void SetVictories(int victories);

		int GetTurns() const;
		void SetTurns(int turns);

		int GetSteps() const;
		void SetSteps(int steps);

	};
}

#endif
