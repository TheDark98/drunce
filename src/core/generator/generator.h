#pragma once

#include <cstdint>
#include <random>

namespace DrunkEngine
{
    class RandomGenerator
    {
    public:
        RandomGenerator(const uint64_t seed);
        uint64_t Generate();

    private:
        std::mt19937_64 generator;
    };
}