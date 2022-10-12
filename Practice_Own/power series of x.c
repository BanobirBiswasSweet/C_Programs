#include <stdio.h>
#include <math.h>
int main()
{
    int x, i, m, sum;
    sum=0;
    printf("Value of x:");
    scanf("%d", &x);
    printf("Value of m:");
    scanf("%d", &m);
    for(i=0; i<=m; i++){
        sum=sum+pow(x, i);
    }
    printf("The sum is: %d", sum);
    return 0;
}
