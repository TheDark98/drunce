#pragma once

#include <cstdint>
#include <array>

#include <hand_definitions.h>
#include <player_definitions.h>
#include <hand.h>

namespace DrunkEngine
{
    class Player
    {
    public:
        Player(const uint8_t playerID);
        uint8_t GetPlayerID() const;

        void AssignHand(Hand *hand);
        Hand& GetHand();

        bool IsBusted() const;
        
        void operator=(const PlayerType other);
        bool operator==(const uint8_t playerID) const;

    private:
        uint8_t m_playerID;
        Hand *m_hand;
        PlayerType m_playerType;
    };
}