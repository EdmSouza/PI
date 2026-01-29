#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    int idade;
}Pessoa;

void fcalmed(Pessoa *p, int tamanho){
    Pessoa *a = p;
    int temp = 0;
    for(int i = 0; i<tamanho; i++){
        temp = temp + a[i].idade;
    }
    int media = temp/tamanho;
    for(int j = 0; j<tamanho; j++){
        if(a[j].idade>=media){
            printf("%s %d\n",a[j].nome,a[j].idade);
        }
    }
}

int main()
{
    int tam;
    scanf("%d",&tam);
    Pessoa *pessoas = malloc(tam*sizeof(Pessoa));
    for(int i = 0; i<tam; i++){
        scanf("%s %d",pessoas[i].nome,&pessoas[i].idade);
    }
    int menorid;
    for(int j = 0; j<tam; j++){
        menorid = j;
        for(int k = j+1; k<tam; k++){
            if(pessoas[menorid].idade>pessoas[k].idade){
                menorid = k;
            }
        }if(menorid != j){
            Pessoa temp = pessoas[j];
            pessoas[j] = pessoas[menorid];
            pessoas[menorid] = temp;
        }
    }fcalmed(pessoas,tam);
    free(pessoas);
}