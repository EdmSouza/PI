#include <stdio.h>

int main()
{
    int nA,nB,nC;
    scanf("%d\n%d\n%d",&nA,&nB,&nC);
    if(nA == nB && nB == nC){
        printf("*");
    }else if(nA != nB && nB == nC){
        printf("A");
    }else if(nB != nA && nA == nC){
        printf("B");
    }else if(nC != nB && nB == nA){
        printf("C");
    }
}