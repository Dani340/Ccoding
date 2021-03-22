struct node {
  int value;
  struct node *next;
};

int Linkedlist(struct node *p) {
    int count = 0;

    while (p != NULL) {
        printf("%d ", p->value);
        p = p->next;
        count++;
    }

    return count;
}
