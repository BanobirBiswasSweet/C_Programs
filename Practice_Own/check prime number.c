#include <stdio.h>
#include <ctype.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(isprime(n))
        printf("This is a prime number.\n");
    else
        printf("This is not a prime number.\n");
    return 0;
}
