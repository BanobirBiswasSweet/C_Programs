#include <stdio.h>
int main()
{
    int i, sum;
    sum=0;
    for(i=1; i<200; i++){
        if(i>100 && i%7==0)
            sum=sum+i;
    }
    printf("The desired sum is: %d\n", sum);
    return 0;
}
