#include <stdio.h>

  int main() {
        int num, biggestdig=0, biggestno = 0, originalno, originalno2, lowestdig=0, mediumdig, rest = 0;

        printf("Enter your number:");
        scanf("%d", &num);

        originalno = num;
        originalno2 = num;

        while (num > 0) {
            rest = num % 10;

            if (rest > biggestdig) {
                biggestdig = rest;
            }

            num = num / 10;
        }

        biggestno += biggestdig * 100;

        lowestdig = biggestdig;

        while (originalno > 0) {
            rest = originalno % 10;

            if (rest < lowestdig) {
                lowestdig = rest;
            }

            originalno = originalno / 10;
        }


        while (originalno2 > 0) {
            rest = originalno2 % 10;

            if (rest < biggestdig && rest > lowestdig) {
                mediumdig = rest;
            }

            originalno2 = originalno2 / 10;
        }

        biggestno += 10 * mediumdig + lowestdig;;

        printf("%d", biggestno);

        return 0;
  }
