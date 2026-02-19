#include "ai_logic.h"
#include <hand_definitions.h>

extern bool DrunkEngine::AILogic::Choose(const Difficulty difficulty, const uint8_t AIPlayerID, std::vector<Player>* players)
{
    double choice = 0.0;
    double AIHandValue = 0.0;
    for (Player &player : *players)
    {
        if (player.IsBusted())
            continue;

        double playerHandValue = player.GetHand().GetValue(true);

        if (player == AIPlayerID)
        {
            AIHandValue = playerHandValue;
            continue;
        }

        choice += playerHandValue / MAX_HAND_VALUE;
    }

    double AIHandChoise = AIHandValue / MAX_HAND_VALUE;
    
    if (choice > AIHandChoise)
        return choice - AIHandChoise * 4 > 1.5 + static_cast<uint8_t>(difficulty) / 2;
    return false;
}
