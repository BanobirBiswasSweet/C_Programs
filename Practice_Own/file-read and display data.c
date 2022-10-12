#include <stdio.h>
main()
{
    FILE *f1;
    char c;
    printf("Data Input\n\n");
    f1=fopen("Input", "w");
    while((c=getchar())!=EOF)
        putc(c, f1);
    fclose(f1);
    printf("Data Output\n\n");
    f1=fopen("Input", "r");
    while((c=getc(f1))!=EOF)
        printf("%c", c);
    fclose(f1);
}
