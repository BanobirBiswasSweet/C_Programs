#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            printf(" S");
        }
        printf("\n");
    }
    return 0;
}
