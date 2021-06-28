#include <stdio.h>
#include <math.h>

int main() {
    int i, j, N, M;
    int matrix[50][50] = {0}, arr[25][2];

    printf("Enter the number of nodes for the graph: ");
    scanf("%d",&N);

    printf("Enter the number of edges: ");
    scanf("%d",&M);

    for(i = 0; i < M; i++) {
        printf("Enter the elements of the %d edge\n", i+1);
        scanf("%d", &arr[i][0]);
        scanf("%d", &arr[i][1]);
        matrix[arr[i][0]-1][arr[i][1]-1] = 1;
        matrix[arr[i][1]-1][arr[i][0]-1] = 1;
    }

    printf("\nThe adjacency matrix is\n");
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
