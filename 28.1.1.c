#include <stdio.h>
#include <ctype.h>

int main()
{
    char string1[100];
    int  i;

    printf("Enter a word or a sentence: ");
    gets(string1);

    for(i = 0; i < strlen(string1); i++)
    {
        if(isalpha(string1[i])) {
            string1[i] += 1;
        }
    }
    printf("After converting the letters to the next one in the alphabet, we get:\n");
    puts(string1);
}
