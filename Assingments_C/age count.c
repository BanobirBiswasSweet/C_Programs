#include <stdio.h>
int main()
{
    int i, ranged;
    float age;
    i=1;
    ranged=0;
    while(i<=5){
        printf("Enter age:");
        scanf("%f", &age);
        i++;
        if(age>=40 && age<=60){
            ranged++;
        }
        continue;
    }
    printf("Counted person: %d\n", ranged);
        return 0;
}
