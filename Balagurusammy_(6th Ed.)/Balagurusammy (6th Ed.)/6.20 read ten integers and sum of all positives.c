#include <stdio.h>
int main()
{
    int i, n, sum;
    sum=0;
    printf("Enter ten integers:\n");
    for(i=1; i<=10; i++){
        scanf("%d", &n);
        if(n>0)
            sum=sum+n;
        else if(sum>100)
            exit(0);
    }
    printf("The sum is: %d\n", sum);
    return 0;
}
