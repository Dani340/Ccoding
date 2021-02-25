#include <stdio.h>

int printfN(int num) {
    if (num >= 0) {
        printf("%d\n", num);
        printfN(num-1);
    }
}

int printfN(int num);

int main() {
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    printfN(number);

    return 0;
}
