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

#ifndef LCF_RPG_SAVEEVENTCOMMANDS_H
#define LCF_RPG_SAVEEVENTCOMMANDS_H

// Headers
#include <vector>
#include "reader_types.h"
#include "rpg_base.h"
#include "rpg_eventcommand.h"

/**
 * RPG::SaveEventCommands class.
 */
namespace RPG {
	class SaveEventCommands : Base {
	public:
		SaveEventCommands() {}
		SaveEventCommands(rapidjson::Value& json_values);
		int ID = 0;
		int GetCommandsSize() const;
		void SetCommandsSize(int commands_size);

		const std::vector<EventCommand>& GetCommands() const;
		std::vector<EventCommand>& GetCommands();

		int GetCurrentCommand() const;
		void SetCurrentCommand(int current_command);

		int GetEventId() const;
		void SetEventId(int event_id);

		bool GetActioned() const;
		void SetActioned(bool actioned);

		int GetUnknown15SubcommandPathSize() const;
		void SetUnknown15SubcommandPathSize(int unknown_15_subcommand_path_size);

		const std::vector<uint8_t>& GetUnknown16SubcommandPath() const;
		std::vector<uint8_t>& GetUnknown16SubcommandPath();

	};
}

#endif
