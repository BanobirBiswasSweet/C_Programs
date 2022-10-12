#include<stdio.h>
#include <string.h>
int main()
{
    int i;
    char newchar, oldchar, arr[1000];
    printf("Enter the string:");
    gets(arr);
    printf("Enter the character to be replaced:");
    scanf(" %c", &oldchar);
    printf("Enter the replacement character:");
    scanf(" %c", &newchar);
    printf("Old char: %c\n", oldchar);
    printf("New char: %c\n", newchar);
    for(i=0; arr[i]!='\0'; i++){
            if(arr[i]==oldchar){
                arr[i]=newchar;
            }
    }
    printf("Modified string is: %s\n", arr);
    return 0;
}
