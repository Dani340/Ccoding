#include <stdio.h>

int main() {

    int x=1, result=0;

    printf("Enter the digits of your number \n");

    while (x != 0) {
        scanf("%d", &x);
        result = result * 10 + x;
    }

    result = result / 10;

    printf("The number is: %d", result);
    return 0;
}
