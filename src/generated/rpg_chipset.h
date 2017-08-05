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

#ifndef LCF_RPG_CHIPSET_H
#define LCF_RPG_CHIPSET_H

// Headers
#include <string>
#include "lcf_vector.h"
#include "reader_types.h"

/**
 * RPG::Chipset class.
 */
namespace RPG {
	class Chipset {
	public:
		enum AnimType {
			AnimType_reciprocating = 0,
			AnimType_cyclic = 1
		};

		Chipset();
		void Init();
		int ID = 0;
		std::string name;
		std::string chipset_name;
		LcfVector<int16_t> terrain_data;
		LcfVector<uint8_t> passable_data_lower;
		LcfVector<uint8_t> passable_data_upper;
		int animation_type = 0;
		int animation_speed = 0;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		const std::string& GetChipsetName() const;
		std::string& GetChipsetName();
		void SetChipsetName(const std::string& chipset_name);

		const LcfVector<int16_t>& GetTerrainData() const;
		LcfVector<int16_t>& GetTerrainData();
		void AddTerrainData(const int16_t& int16_t);
		int16_t&

		const LcfVector<uint8_t>& GetPassableDataLower() const;
		LcfVector<uint8_t>& GetPassableDataLower();
		void AddPassableDataLower(const uint8_t& uint8_t);
		uint8_t&

		const LcfVector<uint8_t>& GetPassableDataUpper() const;
		LcfVector<uint8_t>& GetPassableDataUpper();
		void AddPassableDataUpper(const uint8_t& uint8_t);
		uint8_t&

		int GetAnimationType() const;
		void SetAnimationType(int animation_type);

		int GetAnimationSpeed() const;
		void SetAnimationSpeed(int animation_speed);

	};
}

#endif
