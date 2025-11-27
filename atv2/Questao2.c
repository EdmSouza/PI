#include <stdio.h>

int main()
{
    int km;
    double litros;
    scanf("%d\n%lf",&km,&litros);
    printf("%.3f km/l",km/litros);
}