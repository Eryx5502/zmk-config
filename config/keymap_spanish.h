/* Base layer
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ º │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ' │ ¡ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ ` │ + │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ñ │ ´ │ Ç │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define ES_MORD GRAVE // º
#define ES_1 NUMBER_1 // 1
#define ES_2 NUMBER_2 // 2
#define ES_3 NUMBER_3 // 3
#define ES_4 NUMBER_4 // 4
#define ES_5 NUMBER_5 // 5
#define ES_6 NUMBER_6 // 6
#define ES_7 NUMBER_7 // 7
#define ES_8 NUMBER_8 // 8
#define ES_9 NUMBER_9 // 9
#define ES_0 NUMBER_0 // 0
#define ES_QUOT MINUS // '
#define ES_IEXL EQUAL // ¡
// Row 2
#define ES_Q Q       // Q
#define ES_W W       // W
#define ES_E E       // E
#define ES_R R       // R
#define ES_T T       // T
#define ES_Y Y       // Y
#define ES_U U       // U
#define ES_I I       // I
#define ES_O O       // O
#define ES_P P       // P
#define ES_GRV LBKT  // ` (dead)
#define ES_PLUS RBKT // +
// Row 3
#define ES_A A              // A
#define ES_S S              // S
#define ES_D D              // D
#define ES_F F              // F
#define ES_G G              // G
#define ES_H H              // H
#define ES_J J              // J
#define ES_K K              // K
#define ES_L L              // L
#define ES_NTIL SEMICOLON   // Ñ
#define ES_ACUT APOSTROPHE  // ´ (dead)
#define ES_CCED NON_US_HASH // Ç
// Row 4
#define ES_LABK NON_US_BACKSLASH // <
#define ES_Z Z                   // Z
#define ES_X X                   // X
#define ES_C C                   // C
#define ES_V V                   // V
#define ES_B B                   // B
#define ES_N N                   // N
#define ES_M M                   // M
#define ES_COMM COMMA            // ,
#define ES_DOT DOT               // .
#define ES_MINS SLASH            // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ª │ ! │ " │ · │ $ │ % │ & │ / │ ( │ ) │ = │ ? │ ¿ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ ^ │ * │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │ ¨ │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define ES_FORD LS(ES_MORD) // ª
#define ES_EXLM LS(ES_1)    // !
#define ES_DQUO LS(ES_2)    // "
#define ES_BULT LS(ES_3)    // ·
#define ES_DLR LS(ES_4)     // $
#define ES_PERC LS(ES_5)    // %
#define ES_AMPR LS(ES_6)    // &
#define ES_SLSH LS(ES_7)    // /
#define ES_LPRN LS(ES_8)    // (
#define ES_RPRN LS(ES_9)    // )
#define ES_EQL LS(ES_0)     // =
#define ES_QUES LS(ES_QUOT) // ?
#define ES_IQUE LS(ES_IEXL) // ¿
// Row 2
#define ES_CIRC LS(ES_GRV)  // ^ (dead)
#define ES_ASTR LS(ES_PLUS) // *
// Row 3
#define ES_DIAE LS(ES_ACUT) // ¨ (dead)
// Row 4
#define ES_RABK LS(ES_LABK) // >
#define ES_SCLN LS(COMMA)   // ;
#define ES_COLN LS(DOT)     // :
#define ES_UNDS LS(ES_MINS) // _

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ \ │ | │ @ │ # │ ~ │ € │ ¬ │   │   │   │   │   │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ [ │ ] │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │ { │ } │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define ES_BSLS RA(ES_MORD) // (backslash)
#define ES_PIPE RA(ES_1)    // |
#define ES_AT RA(ES_2)      // @
#define ES_HASH RA(ES_3)    // #
#define ES_TILD RA(ES_4)    // ~
#define ES_EURO RA(ES_5)    // €
#define ES_NOT RA(ES_6)     // ¬
// Row 2
#define ES_LBRC RA(ES_GRV)  // [
#define ES_RBRC RA(ES_PLUS) // ]
// Row 3
#define ES_LCBR RA(ES_ACUT) // {
#define ES_RCBR RA(ES_CCED) // }
