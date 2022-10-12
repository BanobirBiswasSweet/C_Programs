#include <stdio.h>
int main()
{
    double mile, kilometer;
    printf("Enter the distance in mile:");
    scanf("%lf", &mile);
    kilometer=(mile*1.69);
    printf("The distance in kilometer is: %0.2lf km.\n", kilometer);
    return 0;
}
