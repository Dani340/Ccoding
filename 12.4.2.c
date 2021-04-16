#include <stdio.h>
#include <stdlib.h>
#include <regex.h>

int main() {

    char word[10], text[30];
    int result;

    FILE *fptr;
    regex_t regex;

    if ((fptr = fopen("text.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    printf("Enter a word to match: ");
    scanf("%s", word);
    fscanf(fptr, "%[^\n]", text);

    fclose(fptr);

    result = regcomp(*ptr, word, 0);
    result = regexec(*ptr, text, 0, NULL, 0);

    if(result == 0) {
        printf("The word was found in the text");
    }

    else {
        printf("The word was not found in the text");
    }


    printf("The word is %s \n", word);
    printf("The text is %s", text);

    return 0;
}
