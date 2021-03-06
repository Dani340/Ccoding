#include <stdio.h>
#include <stdlib.h>
#include <regex.h>

int main() {

    char S[30];
    int result;

    regex_t regex;

    printf("Enter a string to match: ");
    scanf("%s", S);

    result = regcomp(&regex, "^(http:\/\/www.|https:\/\/www.)[0-9a-zA-Z\_\-\.]+(.ro|.com)(\:[1-9]+)*(\/.+)*(\?.+)*", 0);
    result = regexec(&regex, S, 0, NULL, 0);

    if(result == 0) {
        printf("It's a valid URL!");
    }

    else {
        printf("It's not a valid URL!");
    }

    return 0;
}
