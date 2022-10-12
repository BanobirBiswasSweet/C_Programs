#include <stdio.h>
int main()
{
    double term=1.0, sum=1.0;
    int n=0;
    while(term>=0.0000001){
        n++;
        term=term/n;
        sum=sum+term;
    }
    printf("The value of euler's number: %0.16lf\n", sum);
    return 0;
}
