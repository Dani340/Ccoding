#include <stdio.h>
int main()
{
    char string1[100];
    char X;
    char Y;
    int  i;

    printf("Enter a word or a sentence: ");
    gets(string1);

    printf("Enter a letter: ");
    scanf(" %c", &X);

    printf("Enter another letter: ");
    scanf(" %c", &Y);


    for(i = 0; i < strlen(string1); i++)
    {
        if(string1[i] == X) {
            string1[i] = Y;
            break;
        }
    }

    printf("%s", string1);


    return 0;
}
