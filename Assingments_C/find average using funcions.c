#include <stdio.h>
int computeaverage(int a, int b);
int main()
{
    int a, b;
    printf("Enter the value of a & b:");
    scanf("%d%d", &a, &b);
    printf("The average value is: %d\n", computeaverage(a, b));
    return 0;

}
int computeaverage(int a, int b)
{
    int result;
    result=(a+b)/2;
    return result;
}
