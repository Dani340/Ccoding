#include <stdio.h>

int displaysum(int sum, int i, int N) {

    while (i != N) {
        sum += i;
        i++;
        displaysum(sum, i, N);
    }
    if(i == N) {
        sum += i;
        return sum;
    }
}

int main(){
    int N, sum = 0, i = 1;

    printf("Enter N: ");
    scanf("%d", &N);

    sum = displaysum(sum, i, N);

    printf("The sum from 1 to N is %d", sum);

    return 0;
}
