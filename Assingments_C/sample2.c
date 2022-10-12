#include <stdio.h>
int main()
{
    float first, second, third, fourth, fifth, sum;
    float average;
    printf("Enter The first number:");
    scanf("%f", &first);
    printf("Enter the second number:");
    scanf("%f", &second);
    printf("Enter the third number:");
    scanf("%f", &third);
    printf("Enter the fourth number:");
    scanf("%f", &fourth);
    printf("Enter the fifth number:");
    scanf("%f", &fifth);
    sum=(first+second+third+fourth+fifth);
    average=(sum/5);
    printf("The average value is: %0.2f\n", average);
    return 0;
}
