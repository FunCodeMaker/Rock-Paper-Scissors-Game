#include "all.h"

int main() {
    int playerScore = 0, computerScore = 0, round = 0;
    char playerChoice, computerChoice;
    int playerInput;

    printf("Rock Paper Scissors Game\n");
    printf("Enter 1 for Rock, 2 for Paper, 3 for Scissors\n");

    while(round < 3) {
        printf("Round %d - Your turn: ", round + 1);
        scanf("%d", &playerInput);
        playerChoice = getChoice(playerInput);

        if(playerChoice == '0') {
            printf("Invalid choice. Try again.\n");
            continue;
        }

        int randomNumber = generateRandomNumber(3) + 1;
        computerChoice = getChoice(randomNumber);

        printf("You chose: %c, Computer chose: %c\n", playerChoice, computerChoice);

        int result = determineWinner(playerChoice, computerChoice);
        if(result == 1) {
            printf("You win this round!\n");
            playerScore++;
        } else if(result == 0) {
            printf("Computer wins this round!\n");
            computerScore++;
        } else {
            printf("It's a draw!\n");
        }

        round++;
    }

    printf("Final Score - You: %d, Computer: %d\n", playerScore, computerScore);
    if(playerScore > computerScore) {
        printf("Congratulations! You won the game!\n");
    } else if(playerScore < computerScore) {
        printf("Sorry, the computer won the game.\n");
    } else {
        printf("The game is a draw!\n");
    }

    return 0;
}
