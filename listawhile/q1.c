#include <stdio.h>

int main()
{
    int qtd;
    scanf("%d",&qtd);
    int contador = 0;
    int numerador = 0;
    int denominador = 0;
    double resultado = 0;
    while(contador<qtd){
        if(contador == 0 && qtd == 0){
            printf("0");
        }
        denominador = denominador + 3;
        numerador = numerador + 1;
        resultado = resultado + (double)numerador/(double)denominador;
        contador++;
        if(contador < qtd){
            printf("%d/%d + ",numerador,denominador);
        }else{
            printf("%d/%d",numerador,denominador);
        }
    }
    if(resultado == 0){
        printf("%.2f",resultado);
    }else{
        printf("\n%.2f",resultado);
    }
}