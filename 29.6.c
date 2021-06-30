#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

int main() {
    int i, x,  N, M, src[20], dest[20], array[40];

    printf("Enter the number of nodes for the graph: ");
    scanf("%d",&N);

    printf("Enter the number of edges: ");
    scanf("%d",&M);

    x = 0;
    for(i = 0; i < M; i++) {
        printf("Enter the elements of the %d edge\n", i+1);
        scanf("%d", &src[i]);
        scanf("%d", &dest[i]);

        array[x] = src[i];
        array[x+1] = dest[i];
        x = x+2;
    }

    struct Graph* graph = createGraph(array);

    for(i = 0; i < M; i++) {
        addEdge(graph, src[i], dest[i]);
    }

    printGraph(graph);

    return 0;
}
