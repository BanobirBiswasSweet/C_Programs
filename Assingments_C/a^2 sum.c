#include <stdio.h>
int main()
{
    int a, z, sum1, sum2, sum;
    sum1=0;
    sum2=0;
    printf("Enter the integer: ");
    scanf("%d", &a);
    if(a%2!=0){
        for(z=a; z>=1; z--)
        {
            if(z%2==0){
                sum1 = sum1 + (z*z);
            }
            else{
                sum2 = sum2 + (z*z);
            }
        }
        sum = (sum2-sum1);
        printf("The sum is: %d\n", sum);
    }
    else if(a%2==0){
        for(z=a; z>=1; z--)
        {
            if(z%2==0){
                sum1 = sum1 + (z*z);
            }
            else{
                sum2 = sum2 + (z*z);
            }
        }
        sum = (sum1 - sum2);
        printf("The sum is: %d\n", sum);
    }
    return 0;
}
