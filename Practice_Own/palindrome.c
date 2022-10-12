#include <stdio.h>
int main()
{
    int n, rem, temp, reverse;
    reverse=0;
    printf("Enter a number:");
    scanf("%d", &n);
    temp=n;
    while(temp!=0){
            rem=temp%10;
            reverse=reverse*10+rem;
            temp/=10;
    }
    if(reverse==n)
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");
    return 0;

}
