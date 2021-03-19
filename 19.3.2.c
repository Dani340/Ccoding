#include <stdio.h>

int main() {
    int i, j, N, nr=1;

    printf("Enter the number of rows to be printed: ");
    scanf("%d", &N);

    for(i = 0; i < N; i++) {
        for(j = 0; j < i+1; j++) {
            printf("%d ", nr);
            nr++;
        }
        printf("\n");
    }

    return 0;
}


