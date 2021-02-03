#include <stdio.h>
#include <ctype.h>

int main()
{
    char string1[100];
    int  i, truth=0;

    printf("Enter an email adress: ");
    gets(string1);

    if(strcmp(string1 + strlen(string1) - 4, ".com") == 0 || strcmp(string1 + strlen(string1) - 4, ".org") == 0 || strcmp(string1 + strlen(string1) - 4, ".net") == 0) {
        truth++;
    }

    for(i = 0; i < strlen(string1); i++) {
        if(string1[i] == '@' && isalpha(string1[i+1]) && isalpha(string1[i-1])) {
            truth++;
            break;
        }
    }

    if(truth == 2) {
        printf("It's a valid adress");
    }

    else {
        printf("It's not a valid adress");
    }

    return 0;
}


