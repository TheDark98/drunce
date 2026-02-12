#include "seedGen.h"

#define MAX_CARD_NUMBER 13 * 4

const unsigned int seedBlackJack::generate(unsigned int userSeed) {
    if (userSeed == 0) {
        std::random_device rd;
        userSeed = rd();
    }

    std::mt19937 seedGen(userSeed);

    userSeed = seedGen();

    seedBlackJack::generator.seed(userSeed);

    return userSeed;
}

const unsigned int seedBlackJack::getRandom() {
    return seedBlackJack::generator();
}
