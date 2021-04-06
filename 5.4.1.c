#include <stdio.h>
#include <stdlib.h>
#include "doublelinkedlist.h"

int main() {
    struct node *head;
    struct node *first = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    struct node *fourth = NULL;
    int count;

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

    printf("Enter the first digit for your number: ");
    scanf("%d", &first->value);

    printf("Enter the second digit for your number: ");
    scanf("%d", &second->value);

    printf("Enter the third digit for your number: ");
    scanf("%d", &third->value);

    printf("Enter the fourth digit for your number: ");
    scanf("%d", &fourth->value);

    count = CountAndPrint2x(&head);
    printf("\nThe length of the linked list is %d \n", count);
    printf("\n");

    return 0;
}
