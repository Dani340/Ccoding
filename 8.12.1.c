#include <stdio.h>
#include <math.h>
int main() {
    int x, N, i, j, sum = 0, primeNr = 0, isPrime;

    printf("Enter a number to determine the greatest prime number smaller than x: \n");
    scanf("%d", &x);
    printf("Enter N: \n");
    scanf("%d", &N);

    // pas 1: nr prim mai mic decat x
    if(x<=1) {
        printf("There is no number smaller than x that is prime \n");
    } else {
        for(i = x; i > 1; i--) {
            isPrime = 1;

            for(j = 2; j <= sqrt(i); j++) {
                if(i % j == 0) {
                    isPrime = 0;
                    break;
                }
            }

            if (isPrime == 1) {
                printf("The result is %d \n", i);
                break;
            }
        }
    }

    // pas 2: suma primelor N nr prime mai mari decat x
    x ++;
    while (primeNr < N) {
        isPrime = 1;

        if(x > 1) {
            for(j = 2; j <= sqrt(x); j++) {
                if(x % j == 0) {
                    isPrime = 0;
                    break;
                }
            }

            if (isPrime == 1) {
                primeNr ++;
                sum += x;
            }
        }

        x ++;
    }

    printf("The sum is %d ", sum);
}
