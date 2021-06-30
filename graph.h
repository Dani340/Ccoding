struct AdjListNode {
    int val;
    struct AdjListNode* next;
};

struct AdjList {
    struct AdjListNode *head;
};

struct Graph {
    int n;
    struct AdjList* array;
};

struct AdjListNode* newAdjListNode(int value) {
    struct AdjListNode* newNode = (struct AdjListNode*) malloc(sizeof(struct AdjListNode));

    newNode->val = value;
    newNode->next = NULL;

    return newNode;
}

struct Graph* createGraph(int arr[]) {
    int i, n;
    n = arr[0];

    i = 1;
    while(arr[i] != '\0') {
        if(arr[i] > n) {
            n = arr[i];
        }
        i++;
    }

    struct Graph* graph = (struct Graph*) malloc(sizeof(struct Graph));
    graph->n = n;

    graph->array = (struct AdjList*) malloc(n * sizeof(struct AdjList));

    for (i = 0; i <= n; i++) {
        graph->array[i].head = NULL;
    }

    return graph;
}

void addEdge(struct Graph* graph, int src, int dest) {
    struct AdjListNode* newNode = newAdjListNode(dest);

    newNode->next = graph->array[src].head;
    graph->array[src].head = newNode;

    newNode = newAdjListNode(src);
    newNode->next = graph->array[dest].head;
    graph->array[dest].head = newNode;
}

void printGraph(struct Graph* graph) {
    int n;

    for (n = 0; n <= graph->n; n++) {
        struct AdjListNode* p = graph->array[n].head;
        if(p != NULL) {
            printf("\n%d -> ", n);
            while (p != NULL) {
                printf("%d ", p->val);
                p = p->next;
            }
            printf("\n");
        }
    }
}
