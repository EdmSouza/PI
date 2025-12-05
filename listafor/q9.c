#include <stdio.h>


const void resultado(int numero){
    for(int i = 1; i <= numero; i++){
        if(numero == 1){
            printf("%d",i);
            break;
        }
        for(int j = 1; j <= i; j++){
            if(j<i){
                printf("%d-",i);
            }else{
                printf("%d",i);
                printf("\n");
            }
        }
    }
}


int main()
{
    int num;
    scanf("%d",&num);
    resultado(num);
}