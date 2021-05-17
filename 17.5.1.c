#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])  {
    char word[50];
    int i = 0;

    if(argc == 2) {
        strcpy(word, argv[1]);
        while(i < strlen(word)) {
            if(isalpha(word[i]) == 0 && isspace(word[i]) == 0) {
                memmove(&word[i], &word[i + 1], strlen(word) - i);
            }
            else {
                i++;
            }
        }
        printf("The word without non-letters is %s", word);
    }
    else if(argc > 2) {
      printf("Too many arguments entered\n");
    }
    else {
        printf("You did not enter the string\n");
    }
}
