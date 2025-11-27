#include <stdio.h>

int main()
{
    int tempo,hora,min,resto,seg;
    scanf("%d",&tempo);
    hora = tempo/3600;
    resto = tempo%3600;
    min = resto/60;
    seg = resto%60;
    printf("%d:%d:%d",hora,min,seg);
}