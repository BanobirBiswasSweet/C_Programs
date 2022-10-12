#include <stdio.h>
main()
{
    char *filename;
    FILE *fp1, *fp2;
    int i, number;

    fp1=fopen("TEST", "w");
    for(i=10; i<=100; i+=10)
        putw(i, fp1);
        fclose(fp1);
        printf("\nInput a filename\n");
        scanf("%s", filename);
        if((fp2=fopen("filename", "r")==NULL)){
            printf("File can't be opened.\n");
            printf("Type filename again\n\n");
            scanf("%s", filename);
        }
        else
        for(i=0; i<=20; i++){
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
