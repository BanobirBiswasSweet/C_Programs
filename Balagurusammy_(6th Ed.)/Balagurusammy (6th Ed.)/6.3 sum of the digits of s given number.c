#include <stdio.h>
int main()
{
    int n, rem, sum;
    sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n!=0){
        rem=n%10;
        n=n/10;
        sum=sum+rem;
    }
    printf("The sum is: %d\n", sum);
    return 0;
}
