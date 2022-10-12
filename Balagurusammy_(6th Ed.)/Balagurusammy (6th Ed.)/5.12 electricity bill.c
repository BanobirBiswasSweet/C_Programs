#include <stdio.h>
#define MCHRG 100
#define SCHRG 0.15
int main()
{
    float frst, nxt, bey, total, Gtotal;
    printf("Enter the amount of used units: ");
    scanf("%f", &frst);
    if(frst>0 && frst<200){
        Gtotal=frst*0.8+MCHRG;
    printf("The cost is: %0.2f tk.\n", Gtotal);
    }
    else if(frst>200 && frst<300){{
            nxt=(frst-200);
        total=200*0.8+nxt*0.9+MCHRG;
    }
        if(total>400){
            Gtotal=total+SCHRG;
            printf("The cost is: %0.2f tk.\n", Gtotal);
        }
        else
            printf("The cost is: %0.2f tk.\n", total);

    }
    else if(frst>300){
        total=frst*1+MCHRG;
        if(total>400){
            Gtotal=total+SCHRG;
        }
        printf("The cost is: %0.2f tk.\n", Gtotal);
    }
    else
        printf("Input error.\n");
    return 0;
}
