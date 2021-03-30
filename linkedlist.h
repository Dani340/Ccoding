struct node {
  int value;
  struct node *next;
};

int CountAndPrint(struct node *p) {
    int count = 0;

    while (p != NULL) {
        printf("%d ", p->value);
        p = p->next;
        count++;
    }

    return count;
}

int CountAndFind(struct node *p, int x) {
    int count = 0;

    while (p != NULL) {
        if (p->value == x) {
            return count;
            break;
        }
        p = p->next;
        count++;
    }
    return -1;

}

int FindByPosition(struct node *p, int N) {
    int count = 0;

    while (p != NULL) {
        if (count == N-1) {
            return p->value;
            break;
        }
        p = p->next;
        count++;
    }
    return -1;

}

void addfirstNode(struct node **head, int fvalue) {
    struct node *firstv;

    firstv = malloc(sizeof(struct node));

    firstv->value = fvalue;
    firstv->next = (*head);
    (*head) = firstv;

    printf("Node added on the first position\n");
}

void addlastNode(struct node **head, int evalue) {
    struct node *endv;
    struct node * p = * head;

    endv = malloc(sizeof(struct node));
    endv->value = evalue;

    while(p != NULL && p->next != NULL) {
        p = p -> next;
    }

    if (p != NULL) {
        p->next = endv;
        endv->next = NULL;
    }
    else {
        *head = endv;
    }

    printf("Node added on the last position\n");
}

void addNthNode(struct node **head, int val, int N) {
    struct node *newnode;
    struct node * p = * head;
    int i;

    newnode = malloc(sizeof(struct node));
    newnode->value = val;

    for(i=0; i < N-1; i++) {
        p = p -> next;
    }

    newnode->next = p->next;
    p->next = newnode;

    printf("Node added on the %d position\n", N);
}

void deletefirstNode(struct node **head) {
    struct node * p = * head;

    *head = (*head)->next;
    p->next = NULL;
    free(p);

    printf("First node deleted!\n");
}

void deletelastNode(struct node **head) {
    struct node * p = *head;

    while(p->next->next != NULL) {
        p = p->next;
    }

    p->next = NULL;
    free(p->next);

    printf("Last node deleted!\n");
}

void deleteNthNode(struct node **head, int N) {
    struct node * p = *head;
    struct node * mem;
    int i;

    for(i = 0; i < N-1; i++) {
        p = p->next;
    }

    mem = p->next;
    p->next = p->next->next;
    free(mem);

    printf("%d node deleted!\n",N);
}

int deleteNvalNode(struct node **head, int x) {

    struct node * p = *head;
    struct node * mem;
    int count=-1;

    if(p->value == x) {
        deletefirstNode(head);
    }
    else {
        while (p != NULL && p->next != NULL) {
            if (p->next->value == x) {
                mem = p->next;
                p->next = p->next->next;
                free(mem);
                count = 1;
                break;
            }
            else {
                p = p->next;
                count--;
            }
        }
    }

    return count;
}
