#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "linkedlist.h"

int main() {
    struct Node *head;
    struct Node *first = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;
    struct Node *fourth = NULL;
    struct Node *fifth = NULL;
    int count;
    char rest;

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

    struct Node * p = head;
    struct Node * q = p->next;

    printf("Enter the first string for your list: ");
    scanf("%c", &first->value);

    printf("Enter the second string for your list: ");
    scanf(" %c", &second->value);

    printf("Enter the third string for your list: ");
    scanf(" %c", &third->value);

    printf("Enter the fourth string for your list: ");
    scanf(" %c", &fourth->value);

    printf("Enter the fifth string for your list: ");
    scanf(" %c", &fifth->value);

    count = CountAndPrintChar(&head);
    printf("\nThe length of the linked list is %d \n", count);
    printf("\n");

    while(p != NULL) {
        q = p->next;
        while(q != NULL) {
            if((int)q->value < (int)p->value) {
                rest = p->value;
                p->value = q->value;
                q->value = rest;
            }
            q = q->next;
        }
        p = p->next;
    }

    printf("The new list is: ");
    count = CountAndPrintChar(&head);
    printf("\n");

}
