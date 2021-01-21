#include <stdio.h>

int main() {

    int  x, y, copyY, count=0, digitX, digitY;

    printf("Enter the first number:\n");
    scanf("%d",&x);

    printf("Enter the second number:\n");
    scanf("%d",&y);

    while (x != 0) {
        copyY = y;
        digitX = x % 10;
        x = x / 10;

        while (copyY != 0) {
            digitY = copyY % 10;
            copyY = copyY / 10;

            if (digitX == digitY) {
                count++;
            }
        }
    }
    printf("There are %d common digits", count);

    return 0;
}
