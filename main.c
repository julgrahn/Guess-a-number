#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMBER 20

int main()
{
    printf("Welcome to the number guessing game!\n");
    printf("I've thought of a number between 0 - 20 and you need to guess which one.\n\n");

    //assigning a random number 0 - 20
    time_t t;
    srand((unsigned) time(&t));
    int randomNumber = rand() % 21;

    int guessLeft = 5;
    int guess = 0;
    while(guessLeft != 0)
    {
        printf("You have %d tries left.\n", guessLeft);
        printf("Enter a guess: \n");
        scanf("%d", &guess);
        if(guess == randomNumber)
        {
            printf("Correct! Nice job! The number %d matches my number %d.\n", guess, randomNumber);
            break;
        }
        else
        {
            if(guess > randomNumber)
            {
                printf("%d is wrong. Try again!\n", guess);
                printf("The number I'm thinking of is lower.\n\n");
            }
            else if(guess < randomNumber)
            {
                printf("%d is wrong. Try again!\n", guess);
                printf("The number I'm thinking of is higher.\n\n");
            }

            guessLeft--;
        }
    }

    if(guessLeft == 0)
    {
        printf("Too bad! The number was: %d. \nGood luck next time.\n\n", randomNumber);
    }

    return 0;
}
