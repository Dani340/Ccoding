#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stackLL.h"

int main() {
    struct node *top;
    struct node *p;
    char P[10];
    int i = 0, count = 0;

    printf("Enter the sequence: ");
    scanf("%s", &P);

    while(P[i] != '\0') {
        if(P[i] == '(') {
            pushchar(&top, P[i]);
            i++;
        }
        else if(P[i] == ')') {
            if (popchar(&top) != '(') {
                printf("False");
                return 0;
            }
            i++;
        }
    }
    printf("True");
}
