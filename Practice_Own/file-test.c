#include <stdio.h>
main()
{
    char *file_name;
    int *fp1, *fp2;
    int i, number;

    fp1=fopen("TEST", "w");

    for(i=10; i<=100; i+=10)
        putw(i, fp1);

    fclose(fp1);

    printf("\nInput filename\n");
    scanf("%s", file_name);

    if((fp2=fopen(file_name, "r"))==NULL){
        printf("The file can't be opened.\n");
        printf("Type file name again.\n");
        scanf("%s", file_name);
    }
    else
    for(i=1; i<=20; i++){
        number=getw(fp2);
        if(feof(fp2)){
            printf("\nRan out of data.\n");
            break;
        }
        else
            printf("%d\n", number);
    }
    fclose(fp2);
}
