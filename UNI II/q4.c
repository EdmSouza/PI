#include <stdio.h>

void trocarvalor(int num1,int num2){
    int temp1 = num1;
    num1 = num2;
    num2 = temp1;
    printf("%d\n%d",num1,num2);
}

int main(){
    int numero1,numero2;
    scanf("%d%d",&numero1,&numero2);
    trocarvalor(numero1,numero2);
}