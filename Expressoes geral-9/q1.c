#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

    const char* tipo_triangulo(int num1, int num2, int num3){
        if(num1+num2<=num3 || num2+num3<=num1 || num1+num3<=num2){
            return "INVALIDO";
        }else if(num1==num2 && num2==num3 && num1==num3){
            return "EQUILATERO";
        }else if(num1!=num2 && num2!=num3 && num1!=num3){
            return "ESCALENO";
        }else{
            return "ISOSCELES";
        }
    }

int main()
{   int n1,n2,n3;
    char entrada[20];
    while(true){
        scanf("%s",entrada);
        if(strcmp(entrada,"FIM")==0){
            break;
        }else{
            n1 = atoi(entrada);
        }
        scanf(" %d %d",&n2,&n3);
        printf("%s\n",tipo_triangulo(n1,n2,n3));
    }
}