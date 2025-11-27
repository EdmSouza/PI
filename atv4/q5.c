#include <stdio.h>

int main()
{
    double nota1,nota2,nota3,media;
    scanf("%lf\n%lf\n%lf",&nota1,&nota2,&nota3);
    media = (double)(nota1+nota2+nota3)/3.0;
    if(media>=7){
        printf("aprovado\n");
    }else if( media>=3 && media<7){
        printf("prova final\n");
    }else{
        printf("reprovado\n");
    }
}