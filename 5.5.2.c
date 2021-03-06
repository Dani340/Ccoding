#include <stdio.h>
#include <stdlib.h>
#include <regex.h>

int main() {

    char S[30];
    int result;

    regex_t regex;

    printf("Enter a string to match: ");
    scanf("%s", S);

    result = regcomp(&regex, "^B[0-9]{2,3}[a-zA-Z]{3}$", 0);
    result = regexec(&regex, S, 0, NULL, 0);

    if(result == 0) {
        printf("True");
    }

    else {
        printf("False");
    }

    return 0;
}
