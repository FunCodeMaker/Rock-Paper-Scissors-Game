#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random number in the range [0, n)
int generateRandomNumber(int n) {
    srand(time(NULL));
    return rand() % n;
}

// Function to determine the winner
// Returns 1 if the player wins, -1 if it's a draw, and 0 if the computer wins
int determineWinner(char player, char computer) {
    if (player == computer) {
        return -1; // Draw
    }
    if ((player == 'r' && computer == 's') ||
        (player == 's' && computer == 'p') ||
        (player == 'p' && computer == 'r')) {
        return 1; // Player wins
    }
    return 0; // Computer wins
}

// Function to convert the choice number to character
char getChoice(int choice) {
    switch(choice) {
        case 1: return 'r'; // Rock
        case 2: return 'p'; // Paper
        case 3: return 's'; // Scissors
        default: return '0'; // Invalid choice
    }
}
