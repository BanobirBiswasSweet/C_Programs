#include <stdio.h>

int main()
{
    int i, j, x, n;

    printf("Enter the value of n:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the numbers:\n");
    for (i=0; i< n; i++)
        scanf("%d", &a[i]);
    for (i=0; i<n; i++){
        for (j=i+1; j<n; j++)
        {
             if (a[i]>a[j])
            {
                x=a[i];
                a[i]=a[j];
                a[j]=x;
            }
        }
    }
    printf("The numbers are arranged in ascending order:\n");
    for (i=0; i<n; i++){
            printf("%d\n", a[i]);
    }
    return 0;
}
