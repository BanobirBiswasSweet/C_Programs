#include <stdio.h>
#include <math.h>
#define PI 3.1416
int main(void)
{
    float base, height, radius;
    float volume;
    printf("Enter the value of radius:");
    scanf("%f", &radius);
    printf("Enter the value of height:");
    scanf("%f", &height);

    base=PI*radius*radius;
    volume=(1.0/3.0)*base*height;

    printf("The volume of the cone is: %0.2f square unit.\n", volume);
    return 0;
}
