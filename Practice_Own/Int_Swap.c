#include <stdio.h>

int main()
{
    int temp, x, y;

    printf("Enter the first value(x): ");
    scanf("%d", &x);

    printf("Enter the second value(Y): ");
    scanf("%d", &y);

    temp=x;
    x=y;
    y=temp;

    printf("After swapping the values: \n");
    printf("X: %d, Y: %d", x, y);

    return (0);
}
