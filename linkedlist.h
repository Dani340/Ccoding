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

int addfirstNode(struct node **head, int fvalue) {
    struct node *firstv;

    firstv = malloc(sizeof(struct node));

    firstv->value = fvalue;
    firstv->next = (*head);
    (*head) = firstv;

    printf("Node added!");
}

int addlastNode(struct node **head, int evalue) {
    struct node *endv;
    struct node * p = * head;

    endv = malloc(sizeof(struct node));
    endv->value = evalue;

    while(p->next != NULL) {
        p = p -> next;
    }

    p->next = endv;
    endv->next = NULL;

    printf("Node added!\n");
}
