#include <stdio.h>

int main()
{
    int num1, num2, maior, menor;
    scanf("%d %d",&num1,&num2);
    maior = num1;
    menor = num2;
    if(num2>maior){
        maior = num2;
        menor = num1;
    }
    int j= 0;
    int divisiveispor5[maior-menor];

    for(int i=menor;i<=maior;i++){
        if(i%5==0){
            divisiveispor5[j] = i;
            j++;
        }
    }
    for(int k=0;k<j;k++){
        printf("%d",divisiveispor5[k]);
        if(k<j-1){
            printf("|");
        }
    }
    return 0;
}