#include <stdio.h>
int main()
{
    int a, b, c, even_number=0, odd_number=0;
    printf("Enter the three numbers:");
    scanf("%d%d%d", &a, &b, &c);

    if(a%2==0){
        even_number++;
    }
    else{
        odd_number++;
    }
    if(b%2==0){
        even_number++;
    }
    else{
        odd_number++;
    }
    if(c%2==0){
        even_number++;
    }
    else{
        odd_number++;
    }
    printf("The counted even number is: %d\n",even_number);
    printf("The counted odd number is: %d\n", odd_number);

    return 0;
}
