#include <stdio.h>
struct class
{
    int number;
    char name[20];
    float marks;
};
main()
{
    int x;
    struct class student1={111, "sweet", 98.5};
    struct class student2={222, "arfan", 89.5};
    struct class student3;
    student3=student2;
    x=(student3.number==student2.number && student3.marks==student2.marks)? 1:0;
    if(x==1){
        printf("Student2 and Student3 are same.\n\n");
    printf("%d\t%s\t%0.2f\n", student3.number, student3.name, student3.marks);
    }
    else
        printf("Student2 and Student3 are different.\n");
}
