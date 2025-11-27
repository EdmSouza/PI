#include <stdio.h>

int main()
{
    int n1,n2;
    double total,cota;
    scanf("%d\n%d",&n1,&n2);
    total = 90.0*(double)n1;
    cota = 100*n1;
    if(n2>cota){
        printf("%.2f",total+12*(n2-cota));
    }else{
        printf("%.2f",total);
    }
    return 0;
}