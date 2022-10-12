#include <stdio.h>
int main()
{
    float marks;
    char grade;
    printf("Enter the marks:");
    scanf("%f", &marks);
    if(marks>=80 && marks<=100){
        grade='A+';
        printf("The grade is: %c", grade);
    }
    else if(marks>=70 && marks<=79){
        grade='A';
        printf("The grade is: %c", grade);
    }
    else if(marks>=60 && marks<=69){
        grade='B';
        printf("The grade is: %c", grade);
    }
    else if(marks>=50 && marks<=59){
        grade='C';
        printf("The grade is: %c", grade);
    }
    else if(marks>=40 && marks<=49){
        grade='D';
        printf("The grade is: %c", grade);
    }
    else if(marks<40 && marks>=0){
        printf("Failed!");
    }
    else{
        printf("Marks not defined.");
    }
    return 0;
}
