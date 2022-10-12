#include <stdio.h>
int main()
{
    char text[1000];
    int i, c;
    c=0;
    printf("Enter text:\n");
    gets(text);
    for(i=0; text[i]!='\0'; i++)
        c++;
    printf("All words: %d\n", c);
    return 0;
}
