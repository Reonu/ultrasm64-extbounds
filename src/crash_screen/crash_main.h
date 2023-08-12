#pragma once

#include <ultra64.h>

#include "crash_types.h"

#include "address_select.h"
#include "crash_controls.h"
#include "crash_draw.h"
#include "crash_print.h"
#include "insn_disasm.h"
#include "map_parser.h"
#include "memory_read.h"


extern struct CSSettingsEntry gCSSettings[NUM_CS_OPTS];

extern struct CSPage gCSPages[NUM_PAGES];
extern enum CrashScreenPages gCSPageID;

extern struct CSThreadInfo* gActiveCSThreadInfo;
extern OSThread* gCrashedThread;

extern Address gSelectedAddress;


_Bool crash_screen_setting_is_header(enum CSSettings settingID);
void crash_screen_inc_setting(enum CSSettings settingID, SettingsType inc);
void crash_screen_reset_setting(enum CSSettings settingID);
void crash_screen_reset_settings_section(enum CSSettings settingID);
void crash_screen_reset_all_settings(void);
_Bool crash_screen_check_for_changed_settings(void);
void create_crash_screen_thread(void);