#include <stdio.h>

int main()
{
    long int n;
    scanf("%ld",&n);
    if(n!=0){
        if(n>0){
            if(n%2==0){
                printf("POSITIVO PAR\n");
            }else{
                printf("POSITIVO IMPAR\n");
            }
        }else{
            if(n%2==0){
                printf("NEGATIVO PAR\n");
            }else{
                printf("NEGATIVO IMPAR\n");
            }
        }
    }else{
        printf("NULO\n");
    }
}