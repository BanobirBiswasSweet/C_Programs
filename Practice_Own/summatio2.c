#include <stdio.h>
int main()
{
    int i, n, sum;
    sum=0;
    scanf("%d", &n);
    for(i=1, sum=0; i<=n; i++){
        sum=sum+i;
    }
    printf("sum is %d\n", sum);
    return 0;
}
