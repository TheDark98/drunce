#include "card.h"

#include <hand_definitions.h>

DrunkEngine::Card::Card(CardTrait::Rank rank, CardTrait::Suit suit)
    : m_rank(rank), m_suit(suit)
{
}

DrunkEngine::Card::Card()
    : m_rank(CardTrait::Rank::UNDEFINED), m_suit(CardTrait::Suit::UNDEFINED)
{
}

void DrunkEngine::Card::SetTraits(const CardTrait::Rank rank, const CardTrait::Suit suit)
{
    if (rank == CardTrait::Rank::UNDEFINED && suit == CardTrait::Suit::UNDEFINED)
        return;

    m_rank = rank;
    m_suit = suit;
}

uint8_t DrunkEngine::Card::GetValue() const
{
    const uint8_t value = static_cast<uint8_t>(m_rank);
    if (value < FIGURE_CARD_VALUE)
        return value;
    return FIGURE_CARD_VALUE;
}

uint8_t DrunkEngine::Card::GetRank() const
{
    return static_cast<uint8_t>(m_rank);
}

uint8_t DrunkEngine::Card::GetSuit() const
{
    return static_cast<uint8_t>(m_suit);
}

uint8_t DrunkEngine::Card::operator+(const Card other) const
{
    return GetValue() + other.GetValue();
}

bool DrunkEngine::Card::operator==(const Card other) const
{
    return m_rank == other.m_rank && m_suit == other.m_suit;
}

bool DrunkEngine::Card::operator!=(const Card other) const
{
    return !(*this == other);
}

bool DrunkEngine::Card::operator==(const CardTrait::Rank rank) const
{
    return m_rank == rank;
}

bool DrunkEngine::Card::operator!=(const CardTrait::Rank rank) const
{
    return !(*this == rank);
}

bool DrunkEngine::Card::operator==(const CardTrait::Suit suit) const
{
    return m_suit == suit;
}

bool DrunkEngine::Card::operator!=(const CardTrait::Suit suit) const
{
    return !(*this == suit);
}