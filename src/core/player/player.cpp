#include "player.h"
#include <numeric>
#include <cassert>

DrunkEngine::Player::Player(const uint8_t playerID)
    : m_playerID(playerID), m_hand(nullptr)
{
}

uint8_t DrunkEngine::Player::GetPlayerID() const
{
    return m_playerID;
}

void DrunkEngine::Player::AssignHand(Hand *handPtr)
{
    m_hand = handPtr;
}

DrunkEngine::Hand &DrunkEngine::Player::GetHand()
{
    return *m_hand;
}

bool DrunkEngine::Player::IsBusted() const
{
    return m_hand->cards.size() > 21;
}

void DrunkEngine::Player::operator=(const PlayerType playerType)
{
    m_playerType = playerType;
}

bool DrunkEngine::Player::operator==(const uint8_t playerID) const
{
    return m_playerID == playerID;
}
