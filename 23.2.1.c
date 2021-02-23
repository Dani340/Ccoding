#include <stdio.h>

int main()
{
    int i, j, count, N, orderer[100];

    printf("Enter N: ");
    scanf("%d", &N);

    printf("Enter %d numbers \n", N);
    for (i = 0; i < N; ++i) {
        scanf("%d", &orderer[i]);
    }

    for (i = 0; i < N; ++i) {
        for (j = i + 1; j < N; ++j) {
            if (orderer[i] > orderer[j]) {
                count =  orderer[i];
                orderer[i] = orderer[j];
                orderer[j] = count;
            }
        }

    }

    printf("The second smallest number is %d", orderer[1]);

}
