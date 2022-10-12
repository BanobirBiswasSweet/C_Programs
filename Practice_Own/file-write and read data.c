#include <stdio.h>
main()
{
    FILE *f1;
    char c;
    printf("Data Input.\n\n");
    f1=fopen("INPUT","w");
    while((c=getchar()!=EOF))
        putc(c,f1);
    fclose(f1);
    f1=fopen("INPUT","r");
    while((c=getchar()!=EOF))
        printf("%c", c);
    fclose(f1);
}
