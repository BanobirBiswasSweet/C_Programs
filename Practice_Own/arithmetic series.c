#include <stdio.h>
int main()
{
    int i, j, n, sum;
    sum=0;
    printf("Enter the number:");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        sum=sum+i;
        }
    printf("The sum is: %d\n", sum);
    return 0;
}
