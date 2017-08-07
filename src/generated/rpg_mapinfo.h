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

#ifndef LCF_RPG_MAPINFO_H
#define LCF_RPG_MAPINFO_H

// Headers
#include <string>
#include <vector>
#include "rpg_base.h"
#include "rpg_encounter.h"
#include "rpg_music.h"
#include "rpg_rect.h"

/**
 * RPG::MapInfo class.
 */
namespace RPG {
	class MapInfo : Base {
	public:
		enum MusicType {
			MusicType_parent = 0,
			MusicType_event = 1,
			MusicType_specific = 2
		};
		enum BGMType {
			BGMType_parent = 0,
			BGMType_terrain = 1,
			BGMType_specific = 2
		};
		enum TriState {
			TriState_parent = 0,
			TriState_allow = 1,
			TriState_forbid = 2
		};

		MapInfo();
		MapInfo(rapidjson::Value& json_values);
		void Init();
		int ID = 0;
		std::string name;
		int parent_map = 0;
		int indentation = 0;
		int type = -1;
		int scrollbar_x = 0;
		int scrollbar_y = 0;
		bool expanded_node = false;
		int music_type = 0;
		Music music;
		int background_type = 0;
		std::string background_name;
		int teleport = 0;
		int escape = 0;
		int save = 0;
		std::vector<Encounter> encounters;
		int encounter_steps = 25;
		Rect area_rect;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		int GetParentMap() const;
		void SetParentMap(int parent_map);

		int GetIndentation() const;
		void SetIndentation(int indentation);

		int GetType() const;
		void SetType(int type);

		int GetScrollbarX() const;
		void SetScrollbarX(int scrollbar_x);

		int GetScrollbarY() const;
		void SetScrollbarY(int scrollbar_y);

		bool GetExpandedNode() const;
		void SetExpandedNode(bool expanded_node);

		int GetMusicType() const;
		void SetMusicType(int music_type);

		const Music& GetMusic() const;
		Music& GetMusic();
		void SetMusic(const Music& music);

		int GetBackgroundType() const;
		void SetBackgroundType(int background_type);

		const std::string& GetBackgroundName() const;
		std::string& GetBackgroundName();
		void SetBackgroundName(const std::string& background_name);

		int GetTeleport() const;
		void SetTeleport(int teleport);

		int GetEscape() const;
		void SetEscape(int escape);

		int GetSave() const;
		void SetSave(int save);

		const std::vector<Encounter>& GetEncounters() const;
		std::vector<Encounter>& GetEncounters();

		int GetEncounterSteps() const;
		void SetEncounterSteps(int encounter_steps);

		const Rect& GetAreaRect() const;
		Rect& GetAreaRect();
		void SetAreaRect(const Rect& area_rect);

	};
}

#endif
