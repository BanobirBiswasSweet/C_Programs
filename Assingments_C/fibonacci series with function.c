#include <stdio.h>
int fibonacci(int n);
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}
int fibonacci(int n)
{
   int f, s, next, c;
   f=0;
   s=1;
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
   return next;
}

