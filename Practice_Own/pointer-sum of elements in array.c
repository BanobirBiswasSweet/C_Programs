#include <stdio.h>
main()
{
    int *p, sum, i;
    int a[5]={5, 9, 6, 3, 7};
    i=0, sum=0;
    p=a;
    printf("Element value address:\n\n");
    while(i<5){
        printf("x[%d] %d %u\n", i, *p, p);
        sum=sum+*p;
        i++;
        p++;
    }
    printf("\n Sum=%d\n", sum);
    printf("\n &a[0]=%u\n", &a[0]);
    printf("\n p=%u\n", p);
}
