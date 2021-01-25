#include <stdio.h>
int main()
{
    int  a, b, c;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    if(a + b == c) {
        printf("True");
    }

    else if(b + c == a) {
        printf("True");
    }

    else if(a + c == b) {
        printf("True");
    }

    else {
        printf("False");
    }

    return 0;

}

