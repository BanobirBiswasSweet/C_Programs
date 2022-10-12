#include <stdio.h>
int main()
{
    int n, p, sum=0;
    printf("Enter the number:");
    scanf("%d", &n);
    for(p=0; p<=n; p++){
        if(p%2==0)
            sum=sum+(p*p);
    }
    printf("Sum is: %d\n", sum);
    return 0;
}
