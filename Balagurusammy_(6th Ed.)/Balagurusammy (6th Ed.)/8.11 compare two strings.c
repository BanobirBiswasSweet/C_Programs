#include <stdio.h>
#include <string.h>
main()
{
    char s1[0], s2[80];
    int x, len1, len2;
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);
    x=strcmp(s1, s2);
    len1=strlen(s1);
    len2=strlen(s2);
    if(x!=0)
        printf("The strings are not equal.\n");
    else
        printf("The strings are equal.\n");
    if(len1>len2)
        printf("First string is greater than second string.\n");
    else if(len1<len2)
        printf("Second string is greater than first.\n");
}
