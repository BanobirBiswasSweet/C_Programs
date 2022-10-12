#include <stdio.h>
int main()
{
    int n, i, multiply;
    printf("Enter the number:");
    scanf("%d", &n);
    for(i=1; i<=10; i++){
            multiply=i*n;
        printf("%dx%d=%d\n", i, n, multiply);
    }
    return 0;
}
