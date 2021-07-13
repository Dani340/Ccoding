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
    int* visited;
    int* path;
};

struct AdjListNode* newAdjListNode(int value) {
    struct AdjListNode* newNode = (struct AdjListNode*) malloc(sizeof(struct AdjListNode));

    newNode->val = value;
    newNode->next = NULL;

    return newNode;
}

struct Graph* createGraph(int arr[], int length) {
    int i, n;
    n = arr[0];

    i = 1;
    for(i = 0; i < length; i++) {
        if(arr[i] > n) {
            n = arr[i];
        }
    }

    struct Graph* graph = (struct Graph*) malloc(sizeof(struct Graph));
    graph->n = n;

    graph->array = (struct AdjList*) malloc(n * sizeof(struct AdjList));
    graph->visited = (int*) malloc(n * sizeof(int));
    graph->path = (int*) malloc(n * sizeof(int));

    for (i = 0; i <= n; i++) {
        graph->array[i].head = NULL;
        graph->visited[i] = 0;
        graph->path[i] = 0;
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

void addEdgeDir(struct Graph* graph, int src, int dest) {
    struct AdjListNode* newNode = newAdjListNode(dest);

    newNode->next = graph->array[src].head;
    graph->array[src].head = newNode;
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

void BFS(struct Graph* graph, int varfin) {
    int varfac, varfadi;
    struct Queue* q = malloc(sizeof(struct Queue));
    q->front = NULL;
    q->rear = NULL;

    graph->visited[varfin] = 1; // primul varf este trecut ca vazut
    enQueue(q, varfin); // este adaugat in coada

    while (isEmpty(q) == false) { // repetam procesul pana cand se termina varfurile din coada
        varfac = deQueue(q);
        printf("%d ", varfac); // pt ca este deja trecut ca vazut si este scos, este afisat varful ac

        struct AdjListNode* p = graph->array[varfac].head; // pointer la inceputul arrayului varfurilor adiacente celui actual (varfac)

        while (p != NULL) {
            varfadi = p->val;

            if (graph->visited[varfadi] == 0) { // daca nu este deja trecut varful adiacent ca vazut, se adauga in coada si este trecut ca vazut
                graph->visited[varfadi] = 1;
                enQueue(q, varfadi);
            }
            p = p->next; // pointerul merge pana la finalul listei de varfuri adiacente
        }
    }
}

void DFS(struct Graph* graph, int varfin) {
    int varfadi;
    struct AdjListNode* p = graph->array[varfin].head;

    graph->visited[varfin] = 1;
    printf("%d ", varfin);

    while (p != NULL) {
        varfadi = p->val;

        if (graph->visited[varfadi] == 0) {
            DFS(graph, varfadi);
        }
        p = p->next;
    }
}

bool isCycleAux(struct Graph* graph, int varf, int par) {
    int varfadi;
    struct AdjListNode* p = graph->array[varf].head;

    graph->visited[varf] = 1;

    while(p != NULL) {
        varfadi = p->val;
        if (graph->visited[varfadi] == 0) {
           if (isCycleAux(graph, varfadi, varf)) {
              return true;
           }
        }

        else if (varfadi != par) {
           return true;
        }

        p = p->next;
    }

    return false;
}

bool isCycle(struct Graph* graph) {
    for (int n = 0; n <= graph->n; n++) {
        if (graph->visited[n] == 0) {
            if (isCycleAux(graph, n, -1) == true) {
                return true;
            }
        }
    }

    return false;
}

bool isPath(struct Graph* graph, int varfin, int v, int n) {
    int varfadi, i;
    struct AdjListNode* p = graph->array[varfin].head;

    graph->visited[varfin] = 1;

    while (p != NULL) {
        varfadi = p->val;
        if(varfadi == v) {
            for(i = 0; i < n; i++) {
                printf("%d ", graph->path[i]);
            }
            return true;
        }
        else {
            if (graph->visited[varfadi] == 0) {
                graph->path[n] = varfadi;
                n++;
                if(isPath(graph, varfadi, v, n) == true) {
                    return true;
                }
            }
            p = p->next;
        }
    }

    return false;
}

bool isPathCheck(struct Graph* graph, int varfin, int v) {
    int varfadi, i;
    struct AdjListNode* p = graph->array[varfin].head;

    graph->visited[varfin] = 1;

    if(varfin == v) {
        return true;
    }

    while (p != NULL) {
        varfadi = p->val;
        if(varfadi == v) {
            return true;
        }
        else {
            if (graph->visited[varfadi] == 0) {
                if(isPathCheck(graph, varfadi, v) == true) {
                    return true;
                }
            }
            p = p->next;
        }
    }

    return false;
}

bool isShortPath(struct Graph* graph, int varfin, int v) {
    int varfadi, varfac, i, n = 0;
    struct Queue* q = malloc(sizeof(struct Queue));
    q->front = NULL;
    q->rear = NULL;


    graph->visited[varfin] = 1;
    enQueue(q, varfin);

    while (isEmpty(q) == false) {
        varfac = deQueue(q);

        struct AdjListNode* p = graph->array[varfac].head;

        while (p != NULL) {
            varfadi = p->val;
            if(varfadi == v) {
                for(i = 0; i < n; i++) {
                    printf("%d ", graph->path[i]);
                }
                return true;
            }

            if (graph->visited[varfadi] == 0) {
                graph->visited[varfadi] = 1;
                enQueue(q, varfadi);

                graph->path[n] = varfadi;
                n++;
            }
            p = p->next;
        }
    }

    return false;
}

void checkPaths(struct Graph* graph, int v) {
    int n, count = 0, arr[20];

    for(n = 0; n <= graph->n; n++) {
        if(isPathCheck(graph, n, v) == false) {
            count++;
            arr[count-1] = n;
        }
        graph->visited[n] = 0;
    }

    printf("\n%d\n", count);
    for(n = 0; n < count; n++) {
        printf("%d ", arr[n]);
    }
}
