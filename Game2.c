#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number1;
    char option2 = 'Y';
    int number2;
    int rounds = 0;
    int points1 = 0;
    int points2 = 0;
    srand(time(0));

    while (option2 == 'Y' && rounds < 5)
    {
        printf("==================================================================================================\n");
        printf("=============================WELCOME TO THE GUESSING GAME=========================================\n");
        printf("==================================================================================================\n\n");
        rounds++;

        int choice = (rand() % 10) + 1;

        printf("Round: %d\n\n", rounds);

        printf("The computer has picked a number from 1-10\n\n");

        printf("A small Hint\n");
        if (choice >= 5)
            printf("This number is greater or equal to 5\n");
        else
            printf("This number is less than or equal to 5\n\n");

        printf("Now that you have the hint,\n");
        printf("Player1's turn: Type out a number\n");
        scanf("%d", &number1);

        printf("Player2's turn: Type out a number\n");
        scanf("%d", &number2);

        if (choice != number1 && choice != number2)
        {
            printf("Uh oh, You both guessed wrong, the number computer had chosen was %d, no points granted!\n\n", choice);
        }
        else if (choice == number1 && choice == number2)
        {
            printf("You both guessed right, the number computer had chosen was %d, +1 to both the players!\n\n", choice);
            points1++;
            points2++;
        }
        else if (choice == number1)
        {
            printf("Player1 has guessed right, the number computer had chosen was %d, +1 granted to Player1!\n\n", choice);
            points1++;
        }
        else if (choice == number2)
        {
            printf("Player2 has guessed right, the number computer had chosen was %d, +1 granted to Player2!\n\n", choice);
            points2++;
        }

        if (rounds >= 5)
        {
            printf("Game over!, you've played 5 rounds\n\n");

            printf("\nFinal Score:\nPlayer1: %d\nPlayer2: %d\n\n", points1, points2);
            if (points1 == points2)
            {
                printf("THERE IS A TIE\n");
            }
            else if (points1 > points2)
            {
                printf("PLAYER1 WINS THE GAME!\n");
            }
            else
            {
                printf("PLAYER2 WINS THE GAME!\n");
            }
        }

        printf("Press 'Y' if you want to continue this game, else press 'N' to discontinue\n");
        scanf(" %c", &option2);

        if (option2 == 'N')
        {
            printf("Thank you for playing the Guessing Game, see you soon!\n");
                }
                             }

        printf("=================================================================================================\n");
        printf("====================================GAMING SESSION ENDED=========================================\n");
        printf("=================================================================================================\n\n");
    

    return 0;
}
