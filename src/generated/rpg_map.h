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

#ifndef LCF_RPG_MAP_H
#define LCF_RPG_MAP_H

// Headers
#include <string>
#include <vector>
#include "reader_types.h"
#include "rpg_event.h"

/**
 * RPG::Map class.
 */
namespace RPG {
	class Map {
	public:
		enum ScrollType {
			ScrollType_none = 0,
			ScrollType_vertical = 1,
			ScrollType_horizontal = 2,
			ScrollType_both = 3
		};
		enum GeneratorMode {
			GeneratorMode_single_passage = 0,
			GeneratorMode_linked_rooms = 1,
			GeneratorMode_maze_passage = 2,
			GeneratorMode_open_room = 3
		};
		enum GeneratorTiles {
			GeneratorTiles_one = 0,
			GeneratorTiles_two = 1
		};

		int chipset_id = 1;
		int width = 20;
		int height = 15;
		int scroll_type = 0;
		bool parallax_flag = false;
		std::string parallax_name;
		bool parallax_loop_x = false;
		bool parallax_loop_y = false;
		bool parallax_auto_loop_x = false;
		int parallax_sx = 0;
		bool parallax_auto_loop_y = false;
		int parallax_sy = 0;
		bool generator_flag = false;
		int generator_mode = 0;
		bool top_level = false;
		int generator_tiles = 0;
		int generator_width = 4;
		int generator_height = 1;
		bool generator_surround = true;
		bool generator_upper_wall = true;
		bool generator_floor_b = true;
		bool generator_floor_c = true;
		bool generator_extra_b = true;
		bool generator_extra_c = true;
		std::vector<uint32_t> generator_x;
		std::vector<uint32_t> generator_y;
		std::vector<int16_t> generator_tile_ids;
		std::vector<int16_t> lower_layer;
		std::vector<int16_t> upper_layer;
		std::vector<Event> events;
		int save_count = 0;
        int GetChipsetId() const;
        void SetChipsetId(int chipset_id);

        int GetWidth() const;
        void SetWidth(int width);

        int GetHeight() const;
        void SetHeight(int height);

        int GetScrollType() const;
        void SetScrollType(int scroll_type);

        bool GetParallaxFlag() const;
        void SetParallaxFlag(bool parallax_flag);

        const std::string& GetParallaxName() const;
        std::string& GetParallaxName();
        void SetParallaxName(const std::string& parallax_name);

        bool GetParallaxLoopX() const;
        void SetParallaxLoopX(bool parallax_loop_x);

        bool GetParallaxLoopY() const;
        void SetParallaxLoopY(bool parallax_loop_y);

        bool GetParallaxAutoLoopX() const;
        void SetParallaxAutoLoopX(bool parallax_auto_loop_x);

        int GetParallaxSx() const;
        void SetParallaxSx(int parallax_sx);

        bool GetParallaxAutoLoopY() const;
        void SetParallaxAutoLoopY(bool parallax_auto_loop_y);

        int GetParallaxSy() const;
        void SetParallaxSy(int parallax_sy);

        bool GetGeneratorFlag() const;
        void SetGeneratorFlag(bool generator_flag);

        int GetGeneratorMode() const;
        void SetGeneratorMode(int generator_mode);

        bool GetTopLevel() const;
        void SetTopLevel(bool top_level);

        int GetGeneratorTiles() const;
        void SetGeneratorTiles(int generator_tiles);

        int GetGeneratorWidth() const;
        void SetGeneratorWidth(int generator_width);

        int GetGeneratorHeight() const;
        void SetGeneratorHeight(int generator_height);

        bool GetGeneratorSurround() const;
        void SetGeneratorSurround(bool generator_surround);

        bool GetGeneratorUpperWall() const;
        void SetGeneratorUpperWall(bool generator_upper_wall);

        bool GetGeneratorFloorB() const;
        void SetGeneratorFloorB(bool generator_floor_b);

        bool GetGeneratorFloorC() const;
        void SetGeneratorFloorC(bool generator_floor_c);

        bool GetGeneratorExtraB() const;
        void SetGeneratorExtraB(bool generator_extra_b);

        bool GetGeneratorExtraC() const;
        void SetGeneratorExtraC(bool generator_extra_c);

        const std::vector<uint32_t>& GetGeneratorX() const;
        std::vector<uint32_t>& GetGeneratorX();
        void SetGeneratorX(const std::vector<uint32_t>& generator_x);

        const std::vector<uint32_t>& GetGeneratorY() const;
        std::vector<uint32_t>& GetGeneratorY();
        void SetGeneratorY(const std::vector<uint32_t>& generator_y);

        const std::vector<int16_t>& GetGeneratorTileIds() const;
        std::vector<int16_t>& GetGeneratorTileIds();
        void SetGeneratorTileIds(const std::vector<int16_t>& generator_tile_ids);

        const std::vector<int16_t>& GetLowerLayer() const;
        std::vector<int16_t>& GetLowerLayer();
        void SetLowerLayer(const std::vector<int16_t>& lower_layer);

        const std::vector<int16_t>& GetUpperLayer() const;
        std::vector<int16_t>& GetUpperLayer();
        void SetUpperLayer(const std::vector<int16_t>& upper_layer);

        const std::vector<Event>& GetEvents() const;
        std::vector<Event>& GetEvents();
        void SetEvents(const std::vector<Event>& events);

        int GetSaveCount() const;
        void SetSaveCount(int save_count);

	};
}

#endif
