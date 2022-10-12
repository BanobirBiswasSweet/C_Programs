#include <stdio.h>
int main()
{
    int n, i, mult;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(i=1; i<=10; i++){
        mult=n*i;
        printf("%dx%d=%d\n\n", n, i, mult);
    }
    return 0;
}
