#include <stdio.h>

int main() {
    int i,j,N;
    char letter;

    printf("Enter the number: ");
    scanf("%d",&N);

    letter = 'A';
    for(i = 0; i < N; i++) {
        for(j = 0; j <= i; j++) {
            if(letter <= 90) {
                printf("%c ", letter);
                letter++;
            }
            else {
                letter = 'A';
                printf("%c ", letter);
                letter++;
            }
        }
        printf("\n");
    }

    return 0;
}