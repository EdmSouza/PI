#include <stdio.h>

int main()
{
    int consumo, valort;
    scanf("%d",&consumo);
    if(consumo <= 10){
        valort = 7; //fixo
    }else if(consumo>=11 && consumo<=30){
        valort = 7 + ((consumo - 10)*1); //aqui funciona o calculo acumulativo, sera 7 do fixo + a diferença do q sobrou vezes a taxa
    }else if(consumo>= 31 && consumo<=100){
        valort = 7 + 20 +((consumo - 30)*2); //mesma coisa, 7 fixo, + a taxa pelo extra 1 + a diferença do q sobrou pela taxa2.
    }else if(consumo>100){
        valort = 7 + 20 + 140 +((consumo - 100)*5); //o max no int1 = 10, int2 = 30 e no int3 = 100, logo, se ele passou de 100, temos que ele pagou o maximo de cada 
    } //...intervalo, isto é, foram 7 dos 10 + 20 dos 30 - 10 da diferença dos intervalos + 140, pois ele pagou o teto de 10 e o teto de 30, so que desse 30 10 ja foram, logo, 20.
    printf("%d",valort); //...100-20-10 = 70*2 = 140 max do intervalo.
    return 0;
}