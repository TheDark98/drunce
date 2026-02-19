#include "engine.h"

DrunkEngine::GameEngine::GameEngine()
    : m_gameState(DrunkEngine::GameState::MAIN_MENU),
      m_ruleSet(DrunkEngine::RuleSet::CLASSIC),
      m_difficulty(DrunkEngine::Difficulty::EASY),
      m_roundPhase(DrunkEngine::RoundPhase::DRAW),
      m_result(DrunkEngine::Result::NONE)
{
}

void DrunkEngine::GameEngine::SetGameState(const GameState state)
{
    m_gameState = state;
}

void DrunkEngine::GameEngine::SetRuleSet(const RuleSet rule)
{
    m_ruleSet = rule;
}

void DrunkEngine::GameEngine::SetDifficulty(const Difficulty difficulty)
{
    m_difficulty = difficulty;
}

void DrunkEngine::GameEngine::SetRoundPhase(const RoundPhase phase)
{
    m_roundPhase = phase;
}

void DrunkEngine::GameEngine::SetResult(const Result result)
{
    m_result = result;
}

DrunkEngine::GameState DrunkEngine::GameEngine::GetGameState() const
{
    return m_gameState;
}

DrunkEngine::RuleSet DrunkEngine::GameEngine::GetRuleSet() const
{
    return m_ruleSet;
}

DrunkEngine::Difficulty DrunkEngine::GameEngine::GetDifficulty() const
{
    return m_difficulty;
}

DrunkEngine::RoundPhase DrunkEngine::GameEngine::GetRoundPhase() const
{
    return m_roundPhase;
}

DrunkEngine::Result DrunkEngine::GameEngine::GetResult() const
{
    return m_result;
}

bool DrunkEngine::GameEngine::operator==(const DrunkEngine::GameState other) const
{
    return m_gameState == other;
}

bool DrunkEngine::GameEngine::operator==(const DrunkEngine::RuleSet other) const
{
    return m_ruleSet == other;
}

bool DrunkEngine::GameEngine::operator==(const DrunkEngine::RoundPhase other) const
{
    return m_roundPhase == other;
}

bool DrunkEngine::GameEngine::operator==(const DrunkEngine::Difficulty other) const
{
    return m_difficulty == other;
}

bool DrunkEngine::GameEngine::operator==(const DrunkEngine::Result other) const
{
    return m_result == other;
}