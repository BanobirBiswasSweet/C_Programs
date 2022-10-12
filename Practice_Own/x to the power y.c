#include <stdio.h>
int main()
{
    int x, y;
    double res;
    res=1;
    printf("Value of x:");
    scanf("%d", &x);
    printf("Value of y:");
    scanf("%d", &y);
    if(y>=0)
        while(y--)
        res=res*x;
    else
        while(y++)
        res=res/x;
    printf("Result is: %0.2f\n", res);
    return 0;
}
