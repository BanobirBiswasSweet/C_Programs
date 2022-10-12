#include <stdio.h>
#define PI 3.14
int main(void)
{
    float radius,area, perimeter;
    printf("Enter the value of radius:");
    scanf("%f", &radius);
    area=PI*radius*radius;
    perimeter=2*PI*radius;
    printf("The area of the circle is: %2.1f\n", area);
    printf("The perimeter of the circle is: %2.1f\n", perimeter);
    return 0;
}
