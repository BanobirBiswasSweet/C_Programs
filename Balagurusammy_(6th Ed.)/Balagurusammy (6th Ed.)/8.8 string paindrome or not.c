#include <stdio.h>
#include <string.h>
main()
{
    char s[80];
    int flag, right, left;
    right=strlen(s)-1;
    left=0;
    printf("Enter a string: ");
    gets(s);
    while(left<right){
        if(s[left]==s[right])
            flag=='t';
        else
            flag=='f';
        left++;
        right--;
    }
    if(flag=='t')
        printf("The string is palindrome.\n");
    else
        printf("The string is not palindrome.\n");
}
