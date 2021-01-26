#include<stdio.h>
#include <string.h>

int main()
{
    char str[80];
    char substr[10];
    int i, j, result;

    printf("Enter a string:");
    gets(str);

    printf("Enter a substring:");
    gets(substr);

    for (i = 0; i <= strlen(str) - strlen(substr); i++) {
        for (j = i; j < i + strlen(substr); j++) {
            result = 1;
            if (str[j] != substr[j - i]) {
                result = 0;
                break;
            }
        }
        if (result == 1) {
            break;
        }
    }

    if (result == 1) {
        printf("True");
    }
    else {
        printf("False");
    }

    return 0;
}
