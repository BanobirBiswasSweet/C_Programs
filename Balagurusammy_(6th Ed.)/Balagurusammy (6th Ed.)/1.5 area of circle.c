#include <stdio.h>
#define PI 3.1416
int main()
{
    float r, area;
    printf("Enter the value of radius:");
    scanf("%f", &r);
    area=(PI*r*r);
    printf("The area of circle is: %f\n", area);
    return 0;
}
