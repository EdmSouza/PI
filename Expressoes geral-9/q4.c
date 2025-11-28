#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    char texto[100];
    int contS=0,contNulo=0,contN=0,i;
    while(true){
        scanf("%s",texto);
        i=0;
        while(texto[i]!= '\0'){
            texto[i]=tolower(texto[i]);
            i++;
        }if(strcmp(texto,"encerrar")==0){
            break;
        }else if(strcmp(texto,"sim")==0){
            contS++;
        }else if(strcmp(texto,"nao")==0){
            contN++;
        }else if(strcmp(texto,"nulo")==0){
            contNulo++;
        }
    }if(contS > contNulo+contN){
        printf("COM FOGOS");
    }else{
        printf("SEM FOGOS");
    }
}