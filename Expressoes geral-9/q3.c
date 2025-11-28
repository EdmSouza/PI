#include <stdio.h>

int main()
{
    int n1,n2,multiplos,contador;
    scanf("%d\n%d",&n1,&n2);
    contador = 0;
    multiplos = 0;
    for(int i=1;;i++){
        if(n1>n2){
            multiplos = n1*i;
            if(multiplos>=50){
                break;
            }
            if(multiplos%n2==0){
                contador++;
            }
        }else{
            multiplos = n2*i;
            if(multiplos>=50){
                    break;
            }
            if(multiplos%n1==0){
                contador++;
            }
        }
    }
    printf("%d",contador);
}