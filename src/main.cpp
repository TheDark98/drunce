#include <iostream>
#include <algorithm>
#include <string>

#include "seedGen.h"
#include "cards.h"

#define MAX_PLAYED_ROUNDS 9

unsigned int askPlayerSeed() {
    printf("Want a random seed? (Y/n): ");
    std::string response;
    std::getline(std::cin, response);
    response.erase(std::remove_if(response.begin(), response.end(), isspace), response.end());

    if (response[0] != 'n' && response[0] != 'N') return 0;

    printf("Seed (0 is random): ");
    std::string seedResponse;
    std::getline(std::cin, seedResponse);
    seedResponse.erase(std::remove_if(response.begin(), response.end(), isdigit), response.end());
    unsigned int playerSeed;
    if (std::floor(playerSeed) == playerSeed)
        return playerSeed;
    return 0;
}

std::pair<cards::value, cards::seed> generateCard() {
    const unsigned int generatedValue = seedBlackJack::getRandom();

    cards::seed generatedCardSeed = (cards::seed) (generatedValue % 4 + 1);
    cards::value generatedCardValue = (cards::value) (generatedValue % 13 + 1);

    return std::make_pair(generatedCardValue, generatedCardSeed);
}

int main() {
    bool isRunnning = true;

    while (isRunnning) {
        const unsigned int seed = seedBlackJack::generate(askPlayerSeed());
        bool isGaming = true;

        while (isGaming) {

            std::pair<cards::value, cards::seed> dealerHand[11] = {std::make_pair(cards::value::VNull, cards::seed::SNull)};
            std::pair<cards::value, cards::seed> playerHand[11] = {std::make_pair(cards::value::VNull, cards::seed::SNull)};

            playerHand[0] = generateCard();
            playerHand[1] = generateCard();

            dealerHand[0] = generateCard();
            dealerHand[1] = generateCard();

            // Player Draw Phase
            for (unsigned int roundNumber; roundNumber < MAX_PLAYED_ROUNDS; roundNumber++) {
                printf("Draw a card? (Y/n): ");
                std::string response;
                std::getline(std::cin, response);
                response.erase(std::remove_if(response.begin(), response.end(), isspace), response.end());

                if (response[0] == 'n' || response[0] == 'N') break;

                playerHand[roundNumber + 2] = generateCard();
            }
            
            // Dealer Draw Phase
            for (unsigned int roundNumber; roundNumber < MAX_PLAYED_ROUNDS; roundNumber++) {
                std::random_device rd;
                
                bool botStopDrawing = (rd() % 2);
                
                if (botStopDrawing) break;

                dealerHand[roundNumber + 2] = generateCard();
            }
            const unsigned int playerHandValue = handValue(playerHand);
            const unsigned int dealerHandValue = handValue(dealerHand);

            if (playerHandValue != 0)
                printf("You Win!\n");
            else if (dealerHandValue != 0)
                printf("You Loose!\n");
            else
                printf("Pair!\n");

            isGaming = false; 
        }
        printf("Play Again? (Y/n): ");
        std::string response;
        std::getline(std::cin, response);
        response.erase(std::remove_if(response.begin(), response.end(), isspace), response.end());
        
        if (response[0] == 'n' || response[0] == 'N') isRunnning = false;
    }
    return 0;
}