#include <stdio.h>
int main()
{
    int n, r, max, min;
    max=0;
    min=0;
    printf("Enter the number:");
    scanf("%d", &n);
    while(n!=0){
        r=n%10;
        n=n/10;
        printf("%d\n", r);
        if(r>max)
            max=r;
        else if(r<max && r==1)
            min=r;
    }
    printf("The largest integer is:%d\n", max);
    printf("The smallest integer is:%d\n", min);

    return 0;
}
