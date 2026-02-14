#pragma once

#include <string_view>
#include <cstdint>

#include <colors.h>

namespace DrunkEngine
{
    namespace CardType
    {
        constexpr std::string_view SeedName[5] = {
            "Undefined",
            "Heart",
            "Diamond",
            "Spade",
            "Club"
        };

        constexpr std::string_view SeedColor[5] = {
            ERROR_COLOR,
            HEART_COLOR,
            DIAMOND_COLOR,
            SPADE_COLOR,
            CLUB_COLOR
        };

        enum class Seed
        {
            UNDEFINED,
            HEART,
            DIAMOND,
            SPADE,
            CLUB
        };

        constexpr std::string_view ValueName[14] = {
            "Undefined",
            "Ace",
            "Two",
            "Three",
            "Four",
            "Five",
            "Six",
            "Seven",
            "Eight",
            "Nine",
            "Ten",
            "Jack",
            "Queen",
            "King"
        };

        constexpr std::string_view ValueColor[14] = {
            ERROR_COLOR,
            ACE_COLOR,
            TWO_COLOR,
            THREE_COLOR,
            FOUR_COLOR,
            FIVE_COLOR,
            SIX_COLOR,
            SEVEN_COLOR,
            EIGHT_COLOR,
            NINE_COLOR,
            TEN_COLOR,
            JACK_COLOR,
            QUEEN_COLOR,
            KING_COLOR
        };

        enum class Value
        {
            UNDEFINED,
            ACE,
            TWO,
            THREE,
            FOUR,
            FIVE,
            SIX,
            SEVEN,
            EIGHT,
            NINE,
            TEN,
            JACK,
            QUEEN,
            KING
        };
    }
}