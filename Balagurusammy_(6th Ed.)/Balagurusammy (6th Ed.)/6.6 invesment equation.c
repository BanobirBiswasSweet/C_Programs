#include <stdio.h>
#include <math.h>
int main()
{
    int p, n, i;
    float r, v;
    printf("Enter the values of p, r & n: ");
    scanf("%d%f%d", &p, &r, &n);
    v=p*pow((1+r), n);
    printf("The grand amount is: %0.2f unit\n", v);
    return 0;

}
