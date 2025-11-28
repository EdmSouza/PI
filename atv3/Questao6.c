#include <stdio.h>

int main()
{
    double l,c,a;
    scanf("%lf\n%lf\n%lf",&l,&c,&a);
    if(l>45 || c>56 || a>25){
        printf("PROIBIDA");
    }else{
        printf("PERMITIDA");
    }
}