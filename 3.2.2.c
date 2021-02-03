#include <stdio.h>
#include <ctype.h>

int main() 
{
    char string1[100];
    int  i, truth=0;

    printf("Enter an email adress: ");
    gets(string1);

    if (strcmp(string1 + strlen(string1) - 4, ".com" || strcmp(string1 + strlen(string1) - 4, ".org") != NULL || strcmp(string1 + strlen(string1) - 4, ".net") {
        truth++;
    }

    if(strchr(string1, '@') != NULL) {
        truth++;
    }
    
    if(truth == 2) {
        printf("It's a valid adress");
    }

    else {
        printf("It's not a valid adress");
    }

    return 0;
}

