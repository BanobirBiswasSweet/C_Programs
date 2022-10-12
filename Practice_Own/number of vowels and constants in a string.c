#include <stdio.h>
int main()
{
    char string[100];
    int v=0, c=0, i;
    printf("Enter a string: ");
    gets(string);
    for(i=0; string[i]!='\0'; i++){
        if(string[i]=='a' || string[i]=='e' || string[i]=='i'|| string[i]=='o' || string[i]=='u' || string[i]=='A' || string[i]=='E' || string[i]=='I'|| string[i]=='O' || string[i]=='U')
            v++;
        else
            c++;
    }
    printf("Number of vowels: %d\n", v);
    printf("Number of constants: %d\n", c);
    return 0;
}
