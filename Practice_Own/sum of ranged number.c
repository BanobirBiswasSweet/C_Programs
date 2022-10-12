#include <stdio.h>
int main()
{
    int start, end, sum;
    sum=0;
    printf("Enter the start number:");
    scanf("%d", &start);
    printf("Enter the end number:");
    scanf("%d", &end);

    for(start=0; start<end; start++){
        if(start%5==0){
            sum=sum+start;
         }
       }
        printf("The sum is: %d\n", sum);
    return 0;
}

