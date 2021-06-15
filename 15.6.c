#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    char ec[75];
    char* stry;
    char strnum[10];
    int i, n;
    float y, num, x;
    bool bool1;

    FILE *fptr;

    if ((fptr = fopen("ecuatie2.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fscanf(fptr, "%[^\n]", ec);
    n = strlen(ec)-1;

    if(isdigit(ec[n]) == 0) {
        printf("You did not enter a valid equation1");
        return 0;
    }
    else {
        for(i = n; i >= 0; i--) {
            if(ec[i-1] == '=') {
                stry = ec + i;
                y = atof(stry);
                break;
            }
        }
    }

    if(ec[0] == 'x' && isdigit(ec[2]) != 0) {
        bool1 = true;
        for(i = 2; i < n; i++) {
            strnum[i-2] = ec[i];
            if(ec[i] == '=') {
                num = atof(strnum);
                break;
            }
        }
    }
    else if(isdigit(ec[0]) != 0 && ec[n-strlen(stry)-1] == 'x') {
        bool1 = false;
        for(i = 0; i < n; i++) {
            strnum[i] = ec[i];
            if(isdigit(ec[i+1]) == 0) {
                num = atof(strnum);
                break;
            }
        }
    }
    else {
        printf("You did not enter a valid equation");
        return 0;
    }

    if(bool1 == true) {
        if(ec[1] == '+') {
            x = y - num;
            printf("2\n%f", x);
        }
        else if(ec[1] == '-') {
            x = y + num;
            printf("4\n%f", x);
        }
        else if(ec[1] == '*') {
            x = y / num;
            printf("6\n%f", x);
        }
        else if(ec[1] == ':') {
            x = y * num;
            printf("8\n%f", x);
        }
        else {
            printf("You did not enter a valid equation");
        }
    }

    else if(bool1 == false) {
        if(ec[strlen(strnum)] == '+') {
            x = y - num;
            printf("1\n%f", x);
        }
        else if(ec[strlen(strnum)] == '-') {
            x = num - y;
            printf("3\n%f", x);
        }
        else if(ec[strlen(strnum)] == '*') {
            x = y / num;
            printf("5\n%f", x);
        }
        else if(ec[strlen(strnum)] == ':') {
            x = num / y;
            printf("7\n%f", x);
        }
        else {
            printf("You did not enter a valid equation");
        }
    }

    return 0;
}
