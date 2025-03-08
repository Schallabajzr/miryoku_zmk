// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define XXX &none
#define ULK &studio_unlock

/ {
    macros {
        macro_eurkey: macro_eurkey {
                compatible = "zmk,behavior-macro-one-param";
                #binding-cells = <1>;
                bindings =
                    <&macro_press &kp LSHFT>,       /* Press Left Shift */
                    <&macro_press &kp RALT>,        /* Press Right Alt */
                    <&macro_tap   &kp N6>,          /* Tap key '6' */
                    <&macro_release &kp RALT>,      /* Release Right Alt */
                    <&macro_release &kp LSHFT>,     /* Release Left Shift */
                    <&macro_param_1to1>,            /* Forward the macro parameter */
                    <&kp MACRO_PLACEHOLDER>;        /* Placeholder to be replaced at runtime */
              };
    };
};;

#define MIRYOKU_LAYER_EURKEY                                          \
    XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX,                 \
        XXX, XXX, &macro_eurkey S, XXX, XXX, XXX, XXX, XXX, XXX, XXX,             \
        &macro_eurkey Z, XXX, &macro_eurkey C, XXX, XXX, XXX, XXX, XXX, XXX, XXX, \
        XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX

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
