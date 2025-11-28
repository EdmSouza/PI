#include <stdio.h>

int main()
{
    int diam,A,L,P;
    scanf("%d\n%d %d %d",&diam,&A,&L,&P);
    if(diam>A || diam>L || diam>P){
        printf("N");
    }else{
        printf("S");
    }
}