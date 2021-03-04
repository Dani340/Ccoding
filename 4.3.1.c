#include <stdio.h>

int main()
{
    char text[100];
    char * str = text;
    int count = 0, i=0;

    printf("Enter any string: ");
    gets(text);

    while (str[i] != '\0')
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
        i++;
    }

    printf("There are %d vowels in the string", count);

    return 0;
}
