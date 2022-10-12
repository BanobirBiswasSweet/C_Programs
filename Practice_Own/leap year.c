#include <stdio.h>
int main()
{
    int n;
    printf("Enter the year:");
    scanf("%d", &n);
    if((n%2==0 && n%100!=0) || n%400==0){
        printf("The year is leap year.\n");
    }
    else{
        printf("The year is not leap year.\n");
    }
    return 0;
}
