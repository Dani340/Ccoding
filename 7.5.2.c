#include <stdio.h>
#include <stdlib.h>
#include <regex.h>

int main() {

    char S[30];
    int result;

    regex_t regex;

    printf("Enter a string to match: ");
    scanf("%s", S);

    result = regcomp(&regex, "[a-zA-Z1-9\_\.]+@[a-zA-Z1-9]+(.ro|.com)$", 0);
    result = regexec(&regex, S, 0, NULL, 0);

    if(result == 0) {
        printf("It's a valid adress!");
    }

    else {
        printf("It's not a valid adress!");
    }

    return 0;
}
