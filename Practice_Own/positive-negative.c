#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d", &x);
    if(x>0){
        printf("The number is positive.\n");
    }
    else{
        printf("The number is negative.\n");
    }
    return 0;
}
