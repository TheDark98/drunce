#pragma once

#include <utility>

namespace cards {

    enum seed {
        SNull,
        Heart,
        Diamond,
        Spade,
        Club
    };

    enum value {
        VNull,
        Ace,
        Two,
        Three,
        Four,
        Five,
        Six,
        Seven,
        Eight,
        Nine,
        Ten,
        Jack = 10,
        Queen = 10,
        King = 10
    };

    unsigned int handValue(const std::pair<cards::value, cards::seed> cardType[12]);
}