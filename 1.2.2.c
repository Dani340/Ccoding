#include <stdio.h>

int main()
{
    int list[100]={0}, i, x, n, count;

    printf("Enter the amount of numbers you want in the list: ");
    scanf("%d", &n);

    printf("Enter %d numbers randomly from 1 to n:\n", n-1);

    for(i=0; i < n-1; i++)
    {
        scanf("%d",&x);
        list[x-1] = x;
    }

    for(i=0; i < n; i++)
    {
        if(list[i] == 0) {
            count = i+1;
        }
    }


    printf("The missing number is %d", count);

    return 0;
}
