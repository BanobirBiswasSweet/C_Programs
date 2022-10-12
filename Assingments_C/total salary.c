#include <stdio.h>
int main()
{
    float cars, bonus, price;
    float total_price, total_com, total_salary;

    printf("Enter the number of cars:");
    scanf("%f", &cars);

    printf("Enter total price of the cars:");
    scanf("%f", &total_price);

    bonus=cars*2000;

    total_com=total_price*(0.1/100);

    total_salary=bonus+total_com+10000;

    printf("The total bonus is: %0.2f\n", bonus);
    printf("The total commission is: %0.2f\n", total_com);
    printf("The total salary of the car seller is: %0.2f\n", total_salary);

    return 0;


}
