#include <stdio.h>
#include <math.h>
#define PI 3.1416
int main()
{
    int x1, x2, y1, y2;
    float r, perimeter, area;
    printf("Value of x1:");
    scanf("%d", &x1);
    printf("Value of x2:");
    scanf("%d", &x2);
    printf("Value of y1:");
    scanf("%d", &y1);
    printf("Value of y2:");
    scanf("%d", &y2);
    r=sqrt(pow(2, (x2-x1)) + pow(2, (y2-y1)));
    perimeter=(2*PI*r);
    area=PI*r*r;
    printf("Perimeter of circle is: %0.2f\n", perimeter);
    printf("Area of circle is: %0.2f\n", area);
    return 0;
}
