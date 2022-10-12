#include <stdio.h>
#include <string.h>
int main()
{
    char type1[80]="Vehicle type\tMonth of sales\t\tprice\nMARUTI-800\t\t02/01\t\t210000\n",
         type2[80]="Vehicle type\tMonth of sales\t\tprice\nMARUTI-DX\t\t07\01\t\t265000\n",
         type3[80]="Vehicle type\tMonth of sales\t\tprice\nGYPSY\t\t04/02\t\t315750\n",
         type4[80]="Vehicle type\tMonth of sales\t\tprice\nMARUTI-VAN\t\t08/02\t\t240000\n";
    int start, end;
    printf("Enter service time:\n");
    scanf("%d%d", &start, &end);
    if(start>=2001 && end<=2003)
        printf("%s\n", type1);
    else if(start>=2004 && end<=2007)
        printf("%s\n", type2);
    else if(start>=2008 && end<=2011)
        printf("%s\n", type3);
    else if(start>=2012 && end<=2015)
        printf("%s\n", type4);
    return 0;

}
