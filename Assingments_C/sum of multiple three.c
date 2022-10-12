#include <stdio.h>
int main()
{
    int n1, n2, i, sum;
    sum=0;
    printf("Enter the number:");
    scanf("%d%d", &n1, &n2);
    for(i=n1; i<=n2; i++){
        if(i%3==0){
            sum=sum+i;
        }
    }
    printf("The sum is:%d", sum);
    return 0;
}
