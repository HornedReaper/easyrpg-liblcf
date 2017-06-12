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

#ifndef LCF_RPG_TREEMAP_H
#define LCF_RPG_TREEMAP_H

// Headers
#include <vector>
#include "rpg_mapinfo.h"
#include "rpg_start.h"

/**
 * RPG::TreeMap class.
 */
namespace RPG {
	class TreeMap {
	public:
		std::vector<MapInfo> maps;
		std::vector<int> tree_order;
		int active_node = 0;
		Start start;
		const std::vector<MapInfo>& GetMaps() const;
		std::vector<MapInfo>& GetMaps();
		void SetMaps(const std::vector<MapInfo>& maps);

		const std::vector<int>& GetTreeOrder() const;
		std::vector<int>& GetTreeOrder();
		void SetTreeOrder(const std::vector<int>& tree_order);

		int GetActiveNode() const;
		void SetActiveNode(int active_node);

		const Start& GetStart() const;
		Start& GetStart();
		void SetStart(const Start& start);

	};
}

#endif
