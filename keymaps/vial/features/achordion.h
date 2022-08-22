
#pragma once

#include "quantum.h"

// Call this function from `process_record_user()` as
//
//   bool process_record_user(uint16_t keycode, keyrecord_t* record) {
//     if (!process_achordion(keycode, record)) { return false; }
//     // Your macros...
//     return true;
//   }
bool process_achordion(uint16_t keycode, keyrecord_t* record);

// Call this function from `matrix_scan_user()` as
//
//   void matrix_scan_user(void) {
//     achordion_task();
//   }
void achordion_task(void);

// (Optional) In your keymap.c, define the callback
//
//   bool achordion_chord(uint16_t tap_hold_keycode,
//                        keyrecord_t* tap_hold_record,
//                        uint16_t other_keycode,
//                        keyrecord_t* other_record) {
//      // Conditions...
//   }
//
// This callback is called if while `tap_hold_keycode` is pressed,
// `other_keycode` is pressed. Return true if the tap-hold key should be
// considered held, or false to consider it tapped.
bool achordion_chord(uint16_t tap_hold_keycode,
                     keyrecord_t* tap_hold_record,
                     uint16_t other_keycode,
                     keyrecord_t* other_record);

// (Optional) In your keymap.c, define the callback
//
//   uint16_t achordion_timeout(uint16_t tap_hold_keycode) {
//     // ...
//   }
//
// The callback determines Achordion's timeout duration for `tap_hold_keycode`
// in units of milliseconds. The timeout be in the range 0 to 32767 ms (upper
// bound is due to 16-bit timer limitations). Use a timeout of 0 to bypass
// Achordion.
uint16_t achordion_timeout(uint16_t tap_hold_keycode);

// (Optional) Callback defining which mods are "eagerly" applied while a mod-tap
// key is still being settled. This is helpful to reduce delay particularly when
// using mod-tap keys with an external mouse.
//
// Define this callback in your keymap.c. The default callback is
//
//   bool achordion_eager_mod(uint8_t mod) {
//     switch (mod) {
//       case MOD_LSFT:
//       case MOD_RSFT:
//       case MOD_LCTL:
//       case MOD_RCTL:
//         return true;  // Eagerly apply Shift and Ctrl mods.
//
//      default:
//        return false;
//     }
//   }
//
// NOTE: `mod` should be compared with `MOD_` prefixed codes, not `KC_`.
bool achordion_eager_mod(uint8_t mod);

// Returns true if the args come from keys on opposite hands.
bool achordion_opposite_hands(const keyrecord_t* tap_hold_record,
                              const keyrecord_t* other_record);
