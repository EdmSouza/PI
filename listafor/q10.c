#include <stdio.h>
#include <stdbool.h>

const void ePrimo(int numero1,int numero2){
    bool ehprimo1 = true;
    bool ehprimo2 = true;

    if(numero1 < 2){
        ehprimo1 = false;
        printf("O numero %d nao eh primo",numero1);
    }
    if(numero2 < 2){
        ehprimo2 = false;
        printf("O numero %d nao eh primo",numero2);
    }
    if(numero1 > 2){
        for(int i = 2; i < numero1; i++){
            if(numero1%i==0){
                ehprimo1 = false;
                printf("O numero %d nao eh primo",numero1);
                break;
            }
        }
    }
    if(numero2 > 2){
        for(int i = 2; i < numero2; i++){
            if(numero2%i==0){
                ehprimo2 = false;
                printf("O numero %d nao eh primo",numero2);
                break;
            }
        }
    }
    if(ehprimo1 && ehprimo2){
        for(int i = 2; i < numero1+numero2; i++){
            if((numero1+numero2)%i==0){
                printf("A soma de %d e %d nao eh um primo",numero1,numero2);
                ehprimo1 = false;
                ehprimo2 = false;
                break;
            }
        }
        if(ehprimo1 && ehprimo2){
            printf("A soma de %d e %d eh um primo",numero1,numero2);
        }
    }
}


int main()
{
    int num1,num2;
    scanf("%d\n%d",&num1,&num2);
    ePrimo(num1,num2);
}