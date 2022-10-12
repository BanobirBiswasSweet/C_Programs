#include <stdio.h>
int compare(char str1[], char str2[]);
int main()
{
    char str1[1000], str2[1000];
    printf("Enter first string:");
    gets(str1);
    printf("Enter second string:");
    gets(str2);
    compare(str1, str2);
    return 0;
}
int compare(char str1[], char str2[])
{
    int i=0, temp=0;
    while(str1[i]!='\0' && str2[i]!='\0'){
            i++;
        if(str1[i]==str2[i]){
            temp=0;
        }
        else if(str1[i]>str2[i]){
            temp=1;
        }
        else if(str1[i]<str2[i]){
            temp=-1;
        }
    }
    printf("%d\n", temp);
    return temp;
}

