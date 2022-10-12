#include <stdio.h>
int main()
{
    int i, a, b, z;
    char d;
    z=1;
    a=0;
    b=0;
    printf("Enter directions:");
    for(i=0; z!=0; i++){
    scanf("%c", &d);
    switch(d){
    case 'e' : a++;
    break;
    case 'n' : b++;
    break;
    case 'w' : a--;
    break;
    case 's' : b--;
    break;
    case '0' : z=0;
    break;
    }
  }
  printf("Your position is: (%c%c)", a, b);
  return 0;
}
