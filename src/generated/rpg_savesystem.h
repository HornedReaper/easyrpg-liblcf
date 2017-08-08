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

#ifndef LCF_RPG_SAVESYSTEM_H
#define LCF_RPG_SAVESYSTEM_H

// Headers
#include <string>
#include <vector>
#include "reader_types.h"
#include "rpg_base.h"
#include "rpg_music.h"
#include "rpg_sound.h"

/**
 * RPG::SaveSystem class.
 */
namespace RPG {
	class SaveSystem : Base {
	public:
		enum AtbMode {
			AtbMode_atb_active = 0,
			AtbMode_atb_wait = 1
		};

		SaveSystem() {}
		SaveSystem(rapidjson::Value& json_values);
		void Setup();
		void Fixup();
		int GetScreen() const;
		void SetScreen(int screen);

		int GetFrameCount() const;
		void SetFrameCount(int frame_count);

		const std::string& GetGraphicsName() const;
		std::string& GetGraphicsName();
		void SetGraphicsName(const std::string& graphics_name);

		int GetMessageStretch() const;
		void SetMessageStretch(int message_stretch);

		int GetFontId() const;
		void SetFontId(int font_id);

		int GetSwitchesSize() const;
		void SetSwitchesSize(int switches_size);

		const std::vector<bool>& GetSwitches() const;
		std::vector<bool>& GetSwitches();

		int GetVariablesSize() const;
		void SetVariablesSize(int variables_size);

		const std::vector<uint32_t>& GetVariables() const;
		std::vector<uint32_t>& GetVariables();

		int GetMessageTransparent() const;
		void SetMessageTransparent(int message_transparent);

		int GetMessagePosition() const;
		void SetMessagePosition(int message_position);

		int GetMessagePreventOverlap() const;
		void SetMessagePreventOverlap(int message_prevent_overlap);

		int GetMessageContinueEvents() const;
		void SetMessageContinueEvents(int message_continue_events);

		const std::string& GetFaceName() const;
		std::string& GetFaceName();
		void SetFaceName(const std::string& face_name);

		int GetFaceId() const;
		void SetFaceId(int face_id);

		bool GetFaceRight() const;
		void SetFaceRight(bool face_right);

		bool GetFaceFlip() const;
		void SetFaceFlip(bool face_flip);

		bool GetTransparent() const;
		void SetTransparent(bool transparent);

		int GetUnknown3dMusicFadeout() const;
		void SetUnknown3dMusicFadeout(int unknown_3d_music_fadeout);

		const Music& GetTitleMusic() const;
		Music& GetTitleMusic();
		void SetTitleMusic(const Music& title_music);

		const Music& GetBattleMusic() const;
		Music& GetBattleMusic();
		void SetBattleMusic(const Music& battle_music);

		const Music& GetBattleEndMusic() const;
		Music& GetBattleEndMusic();
		void SetBattleEndMusic(const Music& battle_end_music);

		const Music& GetInnMusic() const;
		Music& GetInnMusic();
		void SetInnMusic(const Music& inn_music);

		const Music& GetCurrentMusic() const;
		Music& GetCurrentMusic();
		void SetCurrentMusic(const Music& current_music);

		const Music& GetBeforeVehicleMusic() const;
		Music& GetBeforeVehicleMusic();
		void SetBeforeVehicleMusic(const Music& before_vehicle_music);

		const Music& GetBeforeBattleMusic() const;
		Music& GetBeforeBattleMusic();
		void SetBeforeBattleMusic(const Music& before_battle_music);

		const Music& GetStoredMusic() const;
		Music& GetStoredMusic();
		void SetStoredMusic(const Music& stored_music);

		const Music& GetBoatMusic() const;
		Music& GetBoatMusic();
		void SetBoatMusic(const Music& boat_music);

		const Music& GetShipMusic() const;
		Music& GetShipMusic();
		void SetShipMusic(const Music& ship_music);

		const Music& GetAirshipMusic() const;
		Music& GetAirshipMusic();
		void SetAirshipMusic(const Music& airship_music);

		const Music& GetGameoverMusic() const;
		Music& GetGameoverMusic();
		void SetGameoverMusic(const Music& gameover_music);

		const Sound& GetCursorSe() const;
		Sound& GetCursorSe();
		void SetCursorSe(const Sound& cursor_se);

		const Sound& GetDecisionSe() const;
		Sound& GetDecisionSe();
		void SetDecisionSe(const Sound& decision_se);

		const Sound& GetCancelSe() const;
		Sound& GetCancelSe();
		void SetCancelSe(const Sound& cancel_se);

		const Sound& GetBuzzerSe() const;
		Sound& GetBuzzerSe();
		void SetBuzzerSe(const Sound& buzzer_se);

		const Sound& GetBattleSe() const;
		Sound& GetBattleSe();
		void SetBattleSe(const Sound& battle_se);

		const Sound& GetEscapeSe() const;
		Sound& GetEscapeSe();
		void SetEscapeSe(const Sound& escape_se);

		const Sound& GetEnemyAttackSe() const;
		Sound& GetEnemyAttackSe();
		void SetEnemyAttackSe(const Sound& enemy_attack_se);

		const Sound& GetEnemyDamagedSe() const;
		Sound& GetEnemyDamagedSe();
		void SetEnemyDamagedSe(const Sound& enemy_damaged_se);

		const Sound& GetActorDamagedSe() const;
		Sound& GetActorDamagedSe();
		void SetActorDamagedSe(const Sound& actor_damaged_se);

		const Sound& GetDodgeSe() const;
		Sound& GetDodgeSe();
		void SetDodgeSe(const Sound& dodge_se);

		const Sound& GetEnemyDeathSe() const;
		Sound& GetEnemyDeathSe();
		void SetEnemyDeathSe(const Sound& enemy_death_se);

		const Sound& GetItemSe() const;
		Sound& GetItemSe();
		void SetItemSe(const Sound& item_se);

		uint8_t GetTransitionOut() const;
		void SetTransitionOut(uint8_t transition_out);

		uint8_t GetTransitionIn() const;
		void SetTransitionIn(uint8_t transition_in);

		uint8_t GetBattleStartFadeout() const;
		void SetBattleStartFadeout(uint8_t battle_start_fadeout);

		uint8_t GetBattleStartFadein() const;
		void SetBattleStartFadein(uint8_t battle_start_fadein);

		uint8_t GetBattleEndFadeout() const;
		void SetBattleEndFadeout(uint8_t battle_end_fadeout);

		uint8_t GetBattleEndFadein() const;
		void SetBattleEndFadein(uint8_t battle_end_fadein);

		bool GetTeleportAllowed() const;
		void SetTeleportAllowed(bool teleport_allowed);

		bool GetEscapeAllowed() const;
		void SetEscapeAllowed(bool escape_allowed);

		bool GetSaveAllowed() const;
		void SetSaveAllowed(bool save_allowed);

		bool GetMenuAllowed() const;
		void SetMenuAllowed(bool menu_allowed);

		const std::string& GetBackground() const;
		std::string& GetBackground();
		void SetBackground(const std::string& background);

		int GetSaveCount() const;
		void SetSaveCount(int save_count);

		int GetSaveSlot() const;
		void SetSaveSlot(int save_slot);

		int GetAtbMode() const;
		void SetAtbMode(int atb_mode);

	};
}

#endif
