#include <stdio.h>

int main() {
    int firstn, num, i = 1, last2, result;

    printf("Enter your number:");
    scanf("%d", &num);
    firstn = num;

    last2 = num % 100;
    num = num / 10;

    while (num > 99) {
        num = num / 10;
        i = i * 10;
    }

    i = i * num;
    i = last2 + i;

    printf("The result is %d", i);

}
