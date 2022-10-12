#include<stdio.h>
void reverse(char arr[]);

int main(){
   char arr[1000];

   printf("Enter the string:");
   gets(arr);
   reverse(arr);
   return 0;
}
void reverse(char arr[])
{
   char temp;
   int i, j = 0;
   i = 0;
   j = strlen(arr) - 1;

   while(i<j){
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      i++;
      j--;
   }
   printf("Reverse string is :%s\n", arr);
}
