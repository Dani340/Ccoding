#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main() {
    int N, i, nval[100], count;
    struct node *head = NULL;

    printf("Enter the number of digits: ");
    scanf("%d", &N);

    printf("Enter the digits of the base 2 number\n");
    for(i = 0; i < N; i++) {
        scanf("%d", &nval[i]);
        addlastNode(&head, nval[i]);
    }

    count = CountAndPrint(head);
    printf("\nThe length of the linked list is %d \n", count);
    printf("\n");
}
