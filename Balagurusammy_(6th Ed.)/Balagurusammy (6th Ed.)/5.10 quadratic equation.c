#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, x1, x2, p, q;
    printf("Enter the value of a:");
    scanf("%f", &a);
    printf("Enter the value of b:");
    scanf("%f", &b);
    printf("Enter the value of c:");
    scanf("%f", &c);
    p=(b*b)-(4*a*c);
    q=sqrt(p);
    x1=(-b+q)/(2*a);
    x2=(-b-q)/(2*a);
    printf("Ans: %0.2f and %0.2f", x1, x2);
    return 0;
}

