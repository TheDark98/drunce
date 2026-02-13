#pragma once

#include <cstdint>
#include <random>

namespace DrunkEngine {
    class Random {
    public:
        Random(const uint32_t seed);
        uint32_t NextRandom() const;

    private:
        mutable std::mt19937 generator;
    };
}