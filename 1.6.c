#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
    int h = 0, m = 0, s = 0;

    while(true) {
        system("cls");
        printf("The current time is: %02d:%02d:%02d", h, m, s);
        fflush(stdout);
        s++;
        if(s / 60 > 0) {
            m++;
            s = s % 60;
        }
        if(m / 60 > 0) {
            h++;
            m = m % 60;
        }
        Sleep(1000);
    }

    return 0;
}
