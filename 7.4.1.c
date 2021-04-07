#include <stdio.h>
#include <stdlib.h>
#include "doublelinkedlist.h"

int main() {
    struct node *head;
    struct node *first = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    struct node *fourth = NULL;
    int count, k, i=1;

    first = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));
    fourth = malloc(sizeof(struct node));

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;
    head = first;

    fourth->prev = third;
    third->prev = second;
    second->prev = first;
    first->prev = NULL;

    struct node *p = head;

    printf("Enter the first number: ");
    scanf("%d", &first->value);

    printf("Enter the second number: ");
    scanf("%d", &second->value);

    printf("Enter the third number: ");
    scanf("%d", &third->value);

    printf("Enter the fourth number: ");
    scanf("%d", &fourth->value);

    printf("Enter the value of the node you want to add: ");
    scanf("%d", &k);

    printf("\n");

    if(k < p->value) {
        addfirstNode(&head, k);
    }

    while(p != NULL && p->next != NULL) {
        if(k > p->value && k < p->next->value) {
            addKNode(&head, k, i);
        }
        p = p->next;
        i++;
    }

    if(k > p->value) {
        if(addLastNode(&head, k) == -1) {
            printf("The list was empty, but the node was added\n");
        }
    }

    count = CountAndPrint(&head);
    printf("\nThe length of the linked list is %d \n", count);

    return 0;
}
