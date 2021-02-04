#include <stdio.h>

int main()
{
    int numbers[100];
    int  N, i, j, count=0;

    printf("Enter the number of elements you want for the list: ");
    scanf(" %d", &N);

    printf("Enter %d numbers \n", N);

    for(i = 0; i < N; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for(i = 0; i < N; i++) {
        for(j = i+1; j < N; j++) {
            if(numbers[i] == numbers[j]) {
                count++;
                break;
            }
        }
    }

    if(count == 0) {
        printf("True");
    }

    else {
        printf("False");
    }

    return 0;
}
