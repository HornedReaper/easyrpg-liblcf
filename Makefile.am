ACLOCAL_AMFLAGS = --install -I builds/autoconf/m4
EXTRA_DIST = builds generator
pkgconfigdir = ${libdir}/pkgconfig
pkgconfig_DATA = builds/liblcf.pc

lib_LTLIBRARIES = liblcf.la
liblcf_la_CPPFLAGS = \
	$(AM_CPPFLAGS) \
	-I$(srcdir)/src \
	-I$(srcdir)/src/generated
liblcf_la_CXXFLAGS = \
	-std=c++11 \
	$(AM_CXXFLAGS) \
	$(EXPAT_CFLAGS) \
	$(ICU_CFLAGS)
liblcf_la_LIBADD = \
	$(EXPAT_LIBS) \
	$(ICU_LIBS)
liblcf_la_LDFLAGS = \
	$(AM_LDFLAGS) \
	-no-undefined
liblcf_la_SOURCES = \
	src/reader_struct.cpp \
	src/data.cpp \
	src/ini.cpp \
	src/inireader.cpp \
	src/ldb_equipment.cpp \
	src/ldb_eventcommand.cpp \
	src/ldb_parameters.cpp \
	src/ldb_reader.cpp \
	src/lmt_reader.cpp \
	src/lmt_rect.cpp \
	src/lmt_treemap.cpp \
	src/lmu_movecommand.cpp \
	src/lmu_reader.cpp \
	src/lsd_reader.cpp \
	src/reader_flags.cpp \
	src/reader_lcf.cpp \
	src/reader_util.cpp \
	src/reader_xml.cpp \
	src/rpg_fixup.cpp \
	src/rpg_setup.cpp \
	src/writer_lcf.cpp \
	src/writer_xml.cpp \
	src/generated/ldb_actor.cpp \
	src/generated/ldb_animationcelldata.cpp \
	src/generated/ldb_animation.cpp \
	src/generated/ldb_animationframe.cpp \
	src/generated/ldb_animationtiming.cpp \
	src/generated/ldb_attribute.cpp \
	src/generated/ldb_battlecommand.cpp \
	src/generated/ldb_battlecommands.cpp \
	src/generated/ldb_battleranimation.cpp \
	src/generated/ldb_battleranimationdata.cpp \
	src/generated/ldb_battleranimationextension.cpp \
	src/generated/ldb_chipset.cpp \
	src/generated/ldb_class.cpp \
	src/generated/ldb_commonevent.cpp \
	src/generated/ldb_database.cpp \
	src/generated/ldb_enemyaction.cpp \
	src/generated/ldb_enemy.cpp \
	src/generated/ldb_itemanimation.cpp \
	src/generated/ldb_item.cpp \
	src/generated/ldb_learning.cpp \
	src/generated/ldb_music.cpp \
	src/generated/ldb_skill.cpp \
	src/generated/ldb_sound.cpp \
	src/generated/ldb_state.cpp \
	src/generated/ldb_switch.cpp \
	src/generated/ldb_system.cpp \
	src/generated/ldb_terms.cpp \
	src/generated/ldb_terrain.cpp \
	src/generated/ldb_terrain_flags.cpp \
	src/generated/ldb_testbattler.cpp \
	src/generated/ldb_troop.cpp \
	src/generated/ldb_troopmember.cpp \
	src/generated/ldb_trooppagecondition.cpp \
	src/generated/ldb_trooppagecondition_flags.cpp \
	src/generated/ldb_trooppage.cpp \
	src/generated/ldb_variable.cpp \
	src/generated/lmt_encounter.cpp \
	src/generated/lmt_mapinfo.cpp \
	src/generated/lmt_start.cpp \
	src/generated/lmu_event.cpp \
	src/generated/lmu_eventpagecondition.cpp \
	src/generated/lmu_eventpagecondition_flags.cpp \
	src/generated/lmu_eventpage.cpp \
	src/generated/lmu_map.cpp \
	src/generated/lmu_moveroute.cpp \
	src/generated/lsd_saveactor.cpp \
	src/generated/lsd_savecommonevent.cpp \
	src/generated/lsd_save.cpp \
	src/generated/lsd_saveeventcommands.cpp \
	src/generated/lsd_saveeventdata.cpp \
	src/generated/lsd_saveevents.cpp \
	src/generated/lsd_saveinventory.cpp \
	src/generated/lsd_savemapevent.cpp \
	src/generated/lsd_savemapinfo.cpp \
	src/generated/lsd_savepartylocation.cpp \
	src/generated/lsd_savepicture.cpp \
	src/generated/lsd_savescreen.cpp \
	src/generated/lsd_savesystem.cpp \
	src/generated/lsd_savetarget.cpp \
	src/generated/lsd_savetitle.cpp \
	src/generated/lsd_savevehiclelocation.cpp \
	src/boost/preprocessor/cat.hpp \
	src/boost/preprocessor/stringize.hpp \
	src/boost/preprocessor/config/config.hpp
