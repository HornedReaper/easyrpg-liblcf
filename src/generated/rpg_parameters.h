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

#ifndef LCF_RPG_PARAMETERS_H
#define LCF_RPG_PARAMETERS_H

// Headers
#include <vector>
#include "reader_types.h"
#include "rpg_base.h"

/**
 * RPG::Parameters class.
 */
namespace RPG {
	class Parameters : Base {
	public:
		Parameters() {}
		Parameters(rapidjson::Value& json_values);
		void Setup(int final_level);
		const std::vector<int16_t>& GetMaxhp() const;
		std::vector<int16_t>& GetMaxhp();

		const std::vector<int16_t>& GetMaxsp() const;
		std::vector<int16_t>& GetMaxsp();

		const std::vector<int16_t>& GetAttack() const;
		std::vector<int16_t>& GetAttack();

		const std::vector<int16_t>& GetDefense() const;
		std::vector<int16_t>& GetDefense();

		const std::vector<int16_t>& GetSpirit() const;
		std::vector<int16_t>& GetSpirit();

		const std::vector<int16_t>& GetAgility() const;
		std::vector<int16_t>& GetAgility();

	};
}

#endif
