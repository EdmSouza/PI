#include <stdio.h>
#include <stdbool.h>

const bool ePrimo(int num){
    if(num==2){
        return true;
    }else if(num<2){
        return false;
    }else{
        for(int i = 2; i < num; i++){
            if(num%i == 0){
                return false;
            }
        }
    }return true;
}

int main()
{
    int num1,num2,soma;
    scanf("%d %d",&num1,&num2);
    bool ehprimo1 = ePrimo(num1);
    bool ehprimo2 = ePrimo(num2);
    if(ehprimo1 == false){
        printf("O numero %d nao eh primo",num1);
    }
    else if(ehprimo2 == false){
        printf("O numero %d nao eh primo",num2);
    }
    if(ehprimo1 && ehprimo2){
        soma = num1+num2;
        bool ehprimosoma = ePrimo(soma);
        if(ehprimosoma == false){
            printf("A soma de %d e %d nao eh um primo",num1,num2);
        }else{
            printf("A soma de %d e %d eh um primo",num1,num2);
        }
    }
}