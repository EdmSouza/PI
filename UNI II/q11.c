#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//1. Faça um programa em C que leia duas variáveis inteiras. Compare seus endereços e exiba o de maior valor.
//2. Faça um programa em C crie um array de float contendo 10 elementos. Exiba o endereço de cada posição desse array.
//3. Faça um programa em C que contenha um array de inteiros contendo 10 elementos. Leia esse array utilizando apenas aritmética de ponteiros. Em seguida, utilizando novamente aritmética de ponteiros, exiba o dobro de cada valor lido desse array.
//4. Faça uma função em C que receba duas strings como parâmetro e verifique se a segunda string ocorre dentro da primeira. Use aritmética de ponteiros para acessar os caracteres da string.
//5. Faça um programa em C que contenha um array de cinco elementos inteiros. Leia esse array e imprima o endereço das posições contendo valores pares.

/*int main()
{
    int num1,num2;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    scanf("%d %d",&num1,&num2);
    if(ptr1>ptr2){
        printf("%p",ptr1);
    }else{
        printf("%p",ptr2);
    }
}*/

/*int main()
{
    float array[10];
    float *ptr = array; //isso é o mesmo que *ptr = &array[0]; array ja é um ponteiro = &array[0], n precisa ent do &;
    for(int i = 0; i<10; i++){
        scanf("%f",&array[i]); // ou ent (p+i);
    }for(int j = 0; j<10; j++){
        printf("%p\n",&array[j]); //ou ent (p+j); // sem o * é referente a onde esta apontando, com é o valor q ele aponta
    }
}*/

/*int main()
{
    int array[10];
    int *ptr = array;
    for(int i = 0; i<10; i++){
        scanf("%d",(ptr+i));
    }for(int j = 0; j<10; j++){
        printf("%d\n",*(ptr+j));
    }for(int k = 0; k<10; k++){
        printf("%d\n",*(ptr+k)*2);
    }
}*/
//Nao consegui, tentar dnv depois
void fcompararS(char str1[50], char str2[50]){
    char *ptr1 = str1;
    char *ptr2 = str2;
    bool iguais = true;
    for(int i = 0; i<strlen(str1); i++){
        if(str1[i] == *ptr2){
            for(int j = 0; j<strlen(str2); j++){
                if(*(ptr2 + j) == *(ptr1 + j + i)){
                    iguais = true;
                    continue;
                }else{
                    iguais = false;
                    return;
                }
            }
        }
    }
}

int main()
{
    char frase1[50];
    char frase2[50];
    scanf("%s %s",frase1,frase2);
    fcompararS(frase1,frase2);
}

/*int main()
{
    int *ptr = NULL;
    ptr = malloc(5* sizeof(int)); // poderia em uma funçao a parte definir o multiplicador de sizeof como n qualquer

    if(ptr == NULL){
        return 1;
    }


    for(int i = 0; i<5; i++){
        scanf("%d",(ptr+i)); //sempre que for alocar com scan voce precisa do endereço
    }for(int j = 0; j<5; j++){
        if(*(ptr+j)%2 == 0){
            printf("%d\n",*(ptr+j)); //sempre que for printar voce precisa passar o valor a ser printado
        }
    }
    free(ptr);
    return 0;
}*/