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
    int count, arrbi;

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
    arrbi += 1000 * first->value;

    printf("Enter the second digit for your number: ");
    scanf("%d", &second->value);
    arrbi += 100 * second->value;

    printf("Enter the third digit for your number: ");
    scanf("%d", &third->value);
    arrbi += 10 * third->value;

    printf("Enter the fourth digit for your number: ");
    scanf("%d", &fourth->value);
    arrbi += fourth->value;

    int rest, i=0, arrdec=0;

    while(arrbi != 0) {
        rest = arrbi % 10;
        arrdec += rest * pow(2, i);
        i++;
        arrbi = arrbi / 10;
    }

    count = CountAndPrint(head);
    printf("\nThe length of the linked list is %d \n", count);
    printf("The converted number is %d", arrdec);
    printf("\n");
}

/*
    int N;
    struct node *head = NULL;

    printf("Enter the number: ");
    scanf("%d", &N);

    while(N != 0 || N != 1) {
        addlastNode(&head, N % 10);
        N = N / 10;
        printf("%d", N);
    }
*/
