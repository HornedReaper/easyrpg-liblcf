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

#ifndef LCF_RPG_BATTLERANIMATIONEXTENSION_H
#define LCF_RPG_BATTLERANIMATIONEXTENSION_H

// Headers
#include <string>
#include "rpg_base.h"

/**
 * RPG::BattlerAnimationExtension class.
 */
namespace RPG {
	class BattlerAnimationExtension : Base {
	public:
		enum AnimType {
			AnimType_graphic = 0,
			AnimType_animation = 1
		};

		BattlerAnimationExtension() {}
		BattlerAnimationExtension(rapidjson::Value& json_values);
		int ID = 0;
		std::string name;
		std::string battler_name;
		int battler_index = 0;
		int animation_type = 0;
		int animation_id = 1;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		const std::string& GetBattlerName() const;
		std::string& GetBattlerName();
		void SetBattlerName(const std::string& battler_name);

		int GetBattlerIndex() const;
		void SetBattlerIndex(int battler_index);

		int GetAnimationType() const;
		void SetAnimationType(int animation_type);

		int GetAnimationId() const;
		void SetAnimationId(int animation_id);

	};
}

#endif
