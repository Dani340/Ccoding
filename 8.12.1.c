#include <stdio.h>
#include <math.h>
#include "ClosestPrimeToX.h"
#include "sumOfPrimes.h"

int main() {
    int x, N;

    printf("Enter a number to determine the greatest prime number smaller than x: \n");
    scanf("%d", &x);
    printf("Enter N: \n");
    scanf("%d", &N);

    // pas 1: nr prim mai mic decat x
    if(ClosestPrimeToX(x) == 0) {
        printf("There is no number smaller than x that is prime \n");
    }
    else if(ClosestPrimeToX(x) == i) {
        printf("The result is %d\n", i);
    }

    // pas 2: suma primelor N nr prime mai mari decat x
    const sumPrimes = sumOfPrimes(x, N);
    printf("The sum is %d", sumPrimes);

}
