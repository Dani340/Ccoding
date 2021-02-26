#include <stdio.h>
int i = 0;

int printfDesc(int num) {
    if (num >= 0) {
        printf("%d\n", num);
        printfDesc(num-1);
    }
}

int printfAsc(int num) {
    if (num >= 0) {
        printf("%d\n", i);
        i++;
        printfAsc(num-1);
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printfDesc(number);
    printf("\n");
    printfAsc(number);

    return 0;
}