pkginclude_HEADERS = \
	src/command_codes.h \
	src/data.h \
	src/ini.h \
	src/inireader.h \
	src/ldb_reader.h \
	src/lmt_reader.h \
	src/lmu_reader.h \
	src/lsd_reader.h \
	src/reader_lcf.h \
	src/reader_options.h \
	src/reader_struct.h \
	src/reader_types.h \
	src/reader_util.h \
	src/reader_xml.h \
	src/writer_lcf.h \
	src/writer_xml.h \
	src/generated/ldb_chunks_gen.h \
	src/generated/lmt_chunks_gen.h \
	src/generated/lmu_chunks_gen.h \
	src/generated/lsd_chunks_gen.h \
	src/rpg_actor.h \
	src/rpg_animationcelldata.h \
	src/rpg_animationframe.h \
	src/rpg_animation.h \
	src/rpg_animationtiming.h \
	src/rpg_attribute.h \
	src/rpg_battlecommand.h \
	src/rpg_battlecommands.h \
	src/rpg_battleranimationdata.h \
	src/rpg_battleranimationextension.h \
	src/rpg_battleranimation.h \
	src/rpg_chipset.h \
	src/rpg_class.h \
	src/rpg_commonevent.h \
	src/rpg_database.h \
	src/rpg_encounter.h \
	src/rpg_enemyaction.h \
	src/rpg_enemy.h \
	src/rpg_equipment.h \
	src/rpg_eventcommand.h \
	src/rpg_event.h \
	src/rpg_eventpagecondition.h \
	src/rpg_eventpage.h \
	src/rpg_itemanimation.h \
	src/rpg_item.h \
	src/rpg_learning.h \
	src/rpg_map.h \
	src/rpg_mapinfo.h \
	src/rpg_movecommand.h \
	src/rpg_moveroute.h \
	src/rpg_music.h \
	src/rpg_parameters.h \
	src/rpg_rect.h \
	src/rpg_saveactor.h \
	src/rpg_savecommonevent.h \
	src/rpg_saveeventcommands.h \
	src/rpg_saveeventdata.h \
	src/rpg_saveevents.h \
	src/rpg_save.h \
	src/rpg_saveinventory.h \
	src/rpg_savemapevent.h \
	src/rpg_savemapinfo.h \
	src/rpg_savepartylocation.h \
	src/rpg_savepicture.h \
	src/rpg_savescreen.h \
	src/rpg_savesystem.h \
	src/rpg_savetarget.h \
	src/rpg_savetitle.h \
	src/rpg_savevehiclelocation.h \
	src/rpg_skill.h \
	src/rpg_sound.h \
	src/rpg_start.h \
	src/rpg_state.h \
	src/rpg_switch.h \
	src/rpg_system.h \
	src/rpg_terms.h \
	src/rpg_terrain.h \
	src/rpg_testbattler.h \
	src/rpg_treemap.h \
	src/rpg_troop.h \
	src/rpg_troopmember.h \
	src/rpg_trooppagecondition.h \
	src/rpg_trooppage.h \
	src/rpg_variable.h \
	src/generated/rpg_actor_gen.h \
	src/generated/rpg_animationcelldata_gen.h \
	src/generated/rpg_animationframe_gen.h \
	src/generated/rpg_animation_gen.h \
	src/generated/rpg_animationtiming_gen.h \
	src/generated/rpg_attribute_gen.h \
	src/generated/rpg_battlecommand_gen.h \
	src/generated/rpg_battlecommands_gen.h \
	src/generated/rpg_battleranimationdata_gen.h \
	src/generated/rpg_battleranimationextension_gen.h \
	src/generated/rpg_battleranimation_gen.h \
	src/generated/rpg_chipset_gen.h \
	src/generated/rpg_class_gen.h \
	src/generated/rpg_commonevent_gen.h \
	src/generated/rpg_database_gen.h \
	src/generated/rpg_encounter_gen.h \
	src/generated/rpg_enemyaction_gen.h \
	src/generated/rpg_enemy_gen.h \
	src/generated/rpg_equipment_gen.h \
	src/generated/rpg_eventcommand_gen.h \
	src/generated/rpg_event_gen.h \
	src/generated/rpg_eventpagecondition_gen.h \
	src/generated/rpg_eventpage_gen.h \
	src/generated/rpg_itemanimation_gen.h \
	src/generated/rpg_item_gen.h \
	src/generated/rpg_learning_gen.h \
	src/generated/rpg_map_gen.h \
	src/generated/rpg_mapinfo_gen.h \
	src/generated/rpg_movecommand_gen.h \
	src/generated/rpg_moveroute_gen.h \
	src/generated/rpg_music_gen.h \
	src/generated/rpg_parameters_gen.h \
	src/generated/rpg_rect_gen.h \
	src/generated/rpg_saveactor_gen.h \
	src/generated/rpg_savecommonevent_gen.h \
	src/generated/rpg_saveeventcommands_gen.h \
	src/generated/rpg_saveeventdata_gen.h \
	src/generated/rpg_saveevents_gen.h \
	src/generated/rpg_save_gen.h \
	src/generated/rpg_saveinventory_gen.h \
	src/generated/rpg_savemapevent_gen.h \
	src/generated/rpg_savemapinfo_gen.h \
	src/generated/rpg_savepartylocation_gen.h \
	src/generated/rpg_savepicture_gen.h \
	src/generated/rpg_savescreen_gen.h \
	src/generated/rpg_savesystem_gen.h \
	src/generated/rpg_savetarget_gen.h \
	src/generated/rpg_savetitle_gen.h \
	src/generated/rpg_savevehiclelocation_gen.h \
	src/generated/rpg_skill_gen.h \
	src/generated/rpg_sound_gen.h \
	src/generated/rpg_start_gen.h \
	src/generated/rpg_state_gen.h \
	src/generated/rpg_switch_gen.h \
	src/generated/rpg_system_gen.h \
	src/generated/rpg_terms_gen.h \
	src/generated/rpg_terrain_gen.h \
	src/generated/rpg_testbattler_gen.h \
	src/generated/rpg_treemap_gen.h \
	src/generated/rpg_troop_gen.h \
	src/generated/rpg_troopmember_gen.h \
	src/generated/rpg_trooppagecondition_gen.h \
	src/generated/rpg_trooppage_gen.h \
	src/generated/rpg_variable_gen.h

check_PROGRAMS = time_stamp
TESTS = time_stamp
time_stamp_SOURCES = tests/time_stamp.cpp
time_stamp_CPPFLAGS = \
	-I$(srcdir)/src \
	-I$(srcdir)/src/generated
time_stamp_CXXFLAGS = \
	$(EXPAT_CXXFLAGS) \
	$(ICU_CXXFLAGS)
time_stamp_LDADD = \
	liblcf.la \
	$(EXPAT_LIBS) \
	$(ICU_LIBS)
time_stamp_LDFLAGS = -no-install
