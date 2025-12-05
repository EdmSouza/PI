#include <stdio.h>

int main()
{
    int qtd,num1,numtemp,soma;
    scanf("%d",&qtd);
    soma = 0;
    numtemp = 0;
    for(int i =0; i<qtd; i++){
        numtemp = soma;
        scanf("%d",&num1);
        soma = num1+numtemp;
    }printf("%d",soma);
}