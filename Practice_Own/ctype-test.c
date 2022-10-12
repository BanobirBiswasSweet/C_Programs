#include <stdio.h>
#include <ctype.h>
int main()
{
    char s[1000];
    int i, c=0;
    printf("Enter a line: ");
    gets(s);
    for(i=0; s[i]!='\0'; i++){
        if(isdigit(s[i]))
        c++;
    }
    printf("Total number of digit: %d\n", c);
    return 0;
}
