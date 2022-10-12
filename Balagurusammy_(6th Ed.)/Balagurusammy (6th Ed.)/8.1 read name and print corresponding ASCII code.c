#include <stdio.h>
main()
{
    char s[80];
    int i;
    gets(s);
    for(i=0; s[i]!='\0'; i++)
    printf(" %d", s[i]);
    printf("\n");
}
