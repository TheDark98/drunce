#pragma once

#include <cstdint>
#include <array>
#include <vector>

#include <deck_definitions.h>
#include <hand_definitions.h>
#include <card.h>
#include <hand.h>

namespace DrunkEngine
{
    class DeckHandler
    {
    public:
        DeckHandler(const uint8_t playersCount);
        DeckHandler(const uint8_t playersCount, const uint64_t seed);

        void SetDeckSeed(const uint64_t seed);
        uint64_t GetDeckSeed() const;

        Card Draw(const uint8_t playerIndex);
        Card Draw();
        Card PeekCard(const uint8_t index) const;
        uint8_t GetDrawIndex() const;

        Hand &GetPlayerHand(const uint8_t playerIndex);

    private:
        uint64_t m_deckSeed;
        uint8_t m_deckIndex;

        std::array<Card, DECK_SIZE> m_deck;
        Hand m_hand;
        std::vector<Hand> m_playersHands;

        void generateDeck();
    };
}