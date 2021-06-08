#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[50];
    int i, j, n, S, sum = 0;

    printf("Enter the number of players in the team FCSpreB: ");
    scanf("%d", &n);

    printf("Enter the amount of money Nea Gigi is working with: ");
    scanf("%d", &S);

    printf("Enter the %d names of the players \n", n);
    for(i = 0; i < n; i++) {
        scanf(" %s", s);
        for(j = 0; j < strlen(s); j++) {
            if(isalpha(s[j]) != 0) {
                sum += s[j];
            }
        }
    }

    if(sum <= S) {
        printf("The budget of Nea Gigi can cover all of the expenses");
    }
    else {
        printf("The budget is not enough to cover all of the expenses");
    }

}
