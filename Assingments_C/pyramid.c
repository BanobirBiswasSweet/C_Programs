#include <stdio.h>
int main()
{
    int n, d1, d2, d3, d4;
    printf("Enter the number:");
    scanf("%d", &n);

    d4=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d1=n%10;

    printf("%d %2d %3d %4d\n", d1, d2, d3, d4);
    printf("%2d %3d %4d\n", d2, d3, d4);
    printf("%3d %4d\n", d3, d4);
    printf("%5d\n", d4);
    return 0;
}
