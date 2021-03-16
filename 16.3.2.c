#include <stdio.h>

int displaypow(int x, int N) {

    while (N != 0) {
        return (x * displaypow(x, N-1));
    }

    if(N == 0) {
        return 1;
    }
}

int main(){
    int x, N, pow=1;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter N to make the operation x ^ N: ");
    scanf(" %d", &N);

    pow = displaypow(x, N);

    printf("x ^ N is %d", pow);

    return 0;
}
