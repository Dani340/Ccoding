#include<stdio.h>

int main()
{
    int x, f, x2;

    printf("Enter x: ");
    scanf("%d", &x);

    if(x < 2) {
        f = x - 1;
        printf("Funcion = %d", f);
    }

    else {
        f = x * x;
        printf("Function = %d", f);
    }

    return 0;
}
