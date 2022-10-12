#include <stdio.h>
int main()
{
    float l, w;
    float area;
    printf("Enter the length of the rectangle:");
    scanf("%f", &l);
    printf("Enter the wide of the rectangle:");
    scanf("%f", &w);
    area=(l*w);
    if(area!=0 && area>0){
        printf("The area of the rectangle is: %0.2f", area);
    }
    else{
        printf("Solve can't be done.");
    }
    return 0;

}
