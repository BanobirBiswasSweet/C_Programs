#include <stdio.h>
main()
{
    char str1[80], str2[80];
    int i;
    printf("Enter a string:");
    scanf("%s", str2);
    for(i=0; str2[i]!='\0'; i++)
        str1[i]=str2[i];
        str1[i]='\0';
    printf("\n");
    printf("Copied string is: %s\n\n", str1);
    printf("The number of characters: %d\n", i);
}
