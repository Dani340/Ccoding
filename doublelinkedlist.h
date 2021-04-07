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

    struct node * firstnode;
    firstnode = malloc(sizeof(struct node));

    firstnode->value = fvalue;

    firstnode->next = (*head);
    firstnode->prev = NULL;

    if ((*head) != NULL)
        (*head)->prev = firstnode;

    (*head) = firstnode;

    printf("Node added on the first position\n");
}

int addLastNode(struct node **head, int evalue) {

    struct node * endnode;
    endnode = malloc(sizeof(struct node));

    struct node * p = *head;

    endnode->value = evalue;

    endnode->next = NULL;

    if (*head == NULL) {
        endnode->prev = NULL;
        *head = endnode;
        return -1;
    }

    while (p->next != NULL)
        p = p->next;

    p->next = endnode;

    endnode->prev = p;

    printf("Node added on the last position\n");
}

void addKNode(struct node **head, int val, int K) {

    struct node *newnode;
    struct node * p = * head;
    int i;

    newnode = malloc(sizeof(struct node));
    newnode->value = val;

    if(K == 0) {
        addfirstNode(head, val);
    }
    else {
        for(i=0; i < K-1; i++) {
            p = p->next;
        }

        newnode->next = p->next;

        p->next = newnode;

        newnode->prev = p;

        newnode->next->prev = newnode;

        printf("Node added on the %d position\n", K);
    }


}

void deletefirstNode(struct node **head) {
    struct node * p = * head;

    *head = (*head)->next;
    p->next->prev = NULL;
    p->next = NULL;
    free(p);

    printf("First node deleted!\n");
}
