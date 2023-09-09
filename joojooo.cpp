
#include "joojooo.h"
#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;


NumberGuesser::NumberGuesser() {
    cout << "GAME CONSTRUCTOR: object initialized with 10 as a maximum value"<<endl;
    srand(time(0)); // Initialize the random number generator
    targetNumber = rand() % 20;
    numberOfTries = 0;
}


void NumberGuesser::playGame() {
    int userGuess;
    while (true) {


        cout << "Guess a number between 0 and 19: ";
        cin >> userGuess;
        numberOfTries++;

        if (userGuess == targetNumber) {
            cout << "Congratulations! You guessed the correct number in " << numberOfTries << " tries." << endl;
            break;
        } else if (userGuess < targetNumber) {
            cout << "Your guess is too small" << endl;
        } else if (userGuess > targetNumber) {
            cout << "Your guess is too big" << endl;
        }
    }
}

int main() {


    NumberGuesser game;
    game.playGame();

    return 0;
}
NumberGuesser::~NumberGuesser() {
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}

