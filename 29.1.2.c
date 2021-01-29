#include <stdio.h>
int main()
{
    char S[100];
    int X[100];
    int i, sum=0;

    printf("Enter a word or a sentence: ");
    gets(S);

    printf("Enter a list of numbers: \n");

    for(i = 0; i < strlen(S)+1; i++)
    {
        scanf(" %d", &X[i]);
    }

    if(S[0] == 'a') {
        sum += X[0] + X[1];
    }

    else if(S[0] == 's') {
        sum += X[0] - X[1];
    }

    for(i = 1; i < strlen(S); i++)
    {
        if(S[i] == 'a') {
        sum += X[i+1];
        }
        else if(S[i] == 's') {
        sum -= X[i+1];
        }
    }


    printf("%d", sum);


    return 0;
}
