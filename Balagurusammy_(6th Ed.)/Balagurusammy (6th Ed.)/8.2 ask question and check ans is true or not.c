#include <stdio.h>
#include <string.h>
int main()
{
    char s1[80]="Denis Ritchie";
    char s2[80]="denis ritchie";
    char ans[80];
    int i, flag;
    i=0;
    printf("Who is the inventor of c? Ans: ");
    gets(ans);
    while((s1[i]==ans[i] && ans[i]!='\0' && ans[i]!='\0') || (s2[i]==ans[i] && s2[i]!='\0' && ans[i]!='\0')){
        i++;
    }
    if((s1[i]=='\0' && ans[i]=='\0') || (s2[i]=='\0' && ans[i]=='\0'))
        printf("Good.\n");
    else
        printf("Wrong!! Try again.\n");
    return 0;

}
