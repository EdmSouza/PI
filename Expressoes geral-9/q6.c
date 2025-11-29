#include <stdio.h>

int main()
{
    double pricegal,pricelt,cot;
    double ltemreal;
    scanf("%lf\n%lf\n%lf",&pricegal,&pricelt,&cot);
    ltemreal = (pricegal/3.8)*cot;
    printf("Gasolina EUA: R$ %.2f\n",ltemreal);
    printf("Gasolina Brasil: R$ %.2f\n",pricelt);
    if(pricelt>ltemreal){
        printf("Mais barata nos EUA\n");
    }else if(ltemreal>pricelt){
        printf("Mais barata no Brasil\n");
    }else{
        printf("Igual\n");
    }
}