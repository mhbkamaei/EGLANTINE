#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x2514
#define PRODUCT_ID      0x9066
#define DEVICE_VER      0x0003
#define MANUFACTURER    HBB
#define PRODUCT         EGLANTINE v0.1.3

#define TAPPING_TERM 222
#define IGNORE_MOD_TAP_INTERRUPT

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 10

#define VIAL_UNLOCK_COMBO_ROWS { 2, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 9 }
/* key matrix pins */
#define MATRIX_ROW_PINS { D1, D0, D4, C6 }
#define MATRIX_COL_PINS { D7, E6, B4, F4, F5, F6, F7, B1, B3, B2 }
//#define UNUSED_PINS { D3, D2, B5, B6, D5, B0 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define DYNAMIC_KEYMAP_LAYER_COUNT 7
#define VIAL_COMBO_ENTRIES 8
#define VIAL_TAP_DANCE_ENTRIES 8
#define DYNAMIC_KEYMAP_MACRO_COUNT 8

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5


#define VIAL_KEYBOARD_UID {0x47, 0x68, 0x04, 0x5D, 0x2B, 0x64, 0xAF, 0xB6}

#endif
