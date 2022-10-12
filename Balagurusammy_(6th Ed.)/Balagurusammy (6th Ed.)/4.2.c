#include <stdio.h>
int main()
{
    int x, y, sum, oth, sub, mult, di;
    printf("Enter the value of x & y:");
    scanf("%d%d", &x, &y);
    sum=x+y;
    oth=sum/2;
    {
        if(x>y){
            sub=x-y;
        }
        else if(y>x){
            sub=y-x;
        }
    }
    di=sum/sub;
    mult=sum*sub;
    printf("(x+y)/(x-y)=%d\t", di);
    printf("(x+y)/2=%d\t", oth);
    printf("(x+y)*(x+y)=%d\n", mult);
    return 0;
}
