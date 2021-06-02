#include <stdio.h>

int main() {
    int matrix[10][10];
    int sum = 0, biggest = 0;
    int i,j = 0,N,k,m,n;

    printf("Enter the number: ");
    scanf("%d",&N);

    k = N*2 - 1;

    printf("\nThe elements are: \n");
    for(i = 0; i < N; i++) {
        n = i;
        for(m = i; m < k-i; m++) {
            matrix[m][n] = N-i;
        }
        n = k-i-1;
        for(m = i; m < k-i; m++) {
            matrix[m][n] = N-i;
        }
        m = i;
        for(n = i; n < k-i; n++) {
            matrix[m][n] = N-i;
        }
        m = k-i-1;
        for(n = i; n < k-i; n++) {
            matrix[m][n] = N-i;
        }
    }

    for(i = 0; i < k; i++) {
        for(j = 0; j < k; j++) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }


    return 0;
}
