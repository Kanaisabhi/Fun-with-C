#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>

int main(void){
    int secretNumber = 7;
    int guess;
    int guessLimit = 0;
    int guessCount = 3;
    while (guess != secretNumber) {
        if (guessCount > guessLimit) {
            printf("please enter you guessed no.: ");
            scanf("%d", &guess);
            guessCount--;
            printf("You have %d count limit left\n", guessCount);
        }else if (guessCount == guessLimit) {
            printf("You are out of guesses!\n");
            break;
        }

    }
    if (guess == secretNumber) {
        printf("you win!!" );
    }else {
        printf("you lost!");
    }
    return 0;
}
