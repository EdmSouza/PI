#include <stdio.h>
#include <math.h>

int main()
{
    double capit, tax, rendim, mont, monttemp;
    int ano, qntdmes;
    scanf("%lf %lf %d",&capit,&tax,&ano);
    qntdmes = ano*12;
    int portrim = 1;
    for(int i=0;i<=qntdmes;i=i+3){
        if(i==0){
            rendim = 0;
            mont = capit;
        }else if(i!=0){
            monttemp = mont;
            mont = capit* pow(1+tax,portrim);
            rendim = mont - monttemp;
            portrim++;
            printf("Rendimento: %.2f Montante: %.2f\n",rendim,mont);
        }
    }
}