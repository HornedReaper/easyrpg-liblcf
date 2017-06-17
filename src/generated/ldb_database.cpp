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

// Headers
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_struct.h"

// Read Database.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT Database

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(LcfVector<RPG::Actor>, actors),
	LCF_STRUCT_TYPED_FIELD(LcfVector<RPG::Skill>, skills),
	LCF_STRUCT_TYPED_FIELD(LcfVector<RPG::Item>, items),
	LCF_STRUCT_TYPED_FIELD(LcfVector<RPG::Enemy>, enemies),
	LCF_STRUCT_TYPED_FIELD(LcfVector<RPG::Troop>, troops),
	LCF_STRUCT_TYPED_FIELD(LcfVector<RPG::Terrain>, terrains),
	LCF_STRUCT_TYPED_FIELD(LcfVector<RPG::Attribute>, attributes),
	LCF_STRUCT_TYPED_FIELD(LcfVector<RPG::State>, states),
	LCF_STRUCT_TYPED_FIELD(LcfVector<RPG::Animation>, animations),
	LCF_STRUCT_TYPED_FIELD(LcfVector<RPG::Chipset>, chipsets),
	LCF_STRUCT_TYPED_FIELD(RPG::Terms, terms),
	LCF_STRUCT_TYPED_FIELD(RPG::System, system),
	LCF_STRUCT_TYPED_FIELD(LcfVector<RPG::Switch>, switches),
	LCF_STRUCT_TYPED_FIELD(LcfVector<RPG::Variable>, variables),
	LCF_STRUCT_TYPED_FIELD(LcfVector<RPG::CommonEvent>, commonevents),
	LCF_STRUCT_TYPED_FIELD(int, version),
	LCF_STRUCT_TYPED_FIELD(RPG::BattleCommands, battlecommands),
	LCF_STRUCT_TYPED_FIELD(LcfVector<RPG::Class>, classes),
	LCF_STRUCT_TYPED_FIELD(LcfVector<RPG::BattlerAnimation>, battleranimations),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
