#include <stdio.h>

int main()
{
    double cons, valor, custo, esgoto;
    scanf("%lf %lf",&cons,&valor);
    custo = (cons*1000.00)*valor;
    esgoto = custo*0.8;
    printf("%.2f\n%.2f\n%.2f",custo,esgoto,custo+esgoto);
}