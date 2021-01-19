#include <stdio.h>
#include <ctype.h>
int main()
{
    char c, result;

    printf("Enter a word or a sentence: ");
    scanf("%d", &c);

    result = tolower(c);
    printf("tolower(%c) = %c\n", c, result);

    return 0;

}
