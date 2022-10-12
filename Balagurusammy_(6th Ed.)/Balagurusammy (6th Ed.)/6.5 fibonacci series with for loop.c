#include <stdio.h>
int main()
{
    int n, c, f, s, sum;
    f=0;
    s=1;
    sum=0;
    printf("Enter the term: ");
    scanf("%d", &n);
    for(c=0; c<n; c++){
        if(c<=1)
            sum=c;
        else
            sum=f+s;
            f=s;
            s=sum;
            printf("%d\t", sum);
    }
    return 0;
}
