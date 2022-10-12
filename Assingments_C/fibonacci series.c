#include <stdio.h>
int main()
{
   int n, f, s, next, c;
   f=0;
   s=1;

   printf("Enter the number:");
   scanf("%d",&n);

   printf("Fibonacci series:\n");

   for (c=0 ; c<n ; c++)
   {
      if (c<=1)
         next=c;
      else
      {
         next=f+s;
         f=s;
         s=next;
      }
      printf("%d\t", next);
   }

   return 0;
}
