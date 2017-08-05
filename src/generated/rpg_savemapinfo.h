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

#ifndef LCF_RPG_SAVEMAPINFO_H
#define LCF_RPG_SAVEMAPINFO_H

// Headers
#include <string>
#include "lcf_vector.h"
#include "reader_types.h"
#include "rpg_map.h"
#include "rpg_mapinfo.h"
#include "rpg_savemapevent.h"

/**
 * RPG::SaveMapInfo class.
 */
namespace RPG {
	class SaveMapInfo {
	public:
		void Setup();
		void Setup(const RPG::Map& map);
		void Setup(const RPG::MapInfo& map_info);
		void Fixup(const RPG::Map& map);
		int position_x = 0;
		int position_y = 0;
		int encounter_rate = -1;
		int chipset_id = 0;
		LcfVector<SaveMapEvent> events;
		LcfVector<uint8_t> lower_tiles;
		LcfVector<uint8_t> upper_tiles;
		std::string parallax_name;
		bool parallax_horz = false;
		bool parallax_vert = false;
		bool parallax_horz_auto = false;
		int parallax_horz_speed = 0;
		bool parallax_vert_auto = false;
		int parallax_vert_speed = 0;
		int GetPositionX() const;
		void SetPositionX(int position_x);

		int GetPositionY() const;
		void SetPositionY(int position_y);

		int GetEncounterRate() const;
		void SetEncounterRate(int encounter_rate);

		int GetChipsetId() const;
		void SetChipsetId(int chipset_id);

		const LcfVector<SaveMapEvent>& GetEvents() const;
		LcfVector<SaveMapEvent>& GetEvents();
		void AddEvents(const SaveMapEvent& savemapevent);
		SaveMapEvent&

		const LcfVector<uint8_t>& GetLowerTiles() const;
		LcfVector<uint8_t>& GetLowerTiles();
		void AddLowerTiles(const uint8_t& uint8_t);
		uint8_t&

		const LcfVector<uint8_t>& GetUpperTiles() const;
		LcfVector<uint8_t>& GetUpperTiles();
		void AddUpperTiles(const uint8_t& uint8_t);
		uint8_t&

		const std::string& GetParallaxName() const;
		std::string& GetParallaxName();
		void SetParallaxName(const std::string& parallax_name);

		bool GetParallaxHorz() const;
		void SetParallaxHorz(bool parallax_horz);

		bool GetParallaxVert() const;
		void SetParallaxVert(bool parallax_vert);

		bool GetParallaxHorzAuto() const;
		void SetParallaxHorzAuto(bool parallax_horz_auto);

		int GetParallaxHorzSpeed() const;
		void SetParallaxHorzSpeed(int parallax_horz_speed);

		bool GetParallaxVertAuto() const;
		void SetParallaxVertAuto(bool parallax_vert_auto);

		int GetParallaxVertSpeed() const;
		void SetParallaxVertSpeed(int parallax_vert_speed);

	};
}

#endif
