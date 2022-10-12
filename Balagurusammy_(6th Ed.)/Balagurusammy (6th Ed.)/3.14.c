#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter the number:");
    scanf("%d", &m);
    printf("Enter the factor:");
    scanf("%d", &n);
    if(m%n==0){
        printf("m is multiple of n.\n");
    }
    else{
        printf("m isn't multiple of n.\n");
    }
    return 0;
}
