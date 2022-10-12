#include <stdio.h>
int main()
{
    int i, n, c;
    c=0;
    printf("Enter 100 ages:\n");
    for(i=1; i<=5; i++){
        scanf("%d", &n);
        if(n>50 && n<60)
            c++;
    }
    printf("The number of desired age: %d\n", c);
    return 0;
}
