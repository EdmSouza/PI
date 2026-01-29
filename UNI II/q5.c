#include <stdio.h>

int fpotenciapos(int base, int exp){
    if(exp>1){
        int resultado = base;
        for(int i = 1; i<exp; i++){
            resultado *= base;
        }return resultado;
    }else if(exp == 1){
        return base;
    }else if(exp == 0){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int res = fpotenciapos(num1,num2);
    printf("%d",res);
}