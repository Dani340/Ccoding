#include <stdio.h>

int main() {
    char res[10];
    int dec, j, rest, i=0;

    printf("Enter the decimal number: ");
    scanf("%d", &dec);

    while (dec != 0) {
        rest = 0;
        rest = dec % 16;

        if (rest < 10) {
            res[i] = rest + 48; // pt dec-char //
            i++;
        }
        else {
            res[i] = rest + 55;
            i++;
        }

        dec = dec / 16;
    }

    printf("The number converted to hexadecimal is:");
    for(j = i; j >= 0; j--) {
        printf("%c", res[j]);
    }
}
