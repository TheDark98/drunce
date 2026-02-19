#pragma once

#include <engine_definitions.h>

namespace DrunkEngine
{
    class GameEngine
    {
    public:
        GameEngine();

        void SetGameState(const GameState state);
        void SetRuleSet(const RuleSet rule);
        void SetDifficulty(const Difficulty difficulty);
        void SetRoundPhase(const RoundPhase phase);
        void SetResult(const Result result);

        GameState GetGameState() const;
        RuleSet GetRuleSet() const;
        Difficulty GetDifficulty() const;
        RoundPhase GetRoundPhase() const;
        Result GetResult() const;

        bool operator==(const GameState other) const;
        bool operator==(const RuleSet other) const;
        bool operator==(const Difficulty other) const;
        bool operator==(const RoundPhase other) const;
        bool operator==(const Result other) const;

    private:
        GameState m_gameState;
        RuleSet m_ruleSet;
        Difficulty m_difficulty;
        RoundPhase m_roundPhase;
        Result m_result;
    };
}