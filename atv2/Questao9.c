#include <stdio.h>

int main()
{
    double num;
    scanf("%lf",&num);
    printf("Valor a ser pago: R$ %.2f reais\nValor a ser pago com desconto: R$ %.2f reais", num*1.5, num*1.5*0.85);
}