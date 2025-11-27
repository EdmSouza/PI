#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num;
    bool ehprimo;
    scanf("%d",&num);
    ehprimo = true;
    if(num<=1){
        ehprimo = false;
        printf("O numero: %d nao e primo",num);
    }
    for (int i=2; i<num; i++){
        if(num%i != 0){
            continue;
        }else if(num%i == 0){
            printf("O numero: %d nao e primo",num);
            ehprimo = false;
            break;
        }
    }if(ehprimo != false){
        printf("O numero: %d e primo",num);
    }
}