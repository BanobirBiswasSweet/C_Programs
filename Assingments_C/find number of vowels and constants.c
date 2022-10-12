#include<stdio.h>
void count(char arr[]);
int main(){
    char arr[1000];
    printf("Enter a line of string:");
    gets(arr);
    count(arr);
    return 0;
}
void count(char arr[])
{
    int i, v, c;
    v=c=0;
    for(i=0; arr[i]!='\0'; i++)
    {
        if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u' || arr[i]=='A' || arr[i]=='E' || arr[i]=='I' || arr[i]=='O' || arr[i]=='U')
            v++;
        else if((arr[i]>='a'&& arr[i]<='z') || (arr[i]>='A'&& arr[i]<='Z'))/*ASCII code will be factor for characters*/
            c++;
    }
    printf("Vowels: %d\n", v);
    printf("Consonants: %d\n", c);
}
