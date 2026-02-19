#include "hand.h"

DrunkEngine::Hand::Hand()
{
    cards.reserve(MAX_HAND_SIZE);
}

uint8_t DrunkEngine::Hand::GetValue(const bool dealerSecretCard)
{
    uint8_t handValue = 0;
    uint8_t aceCount = 0;
    uint8_t cardCount = 0;

    for (const auto &card : cards)
    {
        cardCount++;
        if (dealerSecretCard && cardCount == 2)
            continue;

        if (card.GetValue() == static_cast<uint8_t>(CardTrait::Rank::ACE))
        {
            aceCount++;
            continue;
        }
        handValue += card.GetValue();
    }

    if (handValue + MAX_ACE_VALUE <= MAX_HAND_VALUE && aceCount > 0)
    {
        handValue += MAX_ACE_VALUE;
        aceCount--;
    }
    handValue += aceCount;
    return handValue;
}

void DrunkEngine::Hand::operator+=(const Card other)
{
    cards.push_back(other);
}

bool DrunkEngine::Hand::operator>(const uint8_t other)
{
    return GetValue(false) > other;
}

bool DrunkEngine::Hand::operator<(const uint8_t other)
{
    return GetValue(false) < other;
}

bool DrunkEngine::Hand::operator>=(const uint8_t other)
{
    return GetValue(false) >= other;
}

bool DrunkEngine::Hand::operator<=(const uint8_t other)
{
    return GetValue(false) <= other;
}

bool DrunkEngine::Hand::operator==(const uint8_t other)
{
    return GetValue(false) == other;
}

bool DrunkEngine::Hand::operator!=(const uint8_t other)
{
    return GetValue(false) != other;
}