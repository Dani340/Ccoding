#include <stdio.h>
int main()
{
    int n, k, i, x, sum=0;

    printf("Enter your number: \n");
    scanf("%d", &n);

    printf("Enter your factor: \n");
    scanf("%d", &k);

    for(i = 1; i <= n; i++) {
        x = i;
        if(i % k == 0) {
            while(x % k == 0) {
                x = x / k;
                sum += 1;
            }
        }
    }

    printf("There are %d exponents", sum);

    return 0;
}
