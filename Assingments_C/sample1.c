#include <stdio.h>
int main()
{
    int first, second, third, fourth, fifth, sum;
    float average;
    printf("Enter The first number:");
    scanf("%d", &first);
    printf("Enter the second number:");
    scanf("%d", &second);
    printf("Enter the third number:");
    scanf("%d", &third);
    printf("Enter the fourth number:");
    scanf("%d", &fourth);
    printf("Enter the fifth number:");
    scanf("%d", &fifth);
    sum=(first+second+third+fourth+fifth);
    average=(sum/5);
    printf("The average value is: %0.2f\n", average);
    return 0;

}
