#include <stdio.h>

int main()
{
    char string[100];
    int  i, j, count=0;

    printf("Enter the string: ");
    gets(string);

    for(i = 0; i < strlen(string); i++) {
        for(j = i+1; j < strlen(string); j++) {
            if(string[i] == string[j]) {
                count++;
                break;
            }
        }
    }

    if(count == 0) {
        printf("True");
    }

    else {
        printf("False");
    }

    return 0;
}
