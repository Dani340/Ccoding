#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "linkedlist.h"

int main() {
    struct node2 *head;
    struct node2 *first = NULL;
    struct node2 *second = NULL;
    struct node2 *third = NULL;
    struct node2 *fourth = NULL;
    struct node2 *fifth = NULL;
    int count;
    char deletestr[10];

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

    struct node2 * p = head;
    struct node2 * mem;

    printf("Enter the first string for your list: ");
    scanf("%s", first->value);

    printf("Enter the second string for your list: ");
    scanf("%s", second->value);

    printf("Enter the third string for your list: ");
    scanf("%s", third->value);

    printf("Enter the fourth string for your list: ");
    scanf("%s", fourth->value);

    printf("Enter the fifth string for your list: ");
    scanf("%s", fifth->value);

    printf("Enter the string to be deleted: ");
    scanf("%s", deletestr);

    count = CountAndPrintStr(head);
    printf("\nThe length of the linked list is %d \n", count);
    printf("\n");

    count = -1;
    if(strcmp(p->value, deletestr) == 0) {
        head = head->next;
        p->next = NULL;
        free(p);
        count = 1;
    }

    while(p != NULL && p->next != NULL) {
        if(strcmp(p->next->value, deletestr) == 0) {
            mem = p->next;
            p->next = p->next->next;
            free(mem);
            count = 1;
        }
        else {
            p = p->next;
            count--;
        }
    }

    if(count == 1) {
        printf("The node with value %s was deleted!\n", deletestr);
        count = CountAndPrintStr(head);
        printf("\nThe length of the linked list is %d \n", count);
        printf("\n");
    }
    else {
        printf("\nThe value was not found!\n");
    }
    printf("\n");
}
