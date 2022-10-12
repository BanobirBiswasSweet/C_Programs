#include <stdio.h>
int main()
{
    int i, n, j;
    printf("Enter the number:");
    scanf("%d", &n);
    for(i=n; i>0; i--){
        for(j=n-1; j>0; j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
