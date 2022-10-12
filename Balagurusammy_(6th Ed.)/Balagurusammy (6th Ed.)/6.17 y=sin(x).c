#include <stdio.h>
#include <math.h>
int main()
{
    double x, y;
    for(x=0; x<=180; x=x+15){
        y=sin(x);
        printf("Y=%0.2f\t", y);
    }
    printf("\n");
    return 0;
}
