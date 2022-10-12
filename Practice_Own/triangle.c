#include <stdio.h>
#include <math.h>
int main()
{
    float base, hyp;
    float height, area;
    printf("Enter the value of base:");
    scanf("%f", &base);
    printf("Enter the value of hypotenuse:");
    scanf("%f", &hyp);
    height=sqrt(pow(hyp, 2)-pow(base, 2));
    area=(0.5*base*height);
    printf("The height of the triangle is: %0.2f unit.\n", height);
    printf("The area of the triangle is: %0.2f square unit.\n", area);
    return 0;

}
