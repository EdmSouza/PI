#include <stdio.h>

int main()
{
    int num1,num2,maior,menor;
    scanf("%d %d",&num1,&num2);
    maior = num1;
    menor = num2;
    if(num2>num1){
        maior = num2;
        menor = num1;
    }
    int i = menor;
    int somaPositivos = 0;
    while(i<=maior){
        if(i>0){
            somaPositivos = somaPositivos + i;
        }i++;
    }printf("%d",somaPositivos);

}