#include <stdio.h>
#include <string.h>
main()
{
    char first_name[100]={"BANOBIR"};
    char second_name[100]={"BISWAS"};
    char last_name[100]={"SWEET"};
    char name[100];
    int i, j, k;
    for(i=0; first_name[i]!='\0'; i++)
        name[i]=first_name[i];
        name[i]=' ';

    for(j=0; second_name[j]!='\0'; j++)
        name[i+j+1]=second_name[j];
        name[i+j+1]=' ';

    for(k=0; last_name[k]!='\0'; k++)
        name[i+j+k+2]=last_name[k];
        name[i+j+k+2]=' ';

    name[i+j+k+2]='\0';
    printf("\n");
    printf("%s\n", name);
}

