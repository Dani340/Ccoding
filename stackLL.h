struct Node {
    int value;
    struct Node *next;
};

bool isEmpty(struct Node **top) {
    if (top == NULL) {
        return true;
    }
    else {
        return false;
    }
}

void push(struct Node **top, int value) {

    struct Node *p;
    p = malloc(sizeof(struct Node));

    p->value = value;
    p->next = (*top);
    (*top) = p;

    printf("The value %d was added at the top of the stack\n", value);
}

void pop(struct Node **top) {

    struct Node *p;
    p = malloc(sizeof(struct Node));

    if (isEmpty(top) == true) {
        printf("The list is empty");
    }
    else {
        p = (*top);
        (*top) = (*top)->next;
        p->next = NULL;

        printf("The value %d was deleted from the stack\n", p->value);
        free(p);
    }
}

int peek(struct Node **top) {
    if (isEmpty(top) == false) {
        printf("The top of the list is %d", (*top)->value);
    }
    else {
        printf("The list is empty");
    }
}

