#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void gotoxy(int x,int y) {
	printf("%c[%d;%df",0x1B,y,x);
}

int main() {
    int x, y, c;
    char set[20] = "~!@#$%^&*:;/,{}|<>=";

    srand(time(NULL));

    while(true) {
        x = rand() % 250;
        y = rand() % 250;
        c = rand() % 19;
        gotoxy(x, y);
        printf("%c", set[c]);
        fflush(stdout);
        Sleep(1000);
    }

}
