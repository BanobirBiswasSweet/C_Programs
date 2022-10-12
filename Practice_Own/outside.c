#include <stdio.h>
int main()
{
    int b, c;
    b=0;
    c=9;
    while(b<c){
        printf("b=%d, c=%d\n", b, c);
        b++, c--;
    }
    printf("outside: b=%d, c=%d\n", b, c);
    return 0;
}
