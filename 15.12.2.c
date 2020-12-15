#include <stdio.h>

int main()
{
    int total = 0, elem1 = 1, elem2 = 1, elem3, n;

    printf("Enter the value of num: \n");
    scanf("%d", &n);

    if(n <= 0) {
        printf("There are no Fibonnaci numbers in the range you gave!");
    }

    if(n > 1) {
        printf("The First %d numbers of the Fibonnaci series are \n", n);
        printf("%d\n", elem1);
        printf("%d\n", elem2);
    }

    else if(n == 1) {
        printf("The First %d numbers of the Fibonnaci series are \n", n);
        printf("%d\n", elem1);
    }



    total = 2;
    while (total < n)
    {
        elem3 = elem1 + elem2;
        total++;
        printf("%d\n", elem3);
        elem1 = elem2;
        elem2 = elem3;
   }
}
