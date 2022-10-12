#include <stdio.h>
int main()
{
    int n, d1, d2, d3, d4, reverse;
    printf("Enter the number:");
    scanf("%d", &n);

    d4=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d1=n%10;

    reverse=(d4*1000+d3*100+d2*10+d1);

    printf("The reverse number is: %d", reverse);
    return 0;
}
