#include <stdio.h>
int main()
{
    int n, d1, d2, d3, d4;
    printf("Enter an integer:");
    scanf("%d", &n);
    d4=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d1=n%10;
    n=n/10;
    printf("%d%d%d%d\n", d1, d2, d3, d4);
    printf("%d%d%d\n", d2, d3, d4);
    printf("%d%d\n", d3, d4);
    printf("%d\n", d4);
    return 0;
}
