#include <stdio.h>

int main()
{
    int num1,num2,num3,maior,menor;
    scanf("%d\n%d\n%d",&num1,&num2,&num3);
    maior = num2;
    menor = num3;
    if(num3 > num2){
        maior = num3;
        menor = num2;
    }
    int quantddemult[maior-menor];
    int posicao = 0;
    for(int i = menor;i <= maior;i++){
        if(i%num1==0){
            quantddemult[posicao] = i;
            posicao++;
        }
    }
    if(posicao == 0){
        printf("INEXISTENTE");
    }else{
        for(int k = 0; k < posicao;k++){
            if(k<posicao-1){
                printf("%d\n",quantddemult[k]);
            }else{
                printf("%d",quantddemult[k]);
            }
        }
    }
}