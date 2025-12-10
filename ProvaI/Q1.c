#include <stdio.h>

int main()
{       //Mantive tudo, nada alterado
    int valortrigl;
    scanf("%d",&valortrigl);
    if(valortrigl<0){
        printf("Valor fora da faixa");
    }else if(valortrigl>=0 && valortrigl<150){
        printf("Triglicerideos %d mg/dl => DESEJAVEL",valortrigl);
    }else if(valortrigl>=150 && valortrigl<=199){
        printf("Triglicerideos %d mg/dl => LIMITROFE",valortrigl);
    }else if(valortrigl>=200 && valortrigl<=500){
        printf("Triglicerideos %d mg/dl => ALTO",valortrigl);
    }else if(valortrigl>500){
        printf("Triglicerideos %d mg/dl => MUITO ALTO",valortrigl);
    }
}