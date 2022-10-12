#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, p, m, sum;
    m=1;
    p=2;
    sum=0;
    printf("Enter the number:");
    scanf("%d", &n);
    for(i=0; i<=n; i++){
        p=pow(2, (i+2));
        m=-pow(2, (i+2));
        sum=sum+p+m;
    }
    printf("%d", &sum);
    return 0;
}
