#include <stdio.h>
#include <string.h>

int main()
{
   char str[50];

   printf("Enter a string: ");
   gets(str);

   strrev(str);

   printf("The reversed version of the string: %s \n", str);

   return 0;
}
