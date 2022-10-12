#include <stdio.h>
int main()
{
    int n, i, sum;
    sum=0;
    printf("Enter an array: ");
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[n]);
        if(n-i<=3)
            sum=sum+a[i];
    }
        printf("Sum is: %d\n", sum);
        return 0;
}

