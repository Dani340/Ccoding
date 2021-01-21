#include <stdio.h>

  int main() {
        int x, y, restx=0, resty = 0, count=0;

        printf("Enter your number:");
        scanf("%d", &x);

        printf("Enter your number:");
        scanf("%d", &y);

        while (x != 0) {
                restx = x % 10;
                resty = y % 10;

                if(restx + resty >= 10) {
                    count++;
                }

                x = x / 10;
                y = y / 10;
        }

        printf("There are %d pairs bigger than 10", count);
        return 0;
  }
