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

#ifndef LCF_RPG_ATTRIBUTE_H
#define LCF_RPG_ATTRIBUTE_H

// Headers
#include <string>
#include "rpg_base.h"

/**
 * RPG::Attribute class.
 */
namespace RPG {
	class Attribute : Base {
	public:
		enum Type {
			Type_physical = 0,
			Type_magical = 1
		};

		Attribute() {}
		Attribute(rapidjson::Value& json_values);
		int ID = 0;
		std::string name;
		int type = 0;
		int a_rate = 300;
		int b_rate = 200;
		int c_rate = 100;
		int d_rate = 50;
		int e_rate = 0;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		int GetType() const;
		void SetType(int type);

		int GetARate() const;
		void SetARate(int a_rate);

		int GetBRate() const;
		void SetBRate(int b_rate);

		int GetCRate() const;
		void SetCRate(int c_rate);

		int GetDRate() const;
		void SetDRate(int d_rate);

		int GetERate() const;
		void SetERate(int e_rate);

	};
}

#endif
