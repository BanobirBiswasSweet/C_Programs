#include <stdio.h>
int main()
{
    char s[80], key;
    int i, len, flag=0;
    printf("Enter a string: ");
    gets(s);
    printf("Enter a keyword: ");
    scanf("%c", &key);
    len=strlen(s);
    for(i=0; i<=len; i++){
        if(s[i]==key)
            flag=1;
    }
        if(flag==1)
           printf("Keyword found.\n");
        else
           printf("Keyword not found.\n");
    return 0;

}
