#include "C:\Users\danil\OneDrive\Documents\C.Exercises apr\queue.h"

struct AdjListNode {
    int val, weight;
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

struct AdjListNode* newAdjListNodeWeight(int value, int weight) {
    struct AdjListNode* newNode = (struct AdjListNode*) malloc(sizeof(struct AdjListNode));

    newNode->val = value;
    newNode->weight = weight;
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

void addEdgeWeight(struct Graph* graph, int src, int dest, int weight) {
    struct AdjListNode* newNode = newAdjListNodeWeight(dest, weight);

    newNode->next = graph->array[src].head;
    graph->array[src].head = newNode;

    newNode = newAdjListNodeWeight(src, weight);
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

void printGraphWeight(struct Graph* graph) {
    int n;

    for (n = 0; n <= graph->n; n++) {
        struct AdjListNode* p = graph->array[n].head;
        while (p != NULL) {
            printf("%d -> %d (%d)\t", n, p->val, p->weight);
            p = p->next;
        }
        printf("\n");
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

bool checkPathsDirected(struct Graph* graph) {
    int n, v, i;

    for(n = 0; n <= graph->n; n++) {
        for(v = n+1; v <= graph->n; v++) {
            if(isPathCheck(graph, n, v) == false) {
                return false;
            }
            for (i = 0; i <= graph->n; i++) {
                graph->visited[i] = 0;
            }
            if(isPathCheck(graph, v, n) == false) {
                return false;
            }
            for (i = 0; i <= graph->n; i++) {
                graph->visited[i] = 0;
            }
        }
    }

    return true;
}

void checkPathsWeight(struct Graph* graph, int k) {
    int n, i, j, o, count = 0, varf, lowest;
    struct AdjListNode* p;
    bool bool1 = false;
    int *path[50];
    for (i = 0; i < 50; i++) {
        path[i] = (int *)malloc(20 * sizeof(int));
    }
    int *mod;
    mod = (int *)malloc(50 * sizeof(int));
    int *num;
    num = (int *)malloc(50 * sizeof(int));

    for(n = 0; n <= graph->n; n++) {
        for(i = n + 1; i <= graph->n; i++) {
            p = graph->array[n].head;
            while(p != NULL) {
                varf = p->val;
                if(varf == i) {
                    bool1 = true;
                    if(p->weight < k) {
                        p->weight += k;
                        count++;
                    }
                    break;
                }
            }
            if(bool1 == false) {
                for(o = 0; o < 50; o++) {
                    for(j = 0; j < 20; j++) {
                        path[o][j] = 0;
                    }
                }
                for(o = 0; o < 50; o++) {
                    mod[o] = 0;
                }
                num = 0;
                findAllPaths(graph, n, i, path, mod, num, 0, k);
                for(o = 0; o < *num; o++) {
                    if(mod[o] < lowest) {
                        lowest = o;
                    }
                }
                //in acest punct ar trb sa avem indexul pathului cu cele mai putine mod necesare, iar acum ar trb sa le facem
            }
        }
    }

}

void findAllPaths(struct Graph* graph, int varfin, int v, int **path, int *mod, int *i, int j, int k) {
    struct AdjListNode* p;
    int varfadi, n;

    graph->visited[varfin] = 1;
    path[*i][j] = varfin;
    j++;

    if (varfin == v) {
        i++;
    }
    else {
        p = graph->array[varfin].head;
        while(p != NULL) {
            varfadi = p->val;
            if (graph->visited[varfadi] == 0) {
                if(p->weight < k) {
                    mod[*i]++;
                }
                findAllPaths(graph, varfadi, v, path, mod, i, j, k);
            }
            p = p->next;
        }
    }

    j--;
    graph->visited[varfin] = 0;
}

void CityBuy(struct Graph* graph) {
    int n, varfadi, count = 0;

    for (n = 0; n <= graph->n; n++) {
        struct AdjListNode* p = graph->array[n].head;
        while (p != NULL) {
            varfadi = p->val;
            if(graph->visited[n] == 0) {
                count++;
                graph->visited[n] = 1;
            }
            else if(graph->visited[varfadi] == 0) {
                count++;
                graph->visited[varfadi] = 1;
            }
            p = p->next;
        }
    }
    printf("There are %d cities which can be bought", count);
}
