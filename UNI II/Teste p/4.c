#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[40];
    float preco;
    int qtd;
}Produto;

float valorestq(Produto *pr, int tam1){
    float valorT = 0;
    for(int i = 0; i<tam1; i++){
        valorT = valorT + (pr[i].preco * pr[i].qtd);
    }
    return valorT;
}

Produto* fprecoestoque(Produto *n, int tam){
    int maiscaro = 0;
    for(int j = 1; j<tam; j++){
        if(n[j].preco>n[maiscaro].preco){
            maiscaro = j;
        }
    }Produto *maisc = &n[maiscaro];
    return maisc;
}

Produto* fprodutos(int prd){
    Produto *p = malloc(prd*sizeof(Produto));
    for(int i = 0; i<prd; i++){
        scanf("%s %f %d",p[i].nome,&p[i].preco,&p[i].qtd);
    }
    return p;
}

int main()
{
    int tamanho;
    scanf("%d",&tamanho);
    Produto *produtos = fprodutos(tamanho);
    for(int i = 0; i<tamanho; i++){
        printf("%s %f",produtos[i].nome,produtos[i].preco);
    }
    float total = valorestq(produtos,tamanho);
    printf("%f",total);
    Produto *pCaro = fprecoestoque(produtos,tamanho);
    for(int j = 0; j<tamanho; j++){
        printf("%s %f",(*pCaro).nome,(*pCaro).preco);
    }
    free(produtos);
}