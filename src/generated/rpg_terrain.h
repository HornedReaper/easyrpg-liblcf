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

#ifndef LCF_RPG_TERRAIN_H
#define LCF_RPG_TERRAIN_H

// Headers
#include <string>
#include "rpg_sound.h"

/**
 * RPG::Terrain class.
 */
namespace RPG {
	class Terrain {
	public:
		enum BushDepth {
			BushDepth_normal = 0,
			BushDepth_third = 1,
			BushDepth_half = 2,
			BushDepth_full = 3
		};
		enum BGAssociation {
			BGAssociation_background = 0,
			BGAssociation_frame = 1
		};

		int ID = 0;
		std::string name;
		int damage = 0;
		int encounter_rate = 100;
		std::string background_name;
		bool boat_pass = false;
		bool ship_pass = false;
		bool airship_pass = true;
		bool airship_land = true;
		int bush_depth = 0;
		Sound footstep;
		bool on_damage_se = false;
		int background_type = 0;
		std::string background_a_name;
		bool background_a_scrollh = false;
		bool background_a_scrollv = false;
		int background_a_scrollh_speed = 0;
		int background_a_scrollv_speed = 0;
		bool background_b = false;
		std::string background_b_name;
		bool background_b_scrollh = false;
		bool background_b_scrollv = false;
		int background_b_scrollh_speed = 0;
		int background_b_scrollv_speed = 0;
		struct Flags {
			bool back_party;
			bool back_enemies;
			bool lateral_party;
			bool lateral_enemies;
		} special_flags;
		int special_back_party = 15;
		int special_back_enemies = 10;
		int special_lateral_party = 10;
		int special_lateral_enemies = 5;
		int grid_location = 0;
		int grid_a = 0;
		int grid_b = 0;
		int grid_c = 0;
        const std::string& GetName() const;
        std::string& GetName();
        void SetName(const std::string& name);

        int GetDamage() const;
        void SetDamage(int damage);

        int GetEncounterRate() const;
        void SetEncounterRate(int encounter_rate);

        const std::string& GetBackgroundName() const;
        std::string& GetBackgroundName();
        void SetBackgroundName(const std::string& background_name);

        bool GetBoatPass() const;
        void SetBoatPass(bool boat_pass);

        bool GetShipPass() const;
        void SetShipPass(bool ship_pass);

        bool GetAirshipPass() const;
        void SetAirshipPass(bool airship_pass);

        bool GetAirshipLand() const;
        void SetAirshipLand(bool airship_land);

        int GetBushDepth() const;
        void SetBushDepth(int bush_depth);

        const Sound& GetFootstep() const;
        Sound& GetFootstep();
        void SetFootstep(const Sound& footstep);

        bool GetOnDamageSe() const;
        void SetOnDamageSe(bool on_damage_se);

        int GetBackgroundType() const;
        void SetBackgroundType(int background_type);

        const std::string& GetBackgroundAName() const;
        std::string& GetBackgroundAName();
        void SetBackgroundAName(const std::string& background_a_name);

        bool GetBackgroundAScrollh() const;
        void SetBackgroundAScrollh(bool background_a_scrollh);

        bool GetBackgroundAScrollv() const;
        void SetBackgroundAScrollv(bool background_a_scrollv);

        int GetBackgroundAScrollhSpeed() const;
        void SetBackgroundAScrollhSpeed(int background_a_scrollh_speed);

        int GetBackgroundAScrollvSpeed() const;
        void SetBackgroundAScrollvSpeed(int background_a_scrollv_speed);

        bool GetBackgroundB() const;
        void SetBackgroundB(bool background_b);

        const std::string& GetBackgroundBName() const;
        std::string& GetBackgroundBName();
        void SetBackgroundBName(const std::string& background_b_name);

        bool GetBackgroundBScrollh() const;
        void SetBackgroundBScrollh(bool background_b_scrollh);

        bool GetBackgroundBScrollv() const;
        void SetBackgroundBScrollv(bool background_b_scrollv);

        int GetBackgroundBScrollhSpeed() const;
        void SetBackgroundBScrollhSpeed(int background_b_scrollh_speed);

        int GetBackgroundBScrollvSpeed() const;
        void SetBackgroundBScrollvSpeed(int background_b_scrollv_speed);

        const Flags& GetSpecialFlags() const;
        Flags& GetSpecialFlags();
        void SetSpecialFlags(const Flags& special_flags);

        int GetSpecialBackParty() const;
        void SetSpecialBackParty(int special_back_party);

        int GetSpecialBackEnemies() const;
        void SetSpecialBackEnemies(int special_back_enemies);

        int GetSpecialLateralParty() const;
        void SetSpecialLateralParty(int special_lateral_party);

        int GetSpecialLateralEnemies() const;
        void SetSpecialLateralEnemies(int special_lateral_enemies);

        int GetGridLocation() const;
        void SetGridLocation(int grid_location);

        int GetGridA() const;
        void SetGridA(int grid_a);

        int GetGridB() const;
        void SetGridB(int grid_b);

        int GetGridC() const;
        void SetGridC(int grid_c);

	};
}

#endif
