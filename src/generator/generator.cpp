#include "generator.h"

DrunkEngine::Random::Random(const uint32_t seed)
    : generator(seed) {}

uint32_t DrunkEngine::Random::NextRandom() const {
    return generator();
}
