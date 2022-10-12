#include <stdio.h>
int main()
{
    int n, temp, rem, reverse;
    reverse=0;
    printf("Enter the number:");
    scanf("%d", &n);
    temp=n;
    while(temp!=0){
        rem=temp%10;
        temp=temp/10;
        reverse=reverse*10+rem;
    }
    printf("The reversed number: %d\n", reverse);
    if(reverse==n){
        printf("The number is palindrome.\n");
    }
    else{
        printf("The number is not palindrome.\n");
    }
    return 0;

}
