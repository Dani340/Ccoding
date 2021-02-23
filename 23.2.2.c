#include <stdio.h>
#include <stdlib.h>

int main() {
    int guess, n;
    time_t t;
    srand((int) time(&t));

    n = rand() % 100 + 1;
    printf("A random number has been chosen. Try to guess it: ");
    scanf("%d", &guess);

    while(guess != n) {
        if(guess < n) {
            printf("The number you guessed is too low! Try again: ");
            scanf("%d", &guess);
        }

        else if(guess > n) {
            printf("The number you guessed is too high! Try again: ");
            scanf("%d", &guess);
        }
    }

    printf("You guessed it!");

    return 0;
}
