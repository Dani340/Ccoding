#include <stdio.h>

  int main() {
        int num, biggest = 0, rest = 0;

        printf("Enter your number:");
        scanf("%d", &num);

        while (num > 0) {
                rest = num % 10;

                if (rest > biggest) {
                        biggest = rest;
                }

                num = num / 10;
        }

        printf("The biggest digit of the number is %d\n", biggest);
        return 0;
  }
