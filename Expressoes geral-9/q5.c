#include <stdio.h>

int main()
{
    float sal,tax1,tax2,tax3;
    scanf("%f",&sal);
    tax1 = sal-2000;
    tax2 = sal-3000;
    tax3 = sal-4500;
    if(sal<=2000){
        printf("Isento");
    }else if(sal>=2000.01 && sal<=3000.0){
        printf("R$ %.2f",tax1*0.08);
    }else if(sal>=3000.01 && sal<=4500){
        printf("R$ %.2f",80+tax2*0.18);
    }else if(sal>=4500.01){
        printf("R$ %.2f",80+270+tax3*0.28);
    }
}