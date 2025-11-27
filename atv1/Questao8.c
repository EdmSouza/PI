#include <stdio.h>

int main()
{
    double salario;
    float aumento;
    double salaument;
    scanf("%lf\n%f",&salario,&aumento);
    salaument = salario+(aumento/100)*salario;
    printf("Seu salario teve aumento de %.1f %%, passando de R$ %.1f para R$ %.1f",aumento,salario,salaument);
    return 0;
}