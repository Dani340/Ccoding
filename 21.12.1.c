#include <stdio.h>
#include <math.h>

int isPrime(int n){
    int i,x,flag=1;
    x=sqrt(n);
    for(i=2; i <= x; i++) {

        if(n%i==0) {
            flag = 0;
            break;
        }
    }

    if(n==2)
    flag=1;

    else if(n<1)
    flag=0;

    if (flag == 1) {
        return 1;
    }

    else {
        return -1;
    }

}

int main() {
        int firstn, num, i = 1, originalnum, result;

        printf("Enter your number:");
        scanf("%d", &num);
        firstn = num;

        num = num / 10;
        originalnum = num;

        while (num > 9) {
                num = num / 10;
                i = i * 10;
        }
        originalnum = originalnum - i;

        result = isPrime(originalnum);
        if(result == 1) {
            printf("Numarul %d este centru prim", firstn);
        }

        else if(result == -1) {
            printf("Numarul %d nu este centru prim", firstn);
        }

        return 0;
  }
