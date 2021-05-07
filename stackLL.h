struct Node {
    int value;
    struct Node *next;
};

struct node {
    char value;
    struct node *next;
};

struct nodestr {
    char value[10];
    struct nodestr *next;
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

bool isEmptystr(struct nodestr **top) {
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

void pushstr(struct nodestr **top, char value[]) {

    struct nodestr *p;
    p = malloc(sizeof(struct nodestr));

    (*p->value) = (*value);
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

char* popstr(struct nodestr **top) {

    struct nodestr *p;
    p = malloc(sizeof(struct nodestr));

    if (isEmptystr(top) == true) {
        printf("The list is empty");
    }
    else {
        p = (*top);
        (*top) = (*top)->next;
        p->next = NULL;

        char *x = p->value;
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

void displaystr(struct nodestr *top) {
    struct nodestr* p;

    if (top == NULL) {
        printf("Stack is empty");
    }
    else {
        p = top;
        while (p != NULL) {
            printf("%s", p->value);
            p = p->next;
        }
    }
}


