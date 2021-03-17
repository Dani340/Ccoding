#include <stdio.h>

int sumdigits(int N) {
    int c;

    while (N > 0) {
        c = N % 10;
        return (c + sumdigits(N/10));
    }

    if(N == 0) {
        return 0;
    }
}

int main(){
    int x, N, sum=0;

    printf("Enter N: ");
    scanf("%d", &N);

    sum = sumdigits(N);

    printf("The sum of the digits of N is %d", sum);

    return 0;
}
