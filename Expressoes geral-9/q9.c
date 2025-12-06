#include <stdio.h>

int main()
{
    double num;
    scanf("%lf",&num);
    if(num<0 || num>100){
        printf("Fora de intervalo");
    }else if(num>=0 && num<=25){
        printf("Intervalo [0,25]");
    }else if(num>25 && num<=50){
        printf("Intervalo (25,50]");
    }else if(num>50 && num<=75){
        printf("Intervalo (50,75]");
    }else if(num>75 && num<=100){
        printf("Intervalo (75,100]");
    }
}