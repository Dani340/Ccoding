#include <stdio.h>
int main() {
    int N, arr[50]={0}, c, x, k, sum=0;

    printf("Enter N:");
    scanf("%d", &N);

    printf("Enter k:");
    scanf("%d", &k);

    printf("Enter %d numbers: \n", N);
    for (c = 0; c < N; c++)
    {
        scanf("%d", &x);
        arr[c] = x;
    }

    for (c=0; c < N; c+=2)
    {
        if(k!=0) {
            if (arr[c] % k == 0) {
                sum += 1;
            }
        }
        else {
            printf("Please enter another k, not 0! \n");
            break;
        }

    }

    printf("There are %d numbers divisible by k", sum);

    return 0;
}
