#include <stdio.h>
int divisors(int n) {

	int i, sum=0;

	for(i = 1; i <= n; i++) {
		if((n%i) == 0){
			sum ++;
		}
	}
	return sum-2;

}

int main() {
    int x, N, i, sum, sum1=0;

    printf("Enter N:");
    scanf("%d", &N);

    printf("Enter x:");
    scanf("%d", &x);

    for(i = 0; i < N; i++) {
        sum = divisors(i);

        if(sum >= x) {
            printf("%d\n", i);
            sum1++;
        }
    }
    printf("The result is %d", sum1);
}
