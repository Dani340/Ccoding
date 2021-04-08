#include <stdio.h>
#include <stdlib.h>
#include "doublelinkedlist.h"

int main() {
    struct node *head;
    struct node *first = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    struct node *fourth = NULL;
    int count, K;

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

    count = CountAndPrint(&head);
    printf("\nThe length of the linked list is %d \n\n", count);

    printf("Enter the position of the node to be deleted: ");
    scanf("%d", &K);

    printf("\n");

    if(K == count-1) {
        deletelastNode(&head);
    }
    else {
        deleteKNode(&head, K);
    }

    count = CountAndPrint(&head);
    printf("\nThe new length of the linked list is %d \n", count);

    return 0;
}
