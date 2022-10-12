#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    if(n>=0 && n<=9){
        printf("The number is a digit.\n");
    }
    else{
        printf("The number is not a digit.\n");
    }
    return 0;
}
