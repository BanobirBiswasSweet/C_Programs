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
     for ( r = lines ; r>0 ; r-- ){
      for ( c = lines-r; c>0; c-- )
         printf(" ");



      for ( c = 2*r - 1 ; c>0 ; c-- )
         printf("*");

      printf("\n");
   }

}

