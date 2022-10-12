#include <stdio.h>
#include <string.h>
typedef struct personal
{
    char name[20];
    int day;
    char month[30];
    int year;
    float salary;
}men;
main()
{
    men person;
    printf("Enter name, day, month, year, salary:\n");
    scanf("%s%d%s%d%f", person.name, &person.day, person.month, &person.year, &person.salary);
    printf("%s  %d  %s  %d  %f\n", person.name, person.day, person.month, person.year, person.salary);
}
