#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main() {

    struct node *head;
    struct node *tort = NULL;
    struct node *bezea = NULL;
    int count, count1, N, x, firstvalue, endvalue;

    tort = malloc(sizeof(struct node));
    bezea = malloc(sizeof(struct node));

    tort->value = 47;
    bezea->value = 5;

    tort->next = bezea;
    bezea->next = NULL;

    head = tort;

    printf("Enter a value: ");
    scanf("%d", &x);
    count1 = CountAndFind(head, x);
    if(count1 >= 0) {
        printf("\nThe value was found at the %d positon\n", count1+1);
    }
    else {
        printf("\nThe value was not found!\n");
    }
    printf("\n");

    printf("Enter a position of the list: ");
    scanf("%d", &N);
    count = FindByPosition(head, N);

    if(count >= 0) {
        printf("\nThe value at the entered position is %d\n", count);
    }
    else {
        printf("\nThere is no value at that position!\n");
    }
    printf("\n");

    printf("Enter the value of the node you want to add: ");
    scanf("%d", &firstvalue);
    addfirstNode(&head, firstvalue);
    printf("\n");

    printf("Enter the value of the node you want to add: ");
    scanf("%d", &endvalue);
    addlastNode(&head, endvalue);
    printf("\n");

    count = CountAndPrint(head);
    printf("\nThe length of the linked list is %d \n", count);
    printf("\n");
}
