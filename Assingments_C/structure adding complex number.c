#include <stdio.h>
#include <string.h>
#include <math.h>
typedef struct complex{
    float real;
    float imag;

}comp;
int main()
{
    comp number[2];
    int i;
    float sum=0;
    for(i=0; i<2; i++){
        printf("Enter the real part:\n");
        scanf("%d", &number[i].real);
        printf("Enter the imaging par:\n");
        scanf("%d", &number[i].imag);
        sum=(number[i].real+number[i].imag);
    }
    printf("The sum is: %f\n", sum);
    return 0;
}
