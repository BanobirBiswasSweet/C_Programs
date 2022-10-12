#include <stdio.h>
int main()
{
    int n, i, sum;
    sum=0;
    printf("Value:");
    scanf("%d", &n);
    printf("Even Numbers:\tSum:\n");
    for(i=2; i<=n; i++){
        if(i%2==0){
            printf("%d", i);
            sum=sum+i;
            printf("\t\t%d\n", sum);
        }
    }
    return 0;
}
