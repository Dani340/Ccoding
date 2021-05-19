#include <stdio.h>

int main()
{
    int i, n, k, x, count = 0, size = 0, fact = 1, fact1;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter k: ");
    scanf("%d", &k);

    for(i = 2; i <= n; i++) {
        fact = fact * i;
    }

    while(fact % 10 == 0) {
        fact = fact / 10;
    }

    fact1 = fact;
    while(fact1 > 0) {
        fact1 = fact1 / 10;
        size++;
    }

    if(k > size) {
        printf("There are less digits left than your k");
        return 0;
    }

    while(count < size - k+2) {
        fact = fact / 10;
        count++;
    }
    x = fact % 10;

    printf("%d", x);

    return 0;
}
