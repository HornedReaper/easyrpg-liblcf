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
#include "rpg_music.h"


const std::string& RPG::Music::GetName() const  {
    return name;
}

std::string& RPG::Music::GetName() {
    return name;
}

void RPG::Music::SetName(const std::string& name) {
    this->name = name;
}

int RPG::Music::GetFadein() const {
    return fadein;
}

void RPG::Music::SetFadein(int fadein) {
    this->fadein = fadein;
}

int RPG::Music::GetVolume() const {
    return volume;
}

void RPG::Music::SetVolume(int volume) {
    this->volume = volume;
}

int RPG::Music::GetTempo() const {
    return tempo;
}

void RPG::Music::SetTempo(int tempo) {
    this->tempo = tempo;
}

int RPG::Music::GetBalance() const {
    return balance;
}

void RPG::Music::SetBalance(int balance) {
    this->balance = balance;
}

