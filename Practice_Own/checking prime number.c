#include <stdio.h>
main()
{
int i, cur;
for( i = 1; i <= 100; i++ )
{
printf("%d", i);
//print * if i is prime
if(i < 3 ) printf("*");
else{
for(cur=2; cur<=(int)sqrt(i); ++cur)
if(i % cur == 0 ) break;
if(i % cur!= 0) printf("*");
}
if ( i % 10 == 0 )
printf("\n");
else
printf("\t");
}
return 0;
}
