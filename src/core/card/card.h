#pragma once

#include <cstdint>

#include "card_definitions.h"

namespace DrunkEngine
{
    class Card
    {
    public:
        Card(CardTrait::Rank rank, CardTrait::Suit suit);
        Card();

        void SetTraits(const CardTrait::Rank rank, const CardTrait::Suit suit);
        uint8_t GetValue() const;
        uint8_t GetRank() const;
        uint8_t GetSuit() const;

        uint8_t operator+(const Card other) const;
        bool operator==(const Card other) const;
        bool operator!=(const Card other) const;
        bool operator==(const CardTrait::Rank rank) const;
        bool operator!=(const CardTrait::Rank rank) const;
        bool operator==(const CardTrait::Suit suit) const;
        bool operator!=(const CardTrait::Suit suit) const;

    private:
        CardTrait::Rank m_rank;
        CardTrait::Suit m_suit;
    };
}