#include <stdio.h>
main()
{
    char *name;
    int length;
    char *cptr=name;
    name="SWEET";
    printf("Name: %s\n", name);
    while(*cptr!='\0'){
        printf("%c is stored at address %u\n", *cptr, cptr);
        cptr++;
    }
    length=cptr-name;
    printf("\nLength of the string= %d\n", length);
}
