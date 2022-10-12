#include <stdio.h>
#include <string.h>
struct marks
{
    int sub1, sub2, sub3, total;
};
main()
{
    int i;
    struct marks student[3]={{45, 67, 81, 0}, {75, 53, 69, 0}, {57, 36, 71, 0}};;

    for(i=0; i<=2; i++){
        student[i].total=student[i].sub1+student[i].sub2+student[i].sub3;
        printf("Student[%d]: %d\n", i+1, student[i].total);
    }
}
