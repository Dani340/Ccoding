#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "graph.h"

int main() {
    int i, x, N, M, src[20], dest[20], array[40], lowest = 100;

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

        if(array[x] < lowest) {
            lowest = array[x];
        }
        else if(array[x+1] < lowest) {
            lowest = array[x+1];
        }

        x = x+2;
    }

    struct Graph* graph = createGraph(array, 2*M);

    for(i = 0; i < M; i++) {
        addEdge(graph, src[i], dest[i]);
    }

    if(isCycle(graph) == true) {
        printf("true");
    }
    else {
        printf("false");
    }

    return 0;
}
