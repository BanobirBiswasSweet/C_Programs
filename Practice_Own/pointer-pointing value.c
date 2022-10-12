#include <stdio.h>
main()
{
    int x, y;
    int *p;
    x=10;
    p=&x;
    y=*p;
    printf("\n\nvalue of x is %d\n\n", x);
    printf("%d is stored at address %u\n", x, &x);
    printf("%d is stored at address %u\n", *&x, &x);
    printf("%d is stored at address %u\n", *p, p);
    printf("%d is stored at address %u\n", p, &p);
    printf("%d is stored at address %u\n", y, &y);
    *p=25;
    printf("\nNow x=%d\n", x);

}
