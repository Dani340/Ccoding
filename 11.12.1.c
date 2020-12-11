#include <stdio.h>
int main() {
    int n, firstn, n1 = 0, rest;
    printf("Enter an integer: ");
    scanf("%d", &n);
    firstn = n;

    while (n != 0)
    {
        rest = n % 10;
        n1 = n1 * 10 + rest;
        n /= 10;
    }

    if (firstn == n1)
    {
        printf("%d is a palindrome.", firstn);
    }

    else
    {
        printf("%d is not a palindrome.", firstn);
    }


    return 0;
}
