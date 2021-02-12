#include <stdio.h>
#include "school.h"
int main() {
    int N, c;
    float x[100], y, sum;

    printf("Enter the number of marks you have: \n");
    scanf("%d", &N);
    printf("Enter your marks: \n");
    for (c = 0; c < N; c++)
    {
        scanf("%f", &x[c]);
    }
    printf("Enter the grade of the final \n");
    scanf("%f", &y);

    sum = (Medie(x, y));

    printf("%f",sum);

}
