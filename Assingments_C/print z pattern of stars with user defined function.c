#include <stdio.h>
void printzorro(int n);
int main()
{
    int n;
    printf("Enter the controller:");
    scanf("%d", &n);
    printf("\n");
    printzorro(n);

}
void printzorro(int n){
    int i, j;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if((i==1 || (j+i==n+1) || i==n)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        if(i==n)
            printf("ORRO");
            printf("\n");
    }
}
