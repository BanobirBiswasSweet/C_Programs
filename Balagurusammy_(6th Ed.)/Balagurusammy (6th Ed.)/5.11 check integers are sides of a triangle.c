#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the values of a, b & c: ");
    scanf("%d%d%d", &a, &b, &c);
    if(a+b>c && b+c>a && c+a>b)
        printf("The values are the sides of a triangle.\n");
    else
        printf("The values are not the sides of a triangle.\n");
    return 0;
}
