#include <stdio.h>
int main()
{
    int x, y, sum, diff, pro, divi;
    char op;
    printf("value of x: %d");
    scanf("%d", &x);
    printf("value of y: %d");
    scanf("%d", &y);
    printf("Choose the operator:");
    scanf("%c", &op);
    if(op='+'){
        sum=x+y;
        printf("Sum is: %d", sum);
    }
    else if(op='-'){
        diff=x-y;
        printf("Difference is: %d", diff);
    }
    else if(op='/'){
        divi=x/y;
        printf("Division is: %d", divi);
    }
    else(op='*'); {
        pro=x*y;
        printf("Product is: %d", pro);
    }
    return 0;
}
