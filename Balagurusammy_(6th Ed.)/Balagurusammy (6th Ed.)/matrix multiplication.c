#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, k, sum, a[3][3], b[3][3], c[3][3];
    printf("Enter a 3x3 matrix elements:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter b 3x3 matrix elements:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("a[%d][%d]=", i, j);
            scanf("%d", &b[i][j]);
        }
    }
      for (i = 0; i <= 2; i++) {
      for (j = 0; j <= 2; j++) {
         sum = 0;
         for (k = 0; k <= 2; k++) {
            sum = sum + a[i][k] * b[k][j];
         }
         c[i][j] = sum;
      }
   }

   printf("\nMultiplication Of Two Matrices : \n");
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         printf(" %d ", c[i][j]);
      }
      printf("\n");
   }
    return 0;
}
