#include <stdio.h>
int main()
{
    int a, b, c, sum, ave, max, min;
    printf("Enter three numbers:");
    scanf("%d%d%d", &a, &b, &c);

    /*identification of sum*/
    sum=(a+b+c);
    printf("The sum is: %d\n", sum);

    /*identification of average*/
    ave=(a+b+c)/3;
    printf("The average value is: %d\n", ave);

    /*identification of largest number*/
    if(a>b){
        max=a;
        printf("largest number:%d\n", max);
    }
    else if(b>c){
        max=b;
        printf("largest number:%d\n", max);
    }
    else if(c>a){
        max=c;
        printf("largest number:%d\n", max);
    }
    else if(b>a){
        max=b;
        printf("largest number:%d\n", max);
    }
    else if(a>c){
        max=a;
        printf("largest number:%d\n", max);
    }
    else if(c>b){
        max=b;
        printf("largest number:%d\n", max);
    }

    /*identification of smallest number*/

    if(a<b){
        min=a;
        printf("smallest number:%d\n", min);
    }
    else if(b<c){
        min=b;
        printf("smallest number:%d\n", min);
    }
    else if(c<a){
        min=c;
        printf("smallest number:%d\n", min);
    }
    else if(b<a){
        min=b;
        printf("smallest number:%d\n", min);
    }
    else if(a<c){
        min=a;
        printf("smallest number:%d\n", min);
    }
    else if(c<b){
        min=b;
        printf("largest number:%d\n", min);
    }
    return 0;
}
