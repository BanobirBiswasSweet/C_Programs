#include <stdio.h>
#include <math.h>
int main()
{
    float d_rate, s_cost, u_time, ECO, TBO;
    printf("Enter the values individually(Demand rate)(setup cost)(unit time):\n");
    scanf("%f%f%f\n", &d_rate, &s_cost, &u_time);

    ECO=sqrt((2*d_rate*s_cost)/u_time);
    TBO=sqrt((2*s_cost)/(d_rate*u_time));

    printf("ECO is: %0.2f\n", ECO);
    printf("TBO is: %0.2f\n", TBO);
    return 0;
}
