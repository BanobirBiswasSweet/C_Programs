#include <stdio.h>
#include <math.h>
#define MAX 100
int main()
{
    int n, sqr;
    float sqt;
    n=0;
    printf("Numbers\t\tsquare-root\tsquare\n\n");
    while(n<=MAX){
        sqt=sqrt(n);
        sqr=n*n;
        printf("%d\t\t%0.2f\t\t%d\n", n, sqt, sqr);
        n=n+10;
    }
    return 0;
}
