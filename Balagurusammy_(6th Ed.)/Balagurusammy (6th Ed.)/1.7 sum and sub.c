#include <stdio.h>
int main()
{
    int a, b, sum, sub;
    printf("Enter the 1st number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);
    sum=a+b;
    printf("Sum is: %d\n", sum);
    if(a<b){
        sub=b-a;
        printf("Sub is: -%d", sub);
    }
    else{
        sub=a-b;
        printf("Sub is: %d", sub);
    }
    return 0;

}
