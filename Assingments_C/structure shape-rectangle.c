#include<stdio.h>
#include<string.h>
typedef struct shape
{
    double length[10];
    double width[10];
} R;
int findarea(struct shape R);
int findperimeter(struct shape R);
int main()
{
    R rectangle;
    printf("Enter length:\n");
    gets(rectangle.length);
    printf("Enter the width:\n");
    gets(rectangle.width);
    getc(stdin);
    findarea(shape R);
    findperimeter(shape R);
    return 0;
}
int findarea(struct shape R)
{
    double area;
    area=(length*width);
    printf("The area is: %0.2lf", area);
}
int findperimeter(struct shape R)
{
    double perimeter;
    perimeter=2*(length+width);
    printf("The perimeter is: %0.2lf", perimeter);
}

