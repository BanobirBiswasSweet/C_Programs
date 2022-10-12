#include<stdio.h>
#include<math.h>
#define PI 3.1416
#define MAX 180
int main()
{
    int angle;
    angle=0;
    float x, y, z;
    printf("Angle\t\tsin(angle)\tcos(angle)\n\n");
    while(angle<=MAX){
        x=(PI*angle)/MAX;
        y=sin(x);
        z=cos(x);
        printf("%d\t\t%0.5f\t\t%0.5f\n", angle, y, z);
        angle=angle+10;
    }
    return 0;
}
