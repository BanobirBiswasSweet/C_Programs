#include <stdio.h>
int main()
{
    float u, a, t, d;
    printf("Enter initial velocity(u):");
    scanf("%f", &u);
    printf("\nEnter acceleration(a):");
    scanf("%f", &a);
    printf("\nEnter the time(t):");
    scanf("%f", &t);
    d=(u*t)+(0.5*a*t*t);
    printf("\nThe distance is:%0.2f meter per second.\n", d);
    return 0 ;
}
