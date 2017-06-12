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

#ifndef LCF_RPG_MUSIC_H
#define LCF_RPG_MUSIC_H

// Headers
#include <string>

/**
 * RPG::Music class.
 */
namespace RPG {
	class Music {
	public:
		std::string name;
		int fadein = 0;
		int volume = 100;
		int tempo = 100;
		int balance = 50;
		const std::string& GetName() const;
		std::string& GetName();
		void SetName(const std::string& name);

		int GetFadein() const;
		void SetFadein(int fadein);

		int GetVolume() const;
		void SetVolume(int volume);

		int GetTempo() const;
		void SetTempo(int tempo);

		int GetBalance() const;
		void SetBalance(int balance);

	};
}

#endif
