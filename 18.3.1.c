#include <stdio.h>

int vowels(char str[], int i) {

    if (str[i] != '\0') {
        int count = 0;
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            count = 1;
        }
        return (count + vowels(str, i+1));
    }

    else {
        return 0;
    }
}

int main() {
    int result;
    char str[10];

    printf("Enter a string: ");
    scanf("%s", str);

    result = vowels(str, 0);

    printf("There are %d vowels", result);

    return 0;
}
