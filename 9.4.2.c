#include <stdio.h>
#include <stdlib.h>
#include "doublelinkedlist.h"

int main() {
    struct node *head;
    struct node *first = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    struct node *fourth = NULL;
    int count, rest;

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

    printf("Enter the first number: ");
    scanf("%d", &first->value);

    printf("Enter the second number: ");
    scanf("%d", &second->value);

    printf("Enter the third number: ");
    scanf("%d", &third->value);

    printf("Enter the fourth number: ");
    scanf("%d", &fourth->value);

    struct node *p = head;
    struct node *q = p->next;

    count = CountAndPrint(&head);
    printf("\nThe length of the linked list is %d \n", count);

    printf("\n");

    while(p != NULL) {
        q = p->next;
        while(q != NULL) {
            if(q->value > p->value) {
                rest = p->value;
                p->value = q->value;
                q->value = rest;
            }
            q = q->next;
        }
        p = p->next;
    }

    printf("The new list is \n");
    count = CountAndPrint(&head);

    return 0;
}
