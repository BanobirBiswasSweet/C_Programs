#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the length of array:");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements:\n");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
        for(i=0; i<n; i++){
        if(a[0]<a[i]){
            a[0]=a[i];
        }
    }
    printf("Largest element in array is: %d\n", a[0]);

    return 0;
}
