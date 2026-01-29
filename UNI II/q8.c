#include <stdio.h>

int fcresrec(int num){
    if(num>0){
        int temp = num;
        printf("%d ",temp);
        return fcresrec(num-1);
    }else if(num == 0){
        printf("0");
        return 0;
    }
}

void fcrrec(int num1){
    if(num1==0){
        printf("0");
        return;
    }fcrrec(num1-1);
    printf("%d",num1);
}
//1. Crie uma função recursiva que receba um número inteiro N e imprima todos os números
//naturais de 0 até N em ordem crescente.

//2. Crie uma função recursiva que receba um número inteiro N e imprima todos os números
//naturais de 0 até N em ordem decrescente.

int main()
{
    int numero;
    scanf("%d",&numero);
    fcresrec(numero);
    fcrrec(numero);
}