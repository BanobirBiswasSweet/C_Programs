#include <stdio.h>
double getarea(int a, int b, int h);
int main()
{
    int a, b, h;
    printf("Enter the value of a, b & h:");
    scanf("%d%d%d", &a, &b, &h);
    printf("The area of trapezoid is: %0.1lf\n", getarea(a, b, h));
    return 0;
}
double getarea(int a, int b, int h)
{
    double area;
    area=0.5*(a+b)*h;
    return area;
}
