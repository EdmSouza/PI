#include <stdio.h>

int main()
{
    int vetor[15]; //reserva um espaço contínuo de
//15*sizeof(int) bytes na memória = 60 bytes pois cada int precisa de 4 bytes de espaço na memoria
    int *ptr = vetor; //quando ptr aponta para um
//vetor, ele se comporta como
//um sinônimo para o vetor.
    printf("O endereço da posição 3: %p = %p\n",&vetor[3], &ptr[3]);
    printf("O valor na posição 3: %d = %d\n",vetor[3], ptr[3]);
}