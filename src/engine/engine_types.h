#pragma once

namespace DrunkEngine
{
    enum class GameState
    {
        MENU, // starting point
        LOADING,
        PLAYING,
        PAUSED,
        LOSE,
        WIN,
        EXIT
    };

    enum class GameDifficulty
    {
        EASY,
        NORMAL,
        HARD,
        CHEAT
    };

    enum class GameRule
    {
        CLASSIC,
        DRUNK
    };
}