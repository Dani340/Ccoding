#include <stdio.h>
int main() {
	int i, j, sum=0, sum1=0, X, Y, N;
	printf("Enter the first number of the interval: ");
	scanf("%d", &X);

	printf("Enter the last number of the interval: ");
	scanf("%d", &Y);

    printf("Enter the number of divisors to check for: ");
	scanf("%d", &N);

    printf("The numbers are: \n");
	for(j = X; j <= Y; j++) {
        sum = 0;
        for(i = 1; i <= j; i++) {
            if((j%i) == 0){
                sum++;
            }
        }
        if(sum == N) {
            sum1++;
            printf("%d\n", j);
        }
	}
	printf("There are %d numbers that have %d divisors in the [%d, %d] interval", sum1, N, X, Y);


	return 0;
}
