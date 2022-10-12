#include <stdio.h>
int main()
{
    int i, sum;
    sum=0;
    for(i=0; i<100; i++){
        if(i%6==0 && i%4!=0){
            printf("%d\n", i);
            sum=sum+i;
        }
    }
    printf("The sum is: %d\n", sum);
    return 0;
}
