#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char a[100], b[100];
    char * stra;
    char * strb;
    int count=0, i=0;

    printf("Enter the first string: ");
    gets(a);

    printf("Enter the second string: ");
    gets(b);

    stra = (char*) malloc(strlen(a) * sizeof(char));
    stra = a;
    strb = (char*) malloc(strlen(b) * sizeof(char));
    strb = b;

    while(stra[i] == strb[i] && stra[i] != '\0' && strb[i] != '\0') {
        i++;
    }

    if (stra[i] != '\0' || strb[i] != '\0') {
        printf("Diferite");
    }
    else {
        printf("Identice");
    }

    free(stra);
    free(strb);

    return 0;
}
