#include <stdio.h>

int main() {
    int N, i, v[10], max = -1, rez[10], count[10];

    printf("Enter the number of elements for the vector: ");
    scanf("%d", &N);

    printf("Enter the elements\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &v[i]);
    }

    for (int i = 1; i < N; i++) {
        if (v[i] > max)
            max = v[i];
    }

    for (int i = 0; i <= max; ++i) {
        count[i] = 0;
    }

    for (int i = 0; i < N; i++) {
        count[v[i]]++;
    }

    for (int i = 1; i <= max; i++) {
        count[i] += count[i - 1];
    }

    for (int i = N - 1; i >= 0; i--) {
        rez[count[v[i]] - 1] = v[i];
        count[v[i]]--;
    }

    for (i = 0; i < N; i++) {
        printf("%d ", rez[i]);
    }

}
