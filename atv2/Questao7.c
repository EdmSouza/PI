#include <stdio.h>

int main()
{
    double a,b,c,areaT,areaC,areaTra,areaQ,areaR;
    scanf("%lf %lf %lf",&a,&b,&c);
    areaT = a*c/2.0;
    areaC = 3.14159*c*c;
    areaTra = (a+b)*c/2.0;
    areaQ = b*b*1.0;
    areaR = a*b*1.0;
    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f",areaT,areaC,areaTra,areaQ,areaR);
}