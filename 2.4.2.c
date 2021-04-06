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

    struct node *head3 = NULL;
    struct node *p = head;
    struct node *q = head2;

    printf("Enter the first number for your 1 list: ");
    scanf("%d", &first->value);

    printf("Enter the second number for your 1 list: ");
    scanf("%d", &second->value);

    printf("Enter the third number for your 1 list: ");
    scanf("%d", &third->value);

    printf("Enter the fourth number for your 1 list: ");
    scanf("%d", &fourth->value);
    printf("\n");

    printf("Enter the first number for your 2 list: ");
    scanf("%d", &first2->value);

    printf("Enter the second number for your 2 list: ");
    scanf("%d", &second2->value);

    printf("Enter the third number for your 2 list: ");
    scanf("%d", &third2->value);

    printf("Enter the fourth number for your 2 list: ");
    scanf("%d", &fourth2->value);

    int i = 0;
    while(p != NULL && q != NULL) {
        if (p->value < q->value) {
            addNthNode(&head3, p->value, i);
            p = p->next;
            i++;
        }
        else {
            addNthNode(&head3, q->value, i);
            q = q->next;
            i++;
        }
    }

    while(p != NULL) {
        addNthNode(&head3, p->value, i);
        i++;
    }

    while(q != NULL) {
        addNthNode(&head3, q->value, i);
        i++;
    }
    count = CountAndPrint(&head3);
    printf("The length of the new list is %d", count);

    return 0;
}


