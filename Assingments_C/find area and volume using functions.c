#include <stdio.h>
#define PI 3.1416
void findarea(int radius);
void findvolume(int radius);
int main()
{
    int radius;
    printf("Enter the value of radius:");
    scanf("%d", &radius);
    findarea(radius);
    findvolume(radius);
    return 0;
}

void findarea(int radius)
{
    int area;
    area=(4*PI*radius*radius);
    printf("The area is: %d\n", area);
    return area;
}

void findvolume(int radius)
{
    int d;
    float volume;
    d=2*radius;
    volume=(PI*d*d*d)/6;
    printf("The volume is: %0.2f\n", volume);
    return volume;
}
