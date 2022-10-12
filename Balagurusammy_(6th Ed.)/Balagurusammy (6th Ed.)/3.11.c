#include <stdio.h>
int main()
{
    int n, r, sum;
    sum=0;
    printf("Enter an integer:");
    scanf("%d", &n);
    while(n!=0){
        r=n%10;
        n=n/10;
        sum=sum+r;
    }
    printf("The sum is: %d\n", sum);
    return 0;
}
