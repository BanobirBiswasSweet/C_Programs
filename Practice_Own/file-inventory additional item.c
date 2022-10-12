#include <stdio.h>
struct invent_record
{
    char name[10];
    int number;
    float price;
    int quantity;
};

main()
{
    struct invent_record item;
    char file_name[10];
    int response;
    FILE *fp;
    long n;

    void append(struct invent_record *x, File *y);
    printf("Type file name: ");
    scanf("%s", &file_name);
    fp=fopen(file_name, "a+");

    do{
        append(&item, fp);
        printf("\nItem %s appended.\n, item.name");
        printf("\nDo you want to add another item? ");
        scanf("%d", &response);
    }while(response==1);
    n=ftell(fp);
    fclose(fp);
    fp=fopen(file_name, "r");
    while(ftell(fp)<n){
        fscanf(fp, "%s %d %d %f", item.name, &item.price, &item.quantity);
        fprintf(stdout, "%-8s %7d %8.2f %8d\n", item.name, item.price, item.quantity);
    }
    fclose(fp);

    void append(struct invent_record *product, File *ptr)
    {
        printf("Item name: ");
        scanf("%s", product.name);
        printf("Item number: ");
        scanf("%d", &product.number);
        printf("Item price: ");
        scanf("%f", &product.price);
        printf("Quantity: ");
        scanf("%d", &item.quantity);
        fprintf(ptr, "%s %d %0.2f %d", product.name, product.number, product.price, product.quantity);
    }
}
