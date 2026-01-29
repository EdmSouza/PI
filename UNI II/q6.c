#include <stdio.h>

int ffibon(int ntermo){
    if(ntermo>2){
        int temp1 = 1;
        int temp2 = 1;
        int soma;
        for(int i=3; i<=ntermo; i++){
            soma = temp1+temp2;
            printf("%d\n",soma); // proximo numero = soma do anterior e o atual;
            temp2 = temp1;
            printf("%d\n",temp2); // o anterior é o atual do proximo
            temp1 = soma;
            printf("%d\n",temp1); // o atual passa a ser o valor obtido pelo proximo
        }return temp1;
    }else if(ntermo == 1 || ntermo == 2){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int num;
    scanf("%d",&num);
    int res = ffibon(num);
    printf("%d",res);
}