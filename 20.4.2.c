#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "linkedlist.h"

int main() {
    struct Node *head;
    struct Node *first = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;
    struct Node *fourth = NULL;
    int count, i=0, arrdec=0;;

    first = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));
    fourth = malloc(sizeof(struct node));

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;
    head = first;

    struct Node *p = head;

    printf("Enter the first digit for your number: ");
    scanf(" %c", &first->value);

    printf("Enter the second digit for your number: ");
    scanf(" %c", &second->value);

    printf("Enter the third digit for your number: ");
    scanf(" %c", &third->value);

    printf("Enter the fourth digit for your number: ");
    scanf(" %c", &fourth->value);

    while (p != NULL) {
        if(p->value >='0' && p->value <= '9') {
            p->value = p->value - 48; //char-dec//
        }
        else if(p->value >= 'A' && p->value <= 'F') {
            p->value = p->value - 55;
        }

        arrdec += p->value * pow(16, i);
        p = p->next;
        i++;
    }

    printf("The converted number from hexadecimal is %d", arrdec);
    printf("\n");
}

