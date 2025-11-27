#include <stdio.h>

int main()
{
    int num,c100,c50,c20,c10,c5,c2,c1,resto1,resto2,resto3,resto4,resto5,resto6;
    scanf("%d",&num);
    c100 = num/100;
    resto1 = num%100;
    c50 = resto1/50;
    resto2 = resto1%50;
    c20 = resto2/20;
    resto3 = resto2%20;
    c10 = resto3/10;
    resto4 = resto3%10;
    c5 = resto4/5;
    resto5 = resto4%5;
    c2 = resto5/2;
    resto6 = resto5%2;
    c1 = resto6/1;
    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00",num,c100,c50,c20,c10,c5,c2,c1);
}