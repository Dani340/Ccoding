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
    int count, count1, i=1, ci, sum, nr=0, nr2=0;

    first = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));
    fourth = malloc(sizeof(struct node));

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;
    head = first;

    struct node *head2;
    struct node *first2 = NULL;
    struct node *second2 = NULL;
    struct node *third2 = NULL;
    struct node *fourth2 = NULL;

    first2 = malloc(sizeof(struct node));
    second2 = malloc(sizeof(struct node));
    third2 = malloc(sizeof(struct node));
    fourth2 = malloc(sizeof(struct node));

    first2->next = second2;
    second2->next = third2;
    third2->next = fourth2;
    fourth2->next = NULL;
    head2 = first2;

    struct node *p = head;
    struct node *q = head2;

    printf("Enter the first digit for your 1 number: ");
    scanf("%d", &first->value);

    printf("Enter the second digit for your 1 number: ");
    scanf("%d", &second->value);

    printf("Enter the third digit for your 1 number: ");
    scanf("%d", &third->value);

    printf("Enter the fourth digit for your 1 number: ");
    scanf("%d", &fourth->value);
    printf("\n");

    printf("Enter the first digit for your 2 number: ");
    scanf("%d", &first2->value);

    printf("Enter the second digit for your 2 number: ");
    scanf("%d", &second2->value);

    printf("Enter the third digit for your 2 number: ");
    scanf("%d", &third2->value);

    printf("Enter the fourth digit for your 2 number: ");
    scanf("%d", &fourth2->value);

    count = 0;
    while(p != NULL && q != NULL) {
        sum = p->value + q->value + count;
        if (sum > 9) {
            p->value = sum % 10;
            count = 1;
        }
        else {
            p->value = sum;
            count = 0;
        }
        p = p->next;
        q = q->next;
    }

    if (count == 1) {
        addlastNode(&head, 1);
    }

    while(q != NULL) {
        addlastNode(&head, q->value);
    }

    count1 = CountAndPrint(&head);
    printf("\nThe length of the linked list is %d \n", count1);
    printf("\n");
}
