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

#ifndef LCF_RPG_SAVETITLE_H
#define LCF_RPG_SAVETITLE_H

// Headers
#include <string>
#include "rpg_base.h"

/**
 * RPG::SaveTitle class.
 */
namespace RPG {
	class SaveTitle : Base {
	public:
		SaveTitle() {}
		SaveTitle(rapidjson::Value& json_values);
		double GetTimestamp() const;
		void SetTimestamp(double timestamp);

		const std::string& GetHeroName() const;
		std::string& GetHeroName();
		void SetHeroName(const std::string& hero_name);

		int GetHeroLevel() const;
		void SetHeroLevel(int hero_level);

		int GetHeroHp() const;
		void SetHeroHp(int hero_hp);

		const std::string& GetFace1Name() const;
		std::string& GetFace1Name();
		void SetFace1Name(const std::string& face1_name);

		int GetFace1Id() const;
		void SetFace1Id(int face1_id);

		const std::string& GetFace2Name() const;
		std::string& GetFace2Name();
		void SetFace2Name(const std::string& face2_name);

		int GetFace2Id() const;
		void SetFace2Id(int face2_id);

		const std::string& GetFace3Name() const;
		std::string& GetFace3Name();
		void SetFace3Name(const std::string& face3_name);

		int GetFace3Id() const;
		void SetFace3Id(int face3_id);

		const std::string& GetFace4Name() const;
		std::string& GetFace4Name();
		void SetFace4Name(const std::string& face4_name);

		int GetFace4Id() const;
		void SetFace4Id(int face4_id);

	};
}

#endif
