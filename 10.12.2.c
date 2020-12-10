#include <stdio.h>
int main() {
    int n, result = 0, rest;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0) {
        rest = n % 10;
        result = result * 10 + rest;
        n /= 10;
    }
    printf("Reversed number is %d", result);
    return 0;
}
