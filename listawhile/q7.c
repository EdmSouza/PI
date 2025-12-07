#include <stdio.h>

int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int i = num1;
    int multiplo = 0;
    while(i<=num2){
        if(i%num1 == 0){
            multiplo = i;
        }i++;
    }
    if(multiplo == 0){
        printf("sem multiplos menores que %d",num2);
    }else{
        printf("%d",multiplo);
    }
}