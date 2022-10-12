#include <stdio.h>
main()
{
    int m=3, n=2;
    double average(int x[][n], int m, int n);
    double mean;
    int matrix[m][n]={{1,2}, {3,4}, {4,5}};
    mean=average(matrix, m, n);
    return 0;
}

double average(int x[][n], int m, int n)
{
    int i, j;
    double sum=0.0;
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            sum=sum+x[i][j];
        }
    }
    return (sum/m*n);
}
