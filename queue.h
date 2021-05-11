struct QNode {
    int value;
    struct QNode* next;
};

struct Queue {
    struct QNode *front, *rear;
};

bool isEmpty(struct Queue *q) {

    if(q->front == NULL && q->rear == NULL) {
        return true;
    }
    else {
        return false;
    }
}

void enQueue(struct Queue* q, int value) {
    struct QNode *p;

    p = malloc(sizeof(struct QNode));
    p->value = value;

    if (q->rear == NULL) {
        q->front = q->rear = p;
        printf("The value %d was added", value);
    }
    else {
        p->next = q->rear;
        q->rear = p;
        printf("The value %d was added", value);
    }
}

void print(struct QNode* p) {

    printf("The list is: ");
    if(p == NULL) {
        printf("Queue is empty");
    }
    else {
        while(p != NULL) {
            printf("%d ", p->value);
            p = p->next;
        }
    }
}
