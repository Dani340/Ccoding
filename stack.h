#define N 10

struct stack {
    int items[N];
    int top;
};

bool isEmpty(struct stack *p) {
    if (p->top == -1) {
        return true;
    }
    else {
        return false;
    }
}

bool isFull(struct stack *p) {
    if (p->top == N - 1) {
        return true;
    }
    else {
        return false;
    }
}

void printAll(struct stack *p) {

    printf("All of the elements are: ");
    for (int i = 0; i <= p->top; i++) {
        printf("%d ", p->items[i]);
    }
    printf("\n");

}
