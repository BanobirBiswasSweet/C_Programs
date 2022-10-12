#include<stdio.h>
void replace(char arr[], char oldchar, char newchar);
int main()
{
    char newchar, oldchar, arr[1000];
    printf("Enter the string:");
    scanf("%s", &arr);
    printf("Enter the character to be replaced:");
    scanf(" %c", &oldchar);
    printf("Enter the replacement character:");
    scanf(" %c", &newchar);
    printf("Old char: %c\n", oldchar);
    printf("New char: %c\n", newchar);
    replace(arr, oldchar, newchar);
    printf("Modified string is: %s\n", arr);
    return 0;
}

void replace(char arr[], char oldchar, char newchar)
{
    int i=0;
    while(arr[i]!='\0')
    {
    if(arr[i]==oldchar)
    {
        arr[i]=newchar;
    }
    i++;
    }
}
