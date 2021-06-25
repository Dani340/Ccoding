#include <stdio.h>

void movedisk(int N, char source, char dest, char aux) {
    if (N > 0) {
        movedisk(N-1, source, aux, dest);
        printf("Move disk %d from %c to %c\n", N, source, dest);
        movedisk(N-1, aux, dest, source);
    }
}


int main() {
    int N;

    printf("Enter the amount of disks: ");
    scanf("%d", &N);

    movedisk(N, 'A', 'C', 'B');

    return 0;
}

