#include "seedGen.h"

#define MAX_CARD_NUMBER 13 * 4

const unsigned int seed::generate(unsigned int userSeed) {
    if (userSeed == 0) {
        std::random_device rd;
        userSeed = rd();
    }

    std::mt19937 seedGen(userSeed);

    userSeed = seedGen();

    seed::generator.seed(userSeed);

    return userSeed;
}

const unsigned int seed::getRandom() {
    return seed::generator();
}
