#include <stdio.h>
int seriessum(int a);
int main()
{
    int a;
    printf("Enter the integer:");
    scanf("%d", &a);
    printf("The sum is: %d\n", seriessum(a));
    return 0;
}
int seriessum(int a)
{
    int z, sum1, sum2, sum;
    sum1=0;
    sum2=0;
    sum=0;
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
    }
    return sum;
}
