#include <stdio.h>
int main()
{
    int n, c, f, s, sum;
    c=0;
    f=0;
    s=1;
    sum=0;
    printf("Enter the term: ");
    scanf("%d", &n);
    do{
                if(c<=1)
                  sum=c;
                else{
                  sum=f+s;
                  f=s;
                  s=sum;
                }
                printf("%d\t", sum);
                c++;
        }while(c<n);
    return 0;
}

