#include <stdio.h>
int main()
{
    float p_price, s_value, dep;
    int y_service;
    printf("Enter purchase price:");
    scanf("%f\n", p_price);
    printf("Enter depreciation:");
    scanf("%f\n", dep);
    printf("Enter years of service:");
    scanf("%d\n", y_service);

    s_value=p_price-(dep*y_service);

    printf("The salvage value is: %0.2f\n", s_value);
    return 0;
}
