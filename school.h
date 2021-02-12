#include <stdbool.h>
#include <stdio.h>

int Grades(int mark) {
    if(mark >= 5) {
        return true;
    }
    else {
        return false;
    }
}

float Medie(float x[], float y) {
    float sum = 0.0;
    int c;

    for(c = 0; c < strlen(x); c++) {
        sum += x[c];
    }
    sum = sum / strlen(x) * 3.0;
    sum = (sum + y) / 4.0;

    return sum;
}
