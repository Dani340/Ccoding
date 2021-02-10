#include<stdio.h>
#include<math.h>
#include "isPerfectSquare.h"

int main(){

    int rest, num, sum=0;
    float x;

    printf("Enter the number: \n");
    scanf("%d",&num);

    while(num > 0) {
        rest = num % 10;
        if(isPerfectSquare(rest) == 1) {
            sum += 1;
        }
        num = num / 10;
    }

    printf("There are %d perfect squares in the number", sum);

    return 0;

    }
