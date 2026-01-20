#include <stdio.h>
/* int main()
{
    char str[20];
    fgets(str,20,stdin);
    puts(str);
}*/
// Faça um programa em C que leia as notas de uma turma com 10 alunos e apresente aquelas
// que são maiores que a média da turma.

int main() // percebe que criamos um programa que percorre a lista add elms e um outro for so para percorrer os elems da lista
{
    int turma[10];
    float media;
    float temp = 0;
    for(int i = 0; i<10; i++){
        scanf("%d",&turma[i]);
    }
    for(int j=9; j>=0; j--){
        printf("%d",turma[j]);
    }
    for(int j = 0; j<10; j++){
        printf("%d",turma[j]);
    }
}
    /*media = temp/10;
    printf("Notas acima da média:");
    for(int j = 0; j<10; j++){
        if(turma[j]>media){
            printf("\n%.2f\n",turma[j]);
        }
    }
}*/


// Faça um programa em C que preencha um vetor com 10 números inteiros. Depois de 
//preenchido, apresente apenas os números pares do vetor.
    /*for(int j = 0; j<10; j++){
        if((int)turma[j]%2 == 0){
            printf("%.2f",turma[j]);
        }
    }
}*/


//3. Faça um programa em C que preencha um vetor com 10 números inteiros. Em seguida, 
//inverta a ordem desse vetor. Apresente o vetor original e o vetor invertido.


