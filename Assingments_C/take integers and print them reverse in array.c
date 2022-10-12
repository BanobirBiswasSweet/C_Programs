#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the length of array:");
    scanf("%d", &n);
    printf("\nEnter array elements:\n");
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("\nReversed array elements:\n");

    for(i=n-1; i>=0; i--){
        printf("%d\n", a[i]);
    }
    return 0;
}
