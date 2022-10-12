#include <stdio.h>
int main()
{
   int r, c, n, temp;
   printf("Enter the number:");
   scanf("%d",&n);
   temp = n;

   for ( r = 1 ; r <=n ; r++ ){
      for ( c = 1 ; c < temp ; c++ )
         printf(" ");
         temp--;

      for ( c = 1 ; c <= 2*r - 1 ; c++ )
         printf("*");

      printf("\n");
   }

   return 0;
}
