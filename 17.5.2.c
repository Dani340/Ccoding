#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* recursive(char* word, char* reversed, int position) {
    if(position >= 0) {
        recursive(word, strncat(reversed, &word[position], 1), position-1);
    }
    return reversed;
}

int main(int argc, char *argv[])  {
    char word[50];
    char* reversed;
    reversed = malloc (strlen(word) * sizeof (char));

    if(argc == 2) {
        strcpy(word, argv[1]);
        recursive(word, reversed, strlen(word) - 1);
        printf("%s", reversed);
    }
    else if(argc > 2) {
      printf("Too many arguments entered\n");
    }
    else {
        printf("You did not enter the string\n");
    }
}
