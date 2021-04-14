#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main() {
    int N;
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

    printf("Enter the first digit for your number: ");
    scanf("%d", &first->value);

    printf("Enter the second digit for your number: ");
    scanf("%d", &second->value);

    printf("Enter the third digit for your number: ");
    scanf("%d", &third->value);

    printf("Enter the fourth digit for your number: ");
    scanf("%d", &fourth->value);

    count = CountAndPrint(&head);
    printf("\nThe length of the linked list is %d \n", count);
    printf("\n");

    printf("Enter the position (from the end) of the node you want to delete: ");
    scanf("%d", &K);
    if(deleteNthNode(&head, count-K-1) == 0) {
        printf("%d node deleted", count-K-1);
    }
    printf("\n");

    CountAndPrint(&head);
    printf("\nThe new length of the linked list is %d \n", count-1);

}
