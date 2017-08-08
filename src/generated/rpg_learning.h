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

#ifndef LCF_RPG_LEARNING_H
#define LCF_RPG_LEARNING_H

// Headers
#include "rpg_base.h"

/**
 * RPG::Learning class.
 */
namespace RPG {
	class Learning : Base {
	public:
		Learning() {}
		Learning(rapidjson::Value& json_values);
		int ID = 0;
		int GetLevel() const;
		void SetLevel(int level);

		int GetSkillId() const;
		void SetSkillId(int skill_id);

	};
}

#endif
