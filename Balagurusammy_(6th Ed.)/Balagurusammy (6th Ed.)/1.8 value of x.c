#include <stdio.h>
int main()
{
    int a, b, c, x;
    printf("Value of a:");
    scanf("%d", &a);
    printf("Value of b:");
    scanf("%d", &b);
    printf("Value of c:");
    scanf("%d", &c);
    if(b<c){
        x=(a/(c-b));
        printf("The value is: -%d", x);
    }
    else{
        x=(a/(b-c));
        printf("The value is: %d", x);
    }
    return 0;
}
