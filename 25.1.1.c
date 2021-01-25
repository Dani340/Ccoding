#include <stdio.h>
int main()
{
    char string1[100];
    char string2[10];
    int  i, count=0;

    printf("Enter a word or a sentence: ");
    gets(string1);

    printf("Enter a letter: ");
    gets(string2);


    for(i = 0; i < strlen(string1); i++)
    {
        if(string1[i] == string2[0]) {
            count++;
        }
    }

    printf("The letter you chose is repeated in the string you entered %d times", count);

    return 0;
}
