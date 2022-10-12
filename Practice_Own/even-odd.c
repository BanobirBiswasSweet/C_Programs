#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    if(n%2==0){
        printf("The number is an even.\n");
    }
    else{
        printf("The number is an odd.\n");
    }
    return 0;
}
