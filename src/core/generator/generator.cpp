#include "generator.h"

DrunkEngine::RandomGenerator::RandomGenerator(const uint64_t seed)
    : generator(seed)
{
}

uint64_t DrunkEngine::RandomGenerator::Generate()
{
    return generator();
}
