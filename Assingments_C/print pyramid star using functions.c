#include <stdio.h>
void printstarpyramid(int lines);
int main()
{
    int lines;
    printf("Enter the line number: ");
    scanf("%d", &lines);
    printstarpyramid(lines);
    return 0;
}

void printstarpyramid(int lines)
{
    int r, c, temp;
    temp=lines;
     for ( r = 1 ; r <=lines ; r++ ){
      for ( c = 1 ; c<temp; c++ )
         printf(" ");
         temp--;



      for ( c = 1 ; c <= 2*r - 1 ; c++ )
         printf("*");

      printf("\n");
   }

}
