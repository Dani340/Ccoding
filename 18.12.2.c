#include <stdio.h>
int binaryNumbers(int i) {
    long binaryn=0;
    int j, decimaln, n;

    decimaln=i;
    n=1;

    for(j=i;j>0;j=j/2)
    {
        binaryn += (i%2)*n;
        n=n*10;
        i=i/2;
    }

}

int main() {
    int n, i, rest, sum=0, originalbin, binaryn, decimaln;

    printf("Enter a number: \n");
    scanf("%d", &n);

    for (i = 0; i <= n; i++) {
        binaryNumbers(i);
        originalbin = binaryn;
        while (binaryn > 0) {
            rest = binaryn % 10;
            if (rest == 1) {
                sum++;
            }
            binaryn = binaryn / 10;

        }
        if(sum == 2) {
            printf("%d", decimaln);
        }

    }
}
