#include <stdio.h>

int main()
{
    int number1[100], number2[100], size1=0, size2=0, x, y, i, j, count=0;

    printf("Enter the first number:\n");
    scanf("%d",&number1[100]);

    printf("Enter the second number:\n");
    scanf("%d",&number2[100]);

    x = number1[100];
    y = number2[100];

    while(x != 0) {
        x = x / 10;
        size1++;
    }

    while(y != 0) {
        y = y / 10;
        size2++;
    }

    for(i = 0; i < size1; i++) {
        for(j = 0; j < size2; j++) {
            if(number1[i] == number2[j]) {
                count++;
            }
        }
    }
    printf("There are %d common digits", count);

    return 0;
}
