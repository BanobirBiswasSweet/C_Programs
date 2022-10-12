#include<stdio.h>
int main()
{
    float price;
    int print;
    printf("Enter the price: ");
    scanf("%f", &price);
    print=(price*100);
    printf("%d\n", print);
    return 0;
}
