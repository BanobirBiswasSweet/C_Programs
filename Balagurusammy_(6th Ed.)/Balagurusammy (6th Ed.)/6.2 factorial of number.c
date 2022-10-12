#include <stdio.h>
int main()
{
    int n, i, fac;
    fac=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        fac=fac*i;
    }
    printf("Factorial is: %d\n", fac);
    return 0;
}
