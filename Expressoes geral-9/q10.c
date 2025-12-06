#include <stdio.h>
#include <stdbool.h>

int main()
{
    double num1, num2, resultado;
    char operacao;
    scanf("%lf",&num1);
    scanf("%lf",&num2);
    scanf(" %c",&operacao);
    bool loop = true;
    if(operacao == '*'){
            resultado = num1*num2;
            printf("%.3f\n",resultado);
        }else if(operacao == '+'){
            resultado = num1+num2;
            printf("%.3f\n",resultado);
        }else if(operacao == '-'){
            resultado = num1-num2;
            printf("%.3f\n",resultado);
        }else if(operacao == '&'){
            loop = false;
        }else if(operacao == '/' && num2 == 0){
            printf("operacao nao pode ser realizada\n");
            loop = false;
        }else if(operacao == '/'){
            resultado = num1/num2;
            printf("%.3f\n",resultado);
        }else{
            printf("operacao nao pode ser realizada\n");
            loop = false;
        }
        if(loop == true){
            for(int i = 0;;i++){
                scanf("%lf",&num1);
                scanf(" %c",&operacao);
                if(operacao == '*'){
                    resultado = resultado*num1;
                    printf("%.3f\n",resultado);
                }else if(operacao == '/' && num1 == 0){
                    printf("operacao nao pode ser realizada\n");
                    break;
                }else if(operacao == '/'){
                    resultado = resultado/num1;
                    printf("%.3f\n",resultado);
                }else if(operacao == '+'){
                    resultado = resultado+num1;
                    printf("%.3f\n",resultado);
                }else if(operacao == '-'){
                    resultado = resultado-num1;
                    printf("%.3f\n",resultado);
                }else if(operacao == '&'){
                    break;
                }else{
                    printf("operacao nao pode ser realizada\n");
                }
            }
        }
    return 0;
}
