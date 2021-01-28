#include <stdio.h>
int main()
{
    char string1[100];
    char X;
    char Y;
    int  i, countX=0, countY=0;

    printf("Enter a word or a sentence: ");
    gets(string1);

    printf("Enter a letter: ");
    scanf(" %c", &X);

    printf("Enter another letter: ");
    scanf(" %c", &Y);


    for(i = 0; i < strlen(string1); i++)
    {
        if(string1[i] == X) {
            countX++;
        }
        else if(string1[i] == Y) {
            countY++;
        }
    }

    if(countX == countY) {
        printf("True");
    }
    else {
        printf("False");
    }

    return 0;
}
