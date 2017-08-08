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
#include <vector>
#include "reader_types.h"
#include "rpg_base.h"
#include "rpg_map.h"
#include "rpg_mapinfo.h"
#include "rpg_savemapevent.h"

/**
 * RPG::SaveMapInfo class.
 */
namespace RPG {
	class SaveMapInfo : Base {
	public:
		SaveMapInfo() {}
		SaveMapInfo(rapidjson::Value& json_values);
		void Setup();
		void Setup(const RPG::Map& map);
		void Setup(const RPG::MapInfo& map_info);
		void Fixup(const RPG::Map& map);
		int GetPositionX() const;
		void SetPositionX(int position_x);

		int GetPositionY() const;
		void SetPositionY(int position_y);

		int GetEncounterRate() const;
		void SetEncounterRate(int encounter_rate);

		int GetChipsetId() const;
		void SetChipsetId(int chipset_id);

		const std::vector<SaveMapEvent>& GetEvents() const;
		std::vector<SaveMapEvent>& GetEvents();

		const std::vector<uint8_t>& GetLowerTiles() const;
		std::vector<uint8_t>& GetLowerTiles();

		const std::vector<uint8_t>& GetUpperTiles() const;
		std::vector<uint8_t>& GetUpperTiles();

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
