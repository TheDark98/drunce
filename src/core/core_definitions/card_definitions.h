#pragma once

#define FIGURE_CARD_VALUE 10
#define MAX_ACE_VALUE 11

namespace DrunkEngine::CardTrait
{
    enum class Suit
    {
        UNDEFINED,
        HEART,
        DIAMOND,
        SPADE,
        CLUB
    };

    enum class Rank
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