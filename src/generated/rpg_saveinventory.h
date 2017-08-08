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
#include <vector>
#include "reader_types.h"
#include "rpg_base.h"

/**
 * RPG::SaveInventory class.
 */
namespace RPG {
	class SaveInventory : Base {
	public:
		SaveInventory() {}
		SaveInventory(rapidjson::Value& json_values);
		void Setup();
		int GetPartySize() const;
		void SetPartySize(int party_size);

		const std::vector<int16_t>& GetParty() const;
		std::vector<int16_t>& GetParty();

		int GetItemsSize() const;
		void SetItemsSize(int items_size);

		const std::vector<int16_t>& GetItemIds() const;
		std::vector<int16_t>& GetItemIds();

		const std::vector<uint8_t>& GetItemCounts() const;
		std::vector<uint8_t>& GetItemCounts();

		const std::vector<uint8_t>& GetItemUsage() const;
		std::vector<uint8_t>& GetItemUsage();

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
