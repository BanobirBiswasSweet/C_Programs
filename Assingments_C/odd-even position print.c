#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter number:");
    scanf("%d", &n);
    for(i=1; i<=n; ++i){
        for(j=1; j<=i; ++j);
        if(i%2==0){
            printf("%d\n", i+j);
        }
    }
    printf("\n");
    return 0;
}
