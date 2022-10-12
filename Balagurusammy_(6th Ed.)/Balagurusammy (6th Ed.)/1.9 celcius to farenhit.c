#include <stdio.h>
int main()
{
    int c;
    printf("Enter the value in celcius:");
    scanf("%d", &c);
    c=((9*c)/5)+32;
    printf("Value in fahrenhit: %d\n", c);
    return 0;

}
