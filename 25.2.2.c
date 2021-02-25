#include <stdio.h>

int factorial(int num) {
    if (num != 1) {
        return num * factorial(num-1);
    }
    else {
        return num;
    }
}

int factorial(int num);

int main() {
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = factorial(number);

    printf("%d! = %d", number, result);

    return 0;
}
