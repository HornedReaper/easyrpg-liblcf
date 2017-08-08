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

#ifndef LCF_RPG_BATTLECOMMAND_H
#define LCF_RPG_BATTLECOMMAND_H

// Headers
#include <string>
#include "rpg_base.h"

/**
 * RPG::BattleCommand class.
 */
namespace RPG {
	class BattleCommand : Base {
	public:
		enum Type {
			Type_attack = 0,
			Type_skill = 1,
			Type_subskill = 2,
			Type_defense = 3,
			Type_item = 4,
			Type_escape = 5,
			Type_special = 6
		};

		BattleCommand() {}
		BattleCommand(rapidjson::Value& json_values);
		int ID = 0;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		int GetType() const;
		void SetType(int type);

	};
}

#endif
