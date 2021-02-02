#include <stdio.h>
int main()
{
    char string1[100];
    char X, Y;
    int  A, i, count=0;

    printf("Enter a word or a sentence: ");
    gets(string1);

    printf("Enter a letter: ");
    scanf(" %c", &X);

    printf("Enter another letter: ");
    scanf(" %c", &Y);

    printf("Enter a number: ");
    scanf(" %d", &A);


    for(i = 0; i < strlen(string1); i++)
    {
        if(string1[i] == X) {
            count++;
        }
        if(count == A) {
            string1[i] = Y;
            break;
        }
    }

    printf("%s", string1);


    return 0;
}
