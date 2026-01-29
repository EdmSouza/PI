#include <stdio.h>
#include <stdlib.h>

int main(){
    int* ptr = NULL;
    int tam;
    scanf("%d",&tam);
    ptr = malloc(tam*sizeof(int));
    if(ptr == NULL){
        return 1;
    }
    int menor;
    for(int i = 0; i<tam; i++){
        menor = i;
        for(int j = i+1; j<tam; j++){
            if(ptr[j]<ptr[menor]){
                menor = j;
            }
        }if(menor != i){
            int temp = ptr[i];
            ptr[i] = ptr[menor];
            ptr[menor] = temp;
        }
    }
}