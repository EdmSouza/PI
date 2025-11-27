#include <stdio.h>
#include <math.h>

int main()
{
    char tipo;
    int num1,num2,num3;
    double mArit,mHarm,mGeo;
    scanf("%c\n%d\n%d\n%d",&tipo,&num1,&num2,&num3);
    if(tipo == 'A'){
        mArit = (num1+num2+num3)/3.0;
        printf("%.3f",mArit);
    } else if(tipo == 'H'){
        mHarm = 3.0/(1.0/num1 + 1.0/num2 + 1.0/num3);
        printf("%.3f",mHarm);
    } else if(tipo == 'G'){
        mGeo = pow((num1*num2*num3)*1.0,1.0/3.0);
        printf("%.3f",mGeo);
    }
}