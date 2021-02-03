#include <stdio.h>
#include <ctype.h>

int main()
{
    char string1[100];
    int  i, count=1;

    printf("Enter a word or a sentence: ");
    gets(string1);

    for(i = 0; i < strlen(string1); i++)
    {
        if(isspace(string1[i]) && isalpha(string1[i-1]) && isalpha(string1[i+1])) {
            count++;
        }
    }
    printf("There are %d words in the string", count);
}
