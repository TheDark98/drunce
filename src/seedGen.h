#pragma once

#include <random>

namespace seed {
    std::mt19937 generator;
    const unsigned int generate(unsigned int seed);
    const unsigned int getRandom();
}