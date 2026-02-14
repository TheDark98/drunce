#pragma once

// Box Drawing Characters (Single Line)
#define BOX_HORIZONTAL      "─"
#define BOX_VERTICAL        "│"
#define BOX_TOP_LEFT        "┌"
#define BOX_TOP_RIGHT       "┐"
#define BOX_BOTTOM_LEFT     "└"
#define BOX_BOTTOM_RIGHT    "┘"
#define BOX_CROSS           "┼"
#define BOX_T_DOWN          "┬"
#define BOX_T_UP            "┴"
#define BOX_T_RIGHT         "├"
#define BOX_T_LEFT          "┤"

// Box Drawing Characters (Double Line)
#define BOX_DOUBLE_H        "═"
#define BOX_DOUBLE_V        "║"
#define BOX_DOUBLE_TL       "╔"
#define BOX_DOUBLE_TR       "╗"
#define BOX_DOUBLE_BL       "╚"
#define BOX_DOUBLE_BR       "╝"
#define BOX_DOUBLE_CROSS    "╬"
#define BOX_DOUBLE_T_DOWN   "╦"
#define BOX_DOUBLE_T_UP     "╩"
#define BOX_DOUBLE_T_RIGHT  "╠"
#define BOX_DOUBLE_T_LEFT   "╣"

// Box Drawing (Heavy/Thick)
#define BOX_HEAVY_H         "━"
#define BOX_HEAVY_V         "┃"
#define BOX_HEAVY_TL        "┏"
#define BOX_HEAVY_TR        "┓"
#define BOX_HEAVY_BL        "┗"
#define BOX_HEAVY_BR        "┛"

// Card Suits
#define SUIT_HEART          "♥"
#define SUIT_DIAMOND        "♦"
#define SUIT_SPADE          "♠"
#define SUIT_CLUB           "♣"

// Symbols
#define SYMBOL_BULLET       "•"
#define SYMBOL_ARROW_RIGHT  "→"
#define SYMBOL_ARROW_LEFT   "←"
#define SYMBOL_ARROW_UP     "↑"
#define SYMBOL_ARROW_DOWN   "↓"
#define SYMBOL_CHECK        "✓"
#define SYMBOL_CROSS        "✗"
#define SYMBOL_STAR         "★"
#define SYMBOL_CIRCLE       "●"
#define SYMBOL_SQUARE       "■"
#define SYMBOL_TRIANGLE     "▲"
#define SYMBOL_DOLLAR       "$"
#define SYMBOL_CROWN        "♔"

// Blocks/Shading
#define BLOCK_FULL          "█"
#define BLOCK_DARK          "▓"
#define BLOCK_MEDIUM        "▒"
#define BLOCK_LIGHT         "░"
#define BLOCK_HALF_LEFT     "▌"
#define BLOCK_HALF_RIGHT    "▐"
#define BLOCK_UPPER_HALF    "▀"
#define BLOCK_LOWER_HALF    "▄"

// Basic ASCII fallbacks (if Unicode not supported)
#define ASCII_H_LINE        "-"
#define ASCII_V_LINE        "|"
#define ASCII_CORNER        "+"
#define ASCII_HEART         "<3"
#define ASCII_DIAMOND       "<>"
#define ASCII_SPADE         "^"
#define ASCII_CLUB          "&"