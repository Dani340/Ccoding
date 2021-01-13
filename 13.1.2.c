#include <stdio.h>

int main() {
    int firstn, num, i = 1, originalnum, result;

    printf("Enter your number:");
    scanf("%d", &num);
    firstn = num;

    num = num / 100;
    originalnum = num;

    while (num > 99) {
        num = num / 10;
        i = i * 10;
    }

    i = i * num;
    originalnum = originalnum - i;

    printf("The result is %d", originalnum);

}
