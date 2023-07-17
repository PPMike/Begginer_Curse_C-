#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;


    do{
        if (guessCount < guessLimit){
            printf("Guess the number, only have 3 lifes: ");
            scanf("%d", &guess);
            guessCount++;
        }
        if (guess == secretNumber){
            printf("You Win!!!\n");
        } else{
            printf("You Fail\n");
        }
    } while(guess != secretNumber && guessCount < guessLimit);

    printf("You tried %d times\n", guessCount);
    return 0;
}