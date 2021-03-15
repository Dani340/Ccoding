#include <stdio.h>
#include <math.h>

int main () {

    int x, y;
    char OP;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter y: ");
    scanf("%d", &y);

    printf("Enter OP: ");
    scanf(" %c", &OP);

    switch(OP) {
        case '+' :
            printf("x + y = %d", x+y);
            break;
        case '-' :
            printf("x - y = %d", x-y);
            break;
        case '*' :
            printf("x * y = %d", x*y);
            break;
        case '/' :
            printf("x / y = %f", (float)x / (float)y);
            break;
        case '^' :
            printf("x ^ y = %lf", pow((double)x, (double)y));
            break;
        case '%' :
            printf("x %c y = %d", '%', x % y);
            break;
        default :
            printf("You did not enter a valid symbol");
    }

    return 0;
}
