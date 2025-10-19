#include QMK_KEYBOARD_H

enum combo_events {
    JK_ESC = 0,
    KL_ENT,
    COMBO_LENGTH
};

const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM kl_combo[] = {KC_K, KC_L, COMBO_END};

combo_t key_combos[COMBO_LENGTH] = {
    [JK_ESC] = COMBO(jk_combo, KC_ESC),
    [KL_ENT] = COMBO(kl_combo, KC_ENT),
};

