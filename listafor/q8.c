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
    int contar[maior];
    int tamanho = 0;
    for(int i = 0; i < maior; i++){
        contar[i] = i+1;
        tamanho++;
    }
    for(int j = 0; j < tamanho; j++){
        printf("%d",contar[j]);
        if((j+1)%menor == 0){
            printf("\n");
        }else{
            printf(" ");
        }
    }
}