#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    if(n%7==0){
        printf("The number is multiple of seven.\n");
    }
    else{
        printf("The number is not multiple of seven.\n");
    }
    return 0;
}
