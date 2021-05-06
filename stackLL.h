struct Node {
    int value;
    struct Node *next;
};

struct node {
    char value;
    struct node *next;
};

bool isEmpty(struct Node **top) {
    if (top == NULL) {
        return true;
    }
    else {
        return false;
    }
}

bool isEmptychar(struct node **top) {
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

void pushchar(struct node **top, int value) {

    struct node *p;
    p = malloc(sizeof(struct node));

    p->value = value;
    p->next = (*top);
    (*top) = p;
}

int pop(struct Node **top) {

    struct Node *p;
    p = malloc(sizeof(struct Node));

    if (isEmpty(top) == true) {
        printf("The list is empty");
    }
    else {
        p = (*top);
        (*top) = (*top)->next;
        p->next = NULL;

        int x = p->value;
        free(p);
        return x;
    }
}

char popchar(struct node **top) {

    struct node *p;
    p = malloc(sizeof(struct node));

    if (isEmptychar(top) == true) {
        printf("The list is empty");
    }
    else {
        p = (*top);
        (*top) = (*top)->next;
        p->next = NULL;

        int x = p->value;
        free(p);
        return x;
    }
}

int peek(struct Node **top) {
    if (isEmpty(top) == false) {
        return (*top)->value;
    }
    else {
        printf("The list is empty");
    }
}

