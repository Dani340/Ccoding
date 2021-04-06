struct node {
    int value;
    struct node* next;
    struct node* prev;
};

int CountAndPrint(struct node **head) {
    struct node * p = * head;
    int count = 0;

    while (p != NULL) {
        printf("%d ", p->value);
        p = p->next;
        count++;
    }

    return count;
}

int CountAndPrint2x(struct node **head) {
    struct node * p = * head;
    int count = 0;

    while (p->next != NULL) {
        printf("%d ", p->value);
        p = p->next;
        count++;
    }

    printf("%d ", p->value);
    count++;

    while (p != NULL) {
        printf("%d ", p->value);
        p = p->prev;
    }

    return count;
}

void addfirstNode(struct node **head, int fvalue) {

    struct node* firstnode;
    firstnode = malloc(sizeof(struct node));

    firstnode->value = fvalue;

    firstnode->next = (*head);
    firstnode->prev = NULL;

    if ((*head) != NULL)
        (*head)->prev = firstnode;

    (*head) = firstnode;

    printf("Node added on the first position\n");
}
