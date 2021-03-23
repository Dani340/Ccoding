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

int CountAndFind(struct node *p, struct node *x) {
    int count = 0;

    while (p != NULL) {
        if (p->value == x->value) {
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
