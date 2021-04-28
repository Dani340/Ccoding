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
    int i, count = 0;

    printf("All of the elements are: ");
    for (i = 0; i <= p->top; i++) {
        printf("%d ", p->items[i]);
        count++;
    }
    printf("\n");
    printf("The stack has %d elements\n", count);

}

void push(struct stack *p, int value) {
    if (isFull(p) == true) {
        printf("The stack is full!");
    }
    else {
        p->top++;
        p->items[p->top] = value;
        printf("The value %d was added to the stack\n", value);
    }
}
