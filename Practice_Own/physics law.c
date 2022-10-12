#include <stdio.h>
int main()
{
    int t, v, value;
    printf("Enter time:");
    scanf("%dn", &t);
    printf("Enter velocity:");
    scanf("%d", &v);
    value=(2*v*t);
    printf("value is: %d km.\n", value);
    return 0;
}
