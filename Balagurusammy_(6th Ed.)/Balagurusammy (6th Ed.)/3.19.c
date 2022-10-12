#include <stdio.h>
int main()
{
    int n;
    printf("Enter an integer:");
    scanf("%d", &n);
    if(n%2==0){
        printf("The number is an even number.\n");
    }
    else{
        printf("The number is an odd number.\n");
    }
    return 0;
}
