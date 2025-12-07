#include <stdio.h>

int main()
{
    double num, numref;
    int i = 1;
    int contador = 0;
    double soma = 0;
    while(i<=7){
        scanf("%lf",&num);
        if(i>1 && num >= numref + 0.5){
            contador++;
        }
        numref = num;
        soma = soma + num;
        i++;
    }printf("R$ %.2f\n%d",soma,contador);
}