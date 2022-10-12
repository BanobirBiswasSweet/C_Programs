#include <stdio.h>
int main()
{
    int n, i;
    n=0;
    float math[5], phy[5], chem[5];
    for(i=0; i<5; i++){
        printf("Enter the values of math, phy & chem: ");
        scanf("%f%f%f", &math[i], &phy[i], &chem[i]);
    if(math[i]>=60 && phy[i]>=50 && chem[i]>=40 && (math[i]+phy[i]+chem[i])>=200 || (math[i]+phy[i])>=150)
        n++;
    }
    printf("The number of eligible candidates is: %d\n", n);
    return 0;
}
