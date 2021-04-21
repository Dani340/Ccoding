#include <stdio.h>

int main() {
    int v[10], x, i=0, count=0;

    printf("Enter the elements for the vector (enter -1 to finish) \n");
    scanf("%d", &x);
    while(x != -1) {
        v[i] = x;
        i++;
        scanf("%d", &x);
    }

    i = 0;
    while(v[i] != 0) {
        count++;
        i++;
    }

    printf("There are %d 1's", count);
}
