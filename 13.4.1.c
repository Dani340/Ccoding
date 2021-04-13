struct node {
  int value;
  struct node *next;
};

int CircularList(struct node **head) {

    struct node *p = *head;

    while(p != NULL) {
        if(p->next == *head) {
            return 0;
        }

        p = p->next;
    }

    return -1;
}

