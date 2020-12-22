#include <stdio.h>
int main() {
    int N, arr[50]={0}, j, c, x, sum1, sum=0,biggest=0;

    printf("Enter N:");
    scanf("%d", &N);

    printf("Enter %d numbers: \n", N);
    for (c = 0; c < N; c++)
    {
        scanf("%d", &x);
        arr[c] = x;
    }


    for(j = 0; j < N - 2; j++) {
        for (c = j; c < N-2; c++)
        {
            sum += arr[c];
            sum += arr[c+1];
            sum += arr[c+2];
            sum1 = sum;
        }
        if(sum1 > biggest) {
            biggest = sum1;
        }

    }
    printf("%d", biggest);


}
