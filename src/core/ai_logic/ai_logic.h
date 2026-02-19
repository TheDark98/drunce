#pragma once

#include <vector>

#include <engine_definitions.h>
#include <player.h>

namespace DrunkEngine::AILogic
{
    extern bool Choose(const Difficulty difficulty, const uint8_t AIPlayerID, std::vector<Player> *players);
}