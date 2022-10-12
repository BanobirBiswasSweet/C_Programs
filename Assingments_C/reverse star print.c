#include <stdio.h>
int main()
{
    int i, n, j;
    printf("Enter the number:");
    scanf("%d", &n);
    for(j=n; j>0; j--){
            for(i=j; i>0; i--){
                printf("*");
            }
            printf("\n");
        }
    return 0;
}
