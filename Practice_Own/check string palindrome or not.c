#include <stdio.h>
#include <string.h>
main()
{
    char ch='p', string[100];
    int left, right, len;
    printf("Enter a string:");
    gets(string);
    len=strlen(string);
    left=0;
    right=len-1;
    while(left<right){
        if(string[left]==string[right])
        ch='t';
        else
        ch='f';
        left++;
        right--;
    }
    if(ch=='t')
        printf("The string is palindrome.\n");
    else
        printf("The string is not palindrome.\n");
}
