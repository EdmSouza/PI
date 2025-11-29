#include <stdio.h>

int main()
{
    double pricegal,pricelt,cot;
    double ltemreal;
    scanf("%lf\n%lf\n%lf",&pricegal,&pricelt,&cot);
    ltemreal = (pricegal/3.8)*cot;
    printf("Gasolina EUA: R$ %.2f",ltemreal);
    printf("Gasolina Brasil: R$ %.2f",pricelt);
    if(pricelt>ltemreal){
        printf("Mais barata no Brasil");
    }else if(ltemreal>pricelt){
        print("Mais barata nos EUA");
    }else{
        printf("Igual");
    }
}