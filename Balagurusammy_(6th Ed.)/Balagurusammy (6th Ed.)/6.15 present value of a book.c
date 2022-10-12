#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    float c, d, p;
    printf("Enter the values of c, d, n:\n");
    scanf("%f%f%d", &c, &d, &n);
    p=c*(pow((1-d), n));
    printf("Present value: %0.2f unit\n", p);
    return 0;
}
