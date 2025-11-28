#include <stdio.h>

int main()
{
    int n1,n2,n3,n4,n5,n6;
    scanf("%d\n%d\n%d\n%d\n%d\n%d\n",&n1,&n2,&n3,&n4,&n5,&n6);
    if(n1+n2+n3+n4+n5+n6>=100){
        printf("Classificado");
    }else{
        printf("Eliminado");
    }
}