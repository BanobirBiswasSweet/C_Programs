#include <stdio.h>
#include <math.h>
int main()
{
    int a, i, z, m, p, sum1, sum2, sum;
    sum1=0;
    sum2=0;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    for(i=0; i<a; i++){
        z=pow((a-i), 2);
        {
            if(z%2==0){
                    m=(-z);
                sum1=sum1+m;
            }
            else{
                p=z;
                sum2=sum2+p;
            }
        }
        sum=sum1+sum2;
    }
    printf("Sum is: %d", sum);
    return 0;
}
