#include <stdio.h>
#include <stdlib.h>
//Faça um programa em C que mostre o tamanho em bytes que cada tipo de dados ocupa em memória: char, float, int, double. Exibir também suas variantes unsigned, short e long.
//7. Faça uma estrutura representando um aluno de uma disciplina, contendo sua matrícula, nome e nota de 3 provas. Exiba o tamanho em bytes dessa estrutura.
//8. Crie uma estrutura chamada cadastro, contendo o nome de uma pessoa, idade e o endereço. Depois, faça uma função que receba um inteiro positivo N e retorne o ponteiro para um vetor de tamanho N dessa estrutura, alocado dinamicamente. Por fim, solicite que o usuário digite os dados desse vetor dentro da função.
//9. Faça um programa em C que leia o tamanho de um vetor de inteiros a ser lido. Em seguida, faça a alocação dinâmica desse vetor. Usando aritmética de ponteiros, leia o vetor e o imprima.
//10. Faça um programa em C que receba como parâmetro um inteiro positivo N e retorne o ponteiro para uma matriz, alocada dinamicamente, contendo N linhas e N colunas. Essa matriz deve conter o valor 1 na diagonal principal e 0 nas demais posições.
/*int main()
{
    int n1;
    double n2;
    float n3;
    char n4;
    printf("%d\n",sizeof(*&n1)); // = sizeof(n1)
    printf("%d\n",sizeof(*&n2)); // = sizeof(n2)
    printf("%d\n",sizeof(*&n3)); // ...
    printf("%d\n",sizeof(*&n4)); // ...
}*/

/*int main()
{
    typedef struct {
        char disc[50];
        double matricula;
        char nome[50];
        float not1,not2,not3;
    }Aluno;
    printf("%d",sizeof(Aluno));
}*/

typedef struct{
        char nome[50];
        int idade;
        char end[100];
    }Cadastro;

Cadastro* fcadastrar(int tam){
    Cadastro *pessoas = NULL;
    pessoas = malloc(tam*sizeof(Cadastro));
    for(int i = 0; i<tam; i++){
        scanf("%s %d %s",pessoas[i].nome,&pessoas[i].idade,pessoas[i].end);
    }return pessoas;
}

int main()
{
    int temp;
    scanf("%d",&temp);
    Cadastro *ptr = fcadastrar(temp);
    free(ptr);
}
//8. Crie uma estrutura chamada cadastro, contendo o nome de uma pessoa, idade e o endereço.
//Depois, faça uma função que receba um inteiro positivo N e retorne o ponteiro para um vetor de tamanho N dessa estrutura,
//alocado dinamicamente.
//Por fim, solicite que o usuário digite os dados desse vetor dentro da função.



//10. Faça um programa em C que receba como parâmetro um inteiro positivo N e retorne o ponteiro para uma matriz,
//alocada dinamicamente, contendo N linhas e N colunas.
//Essa matriz deve conter o valor 1 na diagonal principal e 0 nas demais posições.

int* fmatriz(int num){
    
    int *mtr = NULL;
    mtr = malloc(num*num*sizeof(int));

    for(int i = 0; i<num; i++){
        for(int j = 0; j<num; j++){
            int ptr1 = i*num +j;
            if(i==j){
                mtr[ptr1] = 1;
            }else{
                mtr[ptr1] = 0;
            }
        }
    }
    return mtr;
}

int main()
{
    int *ptr;
    int temp;
    scanf("%d",&temp);
    ptr = fmatriz(temp);
    for(int k = 0; k<temp; k++){
        for(int j = 0; j<temp; j++){
            int pos = k*temp +j;
            printf("%d ",ptr[pos]);
        }
    }
    free(ptr);
}
