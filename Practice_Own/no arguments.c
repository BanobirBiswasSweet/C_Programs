#include <stdio.h>
void printline(void);
void value(void);
main()
{
    printline();
    value();
    printline();
}
void printline(void)
{
    int i;
    for(i=0; i<=35; i++){
        printf("-");
    }
    printf("\n");
}
void value(void)
{
    int year, period;
    float rate, sum, principle;
    printf("Enter principle: ");
    scanf("%f", &principle);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter period: ");
    scanf("%f", &period);
    sum=principle;
    year=1;
    while(year<=period){
        sum=sum*(1+rate);
        year++;
    }
    printf("\n%8.2f %5.2f %5d %12.2f\n", principle, rate, period, sum);
}

