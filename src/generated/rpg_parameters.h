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
#include "lcf_vector.h"
#include "reader_types.h"

/**
 * RPG::Parameters class.
 */
namespace RPG {
	class Parameters {
	public:
		void Setup(int final_level);
		LcfVector<int16_t> maxhp;
		LcfVector<int16_t> maxsp;
		LcfVector<int16_t> attack;
		LcfVector<int16_t> defense;
		LcfVector<int16_t> spirit;
		LcfVector<int16_t> agility;
		const LcfVector<int16_t>& GetMaxhp() const;
		LcfVector<int16_t>& GetMaxhp();
		void SetMaxhp(const LcfVector<int16_t>& maxhp);

		const LcfVector<int16_t>& GetMaxsp() const;
		LcfVector<int16_t>& GetMaxsp();
		void SetMaxsp(const LcfVector<int16_t>& maxsp);

		const LcfVector<int16_t>& GetAttack() const;
		LcfVector<int16_t>& GetAttack();
		void SetAttack(const LcfVector<int16_t>& attack);

		const LcfVector<int16_t>& GetDefense() const;
		LcfVector<int16_t>& GetDefense();
		void SetDefense(const LcfVector<int16_t>& defense);

		const LcfVector<int16_t>& GetSpirit() const;
		LcfVector<int16_t>& GetSpirit();
		void SetSpirit(const LcfVector<int16_t>& spirit);

		const LcfVector<int16_t>& GetAgility() const;
		LcfVector<int16_t>& GetAgility();
		void SetAgility(const LcfVector<int16_t>& agility);

	};
}

#endif
