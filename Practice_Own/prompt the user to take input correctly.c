#include <stdio.h>
int main()
{
    int n, i, flag;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(i=1; i<=1000; i++){
        if(n>0 && n<9)
           flag=1;

        else if(n<=0 || n>9){
           printf("Input error!!\a. Try again letter.\n\n");
           printf("Enter the number: ");
           scanf("%d", &n);
        }
    }
        if(flag==1)
           printf("The number is: %d\n", n);
    return 0;
}
