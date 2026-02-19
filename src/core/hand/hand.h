#pragma once

#include <vector>

#include <hand_definitions.h>
#include <card.h>

namespace DrunkEngine
{
    struct Hand
    {
        Hand();

        uint8_t GetValue(const bool dealerSecretCard);

        void operator+=(const Card other);
        bool operator>(const uint8_t other);
        bool operator<(const uint8_t other);
        bool operator>=(const uint8_t other);
        bool operator<=(const uint8_t other);
        bool operator==(const uint8_t other);
        bool operator!=(const uint8_t other);

        std::vector<Card> cards;
    };
}