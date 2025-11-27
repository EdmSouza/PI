#include <stdio.h>

int main()
{
    double num1,num2;
    scanf("%lf\n%lf",&num1,&num2);
    printf("%.2f\n%.2f\n%.2f\n%.2f\n",num1+num2,num1-num2,num1*num2,num1/num2);
    return 0;
}