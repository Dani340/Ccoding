#include<stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);
    printf("Enter the third number:");
    scanf("%d", &c);

    if (a + b + c == 180 && a >= 0 && b >= 0 && c >= 0 && a < 180 && b < 180 && c < 180) {
        if (a == 0 || b == 0 || c == 0) {
            printf("Triunghiul este nul!");
        }

        else if (a < 90 && b < 90 && c < 90) {
            printf("Triunghiul este oarecare!");
        }

        else if (a == 90 || b == 90 || c == 90) {
            printf("Triunghiul este dreptunghic!");
        }

        else if (a > 90 || b > 90 || c > 90 && a > 0 && b > 0 && c > 0) {
            printf("Triunghiul este obtuz!");
        }

    }

    else {
        printf("Nu e triunghi!");
    }
}
