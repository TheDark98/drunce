#include "seedGen.h"

static std::mt19937 generator;

unsigned int seedBlackJack::generate(unsigned int userSeed) {
    if (userSeed == 0) {
        std::random_device rd;
        userSeed = rd();
    }

    std::mt19937 seedGen(userSeed);

    userSeed = seedGen();

    generator.seed(userSeed);

    return userSeed;
}

unsigned int seedBlackJack::getRandom() {
    return generator();
}
