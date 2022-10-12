#include <stdio.h>
main()
{
    FILE *fp;
    int number, quantity, i;
    float price, value;
    char item[10], file_name[10];

    printf("Input file name\n\n");
    scanf("%s", file_name);
    fp=fopen(file_name, "w");
    printf("Input inventory data\n\n");
    printf("Item name  number  price  quantity\n");

    for(i=0; i<=3; i++){
        fscanf(stdin, "%s %d %f %d", item, &number, &price, &quantity);
        fprintf(fp, "%s %d %f %d", item, number, price, quantity);
    }
    fclose(fp);
    fprintf(stdout, "\n\n");
    fp=fopen(file_name, "r");

    printf("Item name  number  price  quantity  value\n");

    for(i=0; i<=3; i++){
        fscanf(fp, "%s %d %f %d", item, &number, &price, &quantity);
        value=price*quantity;
        fprintf(stdout, "%-8s %7d %8.2f %8d %11.2f", item, number, price, quantity, value);
    }
    fclose(fp);
}
