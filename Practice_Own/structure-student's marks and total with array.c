#include <stdio.h>
#include <string.h>
typedef struct marks
{
    int sub[3];
    int total;
}x;
main()
{
    x student[3]={45, 67, 81, 0, 75, 53, 69, 0, 57, 36, 71, 0};
    int i, j;
    for(i=0; i<=2; i++){
        for(j=0; j<=2; j++){
            student[i].total+=student[i].sub[j];
        }
        printf("Student[%d]: %d\n", i+1, student[i].total);
    }
}
