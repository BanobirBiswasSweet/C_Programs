#include <stdio.h>
int main()
{
    int n, i;
    float c, sum;
    sum=0;
    c=(1/n);
    printf("Enter the number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        sum=sum+c;
    }
    printf("The sum is: %0.2f\n", sum);
    return 0;
}
