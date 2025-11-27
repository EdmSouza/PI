#include <stdio.h>

int main()
{
    double valor,total;
    int ano;
    scanf("%lf\n%d",&valor,&ano);
    total = valor;
    switch(ano){
        case 0:
            printf("%.2f",total);
            break;
        case 1:
            printf("%.2f",total+(valor*0.03));
            break;
        case 2:
            printf("%.2f",total+(valor*0.05));
            break;
        default:
            return 0;
    }
    return 0;
}