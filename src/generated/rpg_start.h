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

#ifndef LCF_RPG_START_H
#define LCF_RPG_START_H

// Headers
#include "rpg_base.h"

/**
 * RPG::Start class.
 */
namespace RPG {
	class Start : Base {
	public:
		Start() {}
		Start(rapidjson::Value& json_values);
		int party_map_id = 0;
		int party_x = 0;
		int party_y = 0;
		int boat_map_id = 0;
		int boat_x = 0;
		int boat_y = 0;
		int ship_map_id = 0;
		int ship_x = 0;
		int ship_y = 0;
		int airship_map_id = 0;
		int airship_x = 0;
		int airship_y = 0;
		int GetPartyMapId() const;
		void SetPartyMapId(int party_map_id);

		int GetPartyX() const;
		void SetPartyX(int party_x);

		int GetPartyY() const;
		void SetPartyY(int party_y);

		int GetBoatMapId() const;
		void SetBoatMapId(int boat_map_id);

		int GetBoatX() const;
		void SetBoatX(int boat_x);

		int GetBoatY() const;
		void SetBoatY(int boat_y);

		int GetShipMapId() const;
		void SetShipMapId(int ship_map_id);

		int GetShipX() const;
		void SetShipX(int ship_x);

		int GetShipY() const;
		void SetShipY(int ship_y);

		int GetAirshipMapId() const;
		void SetAirshipMapId(int airship_map_id);

		int GetAirshipX() const;
		void SetAirshipX(int airship_x);

		int GetAirshipY() const;
		void SetAirshipY(int airship_y);

	};
}

#endif
