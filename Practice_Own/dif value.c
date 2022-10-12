#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void task()
{
    int a, b;
    printf("Enter a value for a:");
    scanf("%d", &a);
    printf("Enter a value for b:");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("now the value for a and b is %d and %d", a, b);
    return 0;
}
