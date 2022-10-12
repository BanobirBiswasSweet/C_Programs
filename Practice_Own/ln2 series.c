#include <stdio.h>
int main()
{
    int n, i, ln2;
    ln2=0;
    printf("Enter value: ");
    scanf("%d", &n);
    for(i=0; i<=n; i++){
        if(i%2==0){
            ln2=ln2-1/i;
        }
        else{
            ln2=ln2+1/i;
        }
        printf("Value is: %d", ln2);
    }
    return 0;
}
