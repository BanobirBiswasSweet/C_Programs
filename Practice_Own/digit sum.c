#include <stdio.h>
int main()
{
    int n, d1, d2, d3, d4, sum;
    printf("Enter the number:");
    scanf("%d", &n);

    d4=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d1=n%10;

    sum=(d1+d2+d3+d4);

    printf("The sum is: %d", sum);
    return 0;
}
