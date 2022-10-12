#include<stdio.h>
int main()
{
    int i,j;
    //printf("enter the value");
    for(i=1;i<7;i++)
    {
        for(j=1;j<7;j++)
            if(i==1|| i==2&&j==2||i==2&&j==3||i==2&&j==4)
            printf("*");

            else
                printf(" ");
            printf("\n");
    }
  printf("\n");
}
