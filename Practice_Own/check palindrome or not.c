#include <stdio.h>
int main()
{
    int n, rem, reverse, temp;
    reverse=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp=n;
    while(temp!=0){
        rem=temp%10;
        reverse=reverse*10+rem;
        temp=temp/10;
    }
    if(reverse==n)
        printf("The number is palindrome.\n");
    else
        printf("The number is not palindrome.\n");
    return 0;
}
