// Helpers for deadkeys
// Credit: https://github.com/AndrewMSHowe/RolioFirmware/blob/andrew/boards/shields/rolio/helpers.h

/* Dead key macros
 * These create mod morphs that switch on the left or right shift keys to obtain the upper case letter; both send the same dead key first.
 * It's a bit of a hack because these are designed to be used within other mod morphs with AltGr (Right Alt) as the modifier.
 * The hack is to unpress RALT before sending the dead key and next key, then press it again.
 */
#define DEADKEY_MACRO(NAME, DEADKEY, NEXTKEY) ZMK_MACRO(NAME, \
    bindings = <&macro_release &kp RALT>, <&macro_tap &kp DEADKEY &kp NEXTKEY>, <&macro_press &kp RALT>; \
)

#define DEADKEY_MODMORPH(NAME, LOWER, UPPER) ZMK_MOD_MORPH(NAME, \
    bindings = <LOWER>, <UPPER>; \
    mods = <(MOD_LSFT | MOD_RSFT)>; \
)

#define DEADKEY(NAME, DEADKEY, LETTER) \
    DEADKEY_MACRO(NAME ## _lower, DEADKEY, LETTER) \
    DEADKEY_MACRO(NAME ## _upper, DEADKEY, LS(LETTER)) \
    DEADKEY_MODMORPH(NAME, &NAME ## _lower, &NAME ## _upper)
