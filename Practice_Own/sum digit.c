#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    int i, n, sum;
    sum=0;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter the character: ");
    for(i=1; i<n; i++){
        scanf("%c", &ch);
    if(isdigit(ch))
        sum=sum+ch;
    }
    printf("Sum is: %d\n", sum);
    return 0;
}
