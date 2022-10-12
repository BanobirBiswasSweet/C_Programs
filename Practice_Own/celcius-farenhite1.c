#include <stdio.h>
int main()
{
    double celsius, farenhit;
    printf("Enter the value in celsius:");
    scanf("%lf", &celsius);
    farenhit=(1.8*celsius)+32;
    printf("The value in farenhite is: %0.2f\n", farenhit);
    return 0;
}
