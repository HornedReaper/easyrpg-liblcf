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
#include "rpg_eventcommand.h"

/**
 * RPG::SaveEventCommands class.
 */
namespace RPG {
	class SaveEventCommands {
	public:
		int ID = 0;
		int commands_size = 0;
		std::vector<EventCommand> commands;
		int current_command = 0;
		int event_id = 0;
		bool actioned = false;
		int unknown_15_subcommand_path_size = -1;
		std::vector<uint8_t> unknown_16_subcommand_path;
        int GetCommandsSize() const;
        void SetCommandsSize(int commands_size);

        const std::vector<EventCommand>& GetCommands() const;
        std::vector<EventCommand>& GetCommands();
        void SetCommands(const std::vector<EventCommand>& commands);

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
        void SetUnknown16SubcommandPath(const std::vector<uint8_t>& unknown_16_subcommand_path);

	};
}

#endif
