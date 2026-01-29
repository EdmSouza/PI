#include <stdio.h>
#include <stdbool.h>

int parouimp(int num1){
    if(num1%2==0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int num;
    scanf("%d",&num);
    int resultado = parouimp(num);
    if(resultado == 1){
        printf("Par");
    }else{
        printf("Impar");
    }
}

