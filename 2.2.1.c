#include <stdio.h>

int main()
{
    int list[100]={0}, i, n;

    printf("Enter the amount of numbers you want in the list: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    for(i=0; i < n; i++)
    {
        scanf("%d",&list[i]);
    }

    for(i=0; i < n; i++)
    {
        if(i != 0 && i != n-1) {
            if(list[i] > list[i-1] && list[i] > list[i+1]) {
                printf("%d ", list[i]);
            }
        }
    }

    return 0;
}
