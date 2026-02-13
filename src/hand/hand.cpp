#include "hand.h"

DrunkEngine::Hand::Hand() 
    : handValue(0), handIndex(0) {
}

void DrunkEngine::Hand::AddCard(const DrunkEngine::Card card) {
    handValue = calcValue();
}

std::array<DrunkEngine::Card, 11> DrunkEngine::Hand::GetHand() const {
    return cards;
}

uint8_t DrunkEngine::Hand::GetValue() const {
    return handValue;
}

uint8_t DrunkEngine::Hand::calcValue() {
    using namespace DrunkEngine;

    if (handIndex == 0) return 0;

    uint8_t totalValue = 0;
    uint8_t aceNumber = 0;

    for (uint8_t i = 0; i < HAND_SIZE - 1; i++) {

        if (cards[i].value != CardType::Value::ACE)
            totalValue += static_cast<uint8_t>(cards[i].value);
        else
            aceNumber++;
    }

    if (aceNumber > 0) {
        const uint8_t totalMaxAce = aceNumber + 10;

        if (uint8_t sum = totalValue + aceNumber < 21) totalValue = sum;
        else totalValue += aceNumber;
    }

    return totalValue;
}