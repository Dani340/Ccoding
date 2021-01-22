#include <stdio.h>

int main()
{

    char string[20];
    int i;

    printf("Enter the string of characters\n");
    scanf("%s", string);

    for(i=0; i < strlen(string); i++)
    {
        printf("%d ", string[i]);
    }

}
