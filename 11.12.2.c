#include<stdio.h>
#include<stdlib.h>
int main(){

    int binary[100],n,i;
    printf("Enter the number to convert: ");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        binary[i]=n%2;
        n=n/2;
    }

    printf("\nThe number converted in binary is ");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",binary[i]);
    }

    return 0;
    }
