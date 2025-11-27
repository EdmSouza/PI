#include <stdio.h>

int main()
{
    char nome[100], atracao[100];

    fgets(nome, sizeof(nome), stdin);
    fgets(atracao, sizeof(atracao), stdin);

    nome[strcspn(nome, "\n")] = '\0';
    atracao[strcspn(atracao, "\n")] = '\0';

    printf("Bem-vindo %s! Aguardamos você na/o %s!",nome,atracao);
    return 0;
}