#include <stdio.h>
int main()
{
    int x, m, i, total, sofarx;
    total=0;
    sofarx=1;
    printf("Value of x: ");
    scanf("%d", &x);
    printf("Value of m: ");
    scanf("%d", &m);
    for(i=0; i<=m; i++){
        total=total+sofarx;
        sofarx=sofarx*x;
    }
    printf("Total value is: %d\n", total);
    return 0;
}
