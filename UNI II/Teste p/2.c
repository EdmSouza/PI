#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *ptr(int *lin, int *col){
    int lin1 = *lin;
    int col1 = *col;
    int* m = NULL;
    m = malloc(lin1*col1*sizeof(int));
    if(*m == NULL){
        return NULL;
    }
    for(int i = 0; i<lin1; i++){
        for(int j = 0; j<col1; j++){
            int pos = col1*i +j;
            if(i == 0 || j == 0 || j == col1 -1 || i == lin1 -1){
                m[pos] = 1;
            }else{
                m[pos] = 0;
            }
        }
    }return ptr;
}

int main()
{
    int linhas;
    int colunas;
    scanf("%d %d",&linhas,&colunas);
    int *res = ptr(&linhas,&colunas);
    for(int i = 0; i<linhas; i++){
        for(int j = 0; j<colunas; j++){
            printf("%d", res[i*colunas+j]);
        }
    }
    free(res);
}