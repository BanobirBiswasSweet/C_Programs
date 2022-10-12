#include <stdio.h>
int main()
{
    int a, b, c, d, m, n;
    float x1, x2;
    printf("Enter the values of five integers: ");
    scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &m, &n);
    if(((a*d)-(c*b))==0){
        printf("Solve undefined. Try with another values.\n");
    }
    else{
        x1=(m*d-b*n)/(a*d-c*b);
        x2=(n*a-m*c)/(a*d-c*b);
    }
    printf("X1=%0.2f\nX2=%0.2f\n", x1, x2);
    return 0;
}
