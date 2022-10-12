#include <stdio.h>
#include <string.h>
void search(char arr[], char key);
int main()
{
     char arr[1000], key;

     printf("Enter string:");
     gets(arr);

     printf("Enter the search key:");
     scanf("%c", &key);
     search(arr,key);
     return 0;

}
void search(char arr[], char key)
{
    int temp=0, i;
         for(i=0; arr[i]!='\0'; i++){
         if (arr[i]==key){
            temp=1;
         }
     }
     if (temp==1)
     printf("Found.\n");
     else
     printf("Not found.\n");
}

