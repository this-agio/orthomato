#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [0] = LAYOUT_ortho_4x12(KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
                                KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_GRV, KC_QUOT,
                                KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_UP, KC_MINS,
                                KC_LCTL, KC_LGUI, KC_LALT, MO(1), MO(2), KC_ENT, KC_SPC, MO(3), MO(4), KC_LEFT, KC_DOWN, KC_RGHT),
        [1] = LAYOUT_ortho_4x12(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
                                KC_NO, LALT(KC_1), LALT(KC_2), LALT(KC_3), LALT(KC_4), LALT(KC_5), LALT(KC_6), LALT(KC_7), LALT(KC_8), LALT(KC_9), KC_NO, KC_NO,
                                KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RALT(KC_GRV), KC_PGUP, RALT(KC_QUOT),
                                KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_PGDN, KC_END),
        [2] = LAYOUT_ortho_4x12(KC_LEAD, KC_NO, KC_NO, KC_PEQL, KC_NO, KC_NO, KC_NO, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_PPLS, KC_NO,
                                KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P4, KC_P5, KC_P6, KC_PMNS, KC_PMNS,
                                KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P1, KC_P2, KC_P3, KC_PAST, KC_PAST,
                                KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_ENT, KC_NUM, KC_P0, KC_PDOT, KC_PDOT, KC_PSLS, KC_PEQL),
        [3] = LAYOUT_ortho_4x12(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_DEL,
                                KC_TAB, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LPRN, KC_RPRN,
                                KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SCLN, KC_QUOT, KC_LBRC, KC_RBRC,
                                KC_LCTL, KC_NO, KC_LALT, KC_NO, KC_NO, KC_SPC, KC_ENT, KC_TRNS, MO(5), KC_NO, KC_LCBR, KC_RCBR),
        [4] = LAYOUT_ortho_4x12(QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DEL,
                                AU_TOG, KC_NO, KC_PWR, KC_NO, KC_MYCM, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                MU_TOG, KC_NO, KC_NO, KC_CALC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MUTE, KC_VOLU, KC_MPLY,
                                KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, MO(5), KC_TRNS, KC_MPRV, KC_VOLD, KC_MNXT),
        [5] = LAYOUT_ortho_4x12(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                RGB_SPI, RGB_SPD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                RGB_HUI, RGB_HUD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                RGB_TOG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO)
};

bool did_leader_succeed;
#ifdef AUDIO_ENABLE
//float leader_start_song[][2] = SONG(ONE_UP_SOUND);
//float leader_succeed_song[][2] = SONG(ALL_STAR);
//float leader_fail_song[][2] = SONG(RICK_ROLL);
#endif


LEADER_EXTERNS();

void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    did_leader_succeed = leading = false;

    SEQ_ONE_KEY(KC_Q) {
      SEND_STRING("Asd04081989.");
      did_leader_succeed = true;
    }
    SEQ_ONE_KEY(KC_W) {
      SEND_STRING("Asd04081989.2");
      did_leader_succeed = true;
    }
    leader_end();
  }
}

//void leader_start(void) {
//#ifdef AUDIO_ENABLE
//    PLAY_SONG(leader_start_song);
//#endif
//}
//
//void leader_end(void) {
//  if (did_leader_succeed) {
//    PLAY_SONG(leader_succeed_song);
//  } else {
//#ifdef AUDIO_ENABLE
//    PLAY_SONG(leader_fail_song);
//#endif
//  }
//}
