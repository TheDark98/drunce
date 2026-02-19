#pragma once

namespace DrunkEngine
{
    enum class GameState
    {
        MAIN_MENU,
        LOADING,
        IN_PROGRESS,
        PAUSED,
        ENDED,
        QUITTING
    };

    enum class RuleSet
    {
        CLASSIC,
        DRUNK
    };

    enum class Difficulty
    {
        EASY,
        NORMAL,
        HARD,
        CHEAT
    };

    enum class RoundPhase
    {
        DRAW,
        REVEAL
    };

    enum class Result
    {
        NONE,
        VICTORY,
        DEFEAT
    };
}