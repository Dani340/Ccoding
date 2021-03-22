#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main() {

    struct node *head;
    struct node *tort = NULL;
    struct node *bezea = NULL;
    int count;

    tort = malloc(sizeof(struct node));
    bezea = malloc(sizeof(struct node));

    tort->value = 47;
    bezea->value = 5;

    tort->next = bezea;
    bezea->next = NULL;

    head = tort;

    count = Linkedlist(head);
    printf("\nThe length of the linked list is %d", count);
}
