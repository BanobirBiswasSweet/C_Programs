#include <stdio.h>
int main()
{
    int a, b, c, x, y, e;
    printf("Value of a, b, c, x and y:");
    scanf("%d%d%d%d%d", &a, &b, &c, &x, &y);
    e=a*x+b*y-c;
    printf("%dx%d+%dx%d-%d", a, b, c, x, y, a*x+b*y-c);
    return 0;
}
