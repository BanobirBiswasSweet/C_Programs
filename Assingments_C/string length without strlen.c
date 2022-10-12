#include <stdio.h>

int length(char []);

int main()
{
   char s[1000];

   printf("Input a string:");
   gets(s);

   printf("\nLength of string is: %d\n", length(s));

   return 0;
}

int length(char s[]) {
   int c = 0;

   while (s[c] != '\0')
      c++;

   return c;
}
