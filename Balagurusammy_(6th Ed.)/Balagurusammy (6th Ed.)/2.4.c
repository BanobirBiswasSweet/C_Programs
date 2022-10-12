#include <stdio.h>
int main()
{
    float x, y, D;
    printf("Enter the numbers: ");
    scanf("%f%f", &x, &y);
    D=(x/y);
    printf("x=%0.2f, y=%0.2f, Result=%0.2f\n", x, y, D);
    return 0;
}
