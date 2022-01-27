#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int i, j,n, count = 1, max = -1;
    int bool1 = 0, bool2 = 0;
    char *sirstr;
    char S[100];
    const char s[2] = " ";
    FILE *fptr;

    if ((fptr = fopen("paranteze1.in.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fgets(S, 100, fptr);
    sirstr = strtok(S, s);

    n = strlen(sirstr);

    for(i = 0; i < n; i++) {
        count = 1;
        if(sirstr[i] == '{') {
            bool1++;
            if(sirstr[i+1] == ')') {
                printf("-1");
                return 0;
            }
            else {
                j = i+1;
                while(sirstr[j] == '{' || sirstr[j] == '(') {
                    count++;
                    j++;
                }
                if(count > max) {
                    max = count;
                }
            }
        }
        else if(sirstr[i] == '}') {
            bool1--;
        }
        else if(sirstr[i] == '(') {
            bool2++;
            if(sirstr[i+1] == '}') {
                printf("-1");
            }
            else {
                j = i+1;
                while(sirstr[j] == '{' || sirstr[j] == '(') {
                    count++;
                    j++;
                }
                if(count > max) {
                    max = count;
                }
            }
        }
        else if(sirstr[i] == ')') {
            bool2--;
        }
        else {
            printf("Not a valid character!");
            break;
        }
    }

    if(bool1 == 0 && bool2 == 0) {
        printf("%d", max);
    }
    else {
        printf("-1");
    }

    return 0;
}
