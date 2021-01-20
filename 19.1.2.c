#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];

    printf("Enter a word or a sentence to convert to lower case: ");
    gets(string);

    printf("The word or sentence lower cased is: %s", strlwr(string));

    return  0;
}
