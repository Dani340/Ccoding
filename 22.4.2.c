#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, num, N;

    printf("Enter the number of lines from the Pascal triangle you want to print: ");
    scanf("%d", &N);

    for(i = 0; i < N; i++) {
        num = 1;
        for(j = 0; j < i+1; j++) {
            printf("%d ", num);
            num = num * (i - j) / (j+1);
        }
        printf("\n");
    }
}
