#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[50];
    float nota;
}Aluno;

Aluno *fordenar(Aluno *a,int tam){
    int maior;
    for(int i = 0; i<tam; i++){
        maior = i;
        for(int j = i+1; j<tam; j++){
            if(a[maior].nota < a[j].nota){
                maior = j;
            }else if(a[maior].nota == a[j].nota){
                if(strcmp(a[maior].nome, a[j].nome)<0){
                    maior = j;
                }
            }
            }if(maior != i){
                Aluno temp = a[i];
                a[i] = a[maior];
                a[maior] = temp;
        }
    }return a;
}

Aluno *al(int tam){
    Aluno *ptr = malloc(tam*sizeof(Aluno));
    for(int i = 0; i<tam; i++){
        scanf("%s %f",ptr[i].nome,&ptr[i].nota);
    }
    fordenar(ptr,tam);
    return ptr;
}

int main()
{
    int tam;
    scanf("%d",&tam);
    Aluno *ptr = al(tam);
    ptr = fordenar(ptr,tam);
    for(int k = 0; k<tam; k++){
        printf("%s %f\n",ptr[k].nome,ptr[k].nota);
    }
    free(ptr);
}