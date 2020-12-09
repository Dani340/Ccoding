#include <stdio.h>
#include <math.h>
int main() {
    int x, y, z, N, n, primeNr=0, i, j, k, p, sum=0, flag=1;

    printf("Enter a number to determine the greatest prime number smaller than x: \n");
    scanf("%d", &x);
    printf("Enter N: \n");
    scanf("%d", &N);

    for(i=x; i > 0; i--) {
        n = i;

        for(j=2; j <= sqrt(n); j++) {

            if(n%j==0) {
                flag = 0;
                break;
            }
        }

        if(n==1)
        flag=2;

        else if(n==2)
        flag=1;

        else if(n<1)
        flag=0;


        if (flag == 1) {
            p = n;
            printf("The result is %d \n", p);
            break;
        }

        else if (flag == 2) {
            printf("There is no number smaller than x that is prime");
        }


    }

    z = x + 1;

    while (primeNr < N) {
        y=sqrt(z);
        for(k=2; k <= y; k++) {

            if(z%k==0) {
                flag = 0;
                break;
            }
        }

        if(z==1)
        flag=2;

        else if(z==2)
        flag=1;

        else if(z<1)
        flag=0;

        if (flag == 1) {
            primeNr++;
            z++;
            sum += z;
        }

    }
    printf("The sum is %d ", sum);

}
