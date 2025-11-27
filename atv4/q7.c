#include <stdio.h>

int main()
{
    int livros,alunos;
    double divisao;
    scanf("%d\n%d",&livros,&alunos);
    divisao = (double)alunos/(double)livros;
    if(divisao<=8){
        printf("A");
    }else if(divisao>8 && divisao<=12){
        printf("B");
    }else if(divisao>12 && divisao<=18){
        printf("C");
    }else{
        printf("D");
    }
}