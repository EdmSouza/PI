#include <stdio.h>

int main()
{
    int num1,num2,num3,meio;
    scanf("%d\n%d\n%d",&num1,&num2,&num3);
    if((num1-num2 > 0 && num1-num3< 0) || (num1-num3 > 0 && num1-num2 < 0)){
        meio = num1;
    }else if((num2-num1 > 0 && num2-num3< 0) || (num2-num3 > 0 && num2-num1 < 0)){
        meio = num2;
    }else{
        meio = num3;
    }printf("%d",meio);
}