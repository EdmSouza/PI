#include <stdio.h>

int main()
{
    int bmaior,bmenor,alt;
    float area;
    scanf("%d\n%d\n%d",&bmaior,&bmenor,&alt);
    area = (bmaior+bmenor)*alt/2.0;
    printf("%.1f",area);
}