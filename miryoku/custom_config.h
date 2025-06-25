// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define XXX &none
#define ULK &studio_unlock
// s with caron (š)
ZMK_MACRO(s_caron,
    wait-ms = <20>;
    tap-ms = <30>;
    bindings = <
        &macro_press &kp RALT &kp LSHFT
        &macro_tap &kp N6
        &macro_release &kp RALT &kp LSHFT
        &kp S
    >;
);

// c with caron (č)
ZMK_MACRO(c_caron,
    wait-ms = <20>;
    tap-ms = <30>;
    bindings = <
        &macro_press &kp RALT &kp LSHFT
        &macro_tap &kp N6
        &macro_release &kp RALT &kp LSHFT
        &kp C
    >;
);

// z with caron (ž)
ZMK_MACRO(z_caron,
    wait-ms = <20>;
    tap-ms = <30>;
    bindings = <
        &macro_press &kp RALT &kp LSHFT
        &macro_tap &kp N6
        &macro_release &kp RALT &kp LSHFT
        &kp Z
    >;
);

// o with umlaut (ö)
ZMK_MACRO(o_umlaut,
    wait-ms = <20>;
    tap-ms = <30>;
    bindings = <
        &macro_press &kp RALT &kp LSHFT
        &macro_tap &kp APOS
        &macro_release &kp RALT &kp LSHFT
        &kp O
    >;
);

// u with umlaut (ü)
ZMK_MACRO(u_umlaut,
    wait-ms = <20>;
    tap-ms = <30>;
    bindings = <
        &macro_press &kp RALT &kp LSHFT
        &macro_tap &kp APOS
        &macro_release &kp RALT &kp LSHFT
        &kp U
    >;
);

#define S_CARON     &s_caron
#define C_CARON     &c_caron
#define Z_CARON     &z_caron
#define O_UMLAUT    &o_umlaut
#define U_UMLAUT    &u_umlaut


#define MIRYOKU_LAYER_EURKEY \
XXX,XXX,XXX,XXX,XXX,XXX,XXX,U_UMLAUT,XXX,XXX, \
XXX,XXX,S_CARON,XXX,XXX,XXX,XXX,XXX,XXX,O_UMLAUT, \
Z_CARON,XXX,C_CARON,XXX,XXX,XXX,XXX,XXX,XXX,XXX, \
XXX,XXX,XXX,XXX,XXX,XXX,XXX,XXX,XXX,XXX

#define MIRYOKU_LAYOUTMAPPING_MEDIA( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
ULK  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
XXX  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
XXX  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
               K32  K33  K34       K35  K36  K37

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(EURKEY,   "EurKey")

#define MIRYOKU_LAYERMAPPING_EURKEY MIRYOKU_MAPPING

#define U_BASE        0
#define U_EXTRA       1
#define U_TAP         2
#define U_BUTTON      3
#define U_NAV         4
#define U_MOUSE       5
#define U_MEDIA       6
#define U_NUM         7
#define U_SYM         8
#define U_FUN         9
#define U_EURKEY      10
