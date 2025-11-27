#include <stdio.h>

int main()
{
    int kwh;
    double total;
    scanf("%d",&kwh);
    total = 0;
    if(kwh<=30){
        printf("35\n1.35");
    }
    else if(kwh>=30 && kwh<=99){
        total = 1.35*kwh;
        printf("%.2f\n1.35",total);
    }else if(kwh>=100 && kwh<=299){
        total = 1.55*kwh;
        printf("%.2f\n1.55",total);
    }else if(kwh>=300 && kwh<=574){
        total = 1.75*kwh;
        printf("%.2f\n1.75",total+(total*0.1));
    }else{
        total = 2.15*kwh;
        printf("%.2f\n2.15",total+(total*0.1));
    }
}