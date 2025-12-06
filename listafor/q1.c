#include <stdio.h>
#include <string.h>

const int contar_vogais(char vog[100],char fras[100]){
    int cont = 0;
    int tamanhvog = strlen(vog);
    int tamanhfra = strlen(fras);
    for(int i = 0; i < tamanhvog; i++){
        for(int j = 0; j < tamanhfra; j++){
            if(vog[i] == fras[j]){
                cont++;
            }
        }
    }
    return cont;
}


int main()
{
    char vogal[1000];
    char frase[1000];
    int qtd;
    scanf("%d",&qtd);
    for(int i = 0; i < qtd; i++){
        scanf("%s %[^\n]",vogal,frase);
        contar_vogais(vogal,frase);
        int valoracumulado = contar_vogais(vogal,frase);
        printf("%d\n",valoracumulado);
    }
}
