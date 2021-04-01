#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "linkedlist.h"

int main() {
    int N;
    struct node *head;
    struct node *first = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    struct node *fourth = NULL;
    struct node *fifth = NULL;
    int count, mid;

    first = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));
    fourth = malloc(sizeof(struct node));
    fifth = malloc(sizeof(struct node));

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;
    head = first;

    struct node *q = head;
    struct node *p = head;

    printf("Enter the first digit for your number: ");
    scanf("%d", &first->value);

    printf("Enter the second digit for your number: ");
    scanf("%d", &second->value);

    printf("Enter the third digit for your number: ");
    scanf("%d", &third->value);

    printf("Enter the fourth digit for your number: ");
    scanf("%d", &fourth->value);

    printf("Enter the fifth digit for your number: ");
    scanf("%d", &fifth->value);

    count = CountAndPrint(&head);
    printf("\nThe length of the linked list is %d \n", count);
    printf("\n");

    while(q->next != NULL) {
        q = q->next->next;
        p = p->next;
    }

    mid = p->value;
    printf("The value in the middle is %d", mid);
}
