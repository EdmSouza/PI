#include <stdio.h>
#include <string.h>

int main()
{
    //toda a lógica foi mantida, corrigi 3 pontos de sintaxe, enunciados abaixo kkkk
    char frase[10000];
    char vogais[] = {'A','a','E','e','I','i','O','o','U','u'}; //Mudanças: 1- uso de chaves (o correto) no lugar dos colchetes que tinha colocado e contabilizar o capslock tbm das vogais
    int qntvog = 0;
    int qntfras = 0;
    while(1){
        scanf("%s",frase);//mantive aqui, pois a leitura do %s ja interpreta corretamente os espacos e quebras de linha(enter)
        if(strcmp(frase,"FIM")==0){ //2- mudei de lugar a condiçao da frase ser "fim", isso garante que a verificaçao de termino seja feito primeiramente e ja incremente no contador de frase se n for
            if(qntfras == 0){
                printf("texto vazio");
                break;
            }else{
                double media = (double)qntvog/(double)qntfras; // esqueci de converter para double as variaveis para impedir divisao inteira =(
                printf("%.2f",media); //aqui eu tinha esquecido das casas decimais kkkkkkkk
                break;
            }
            break;
        }
        qntfras++; //com isso nao preciso mais daquele outro for que eu criei pra contar o tamanho do array: frase
        for(int i = 0; i < 10; i++){ //como o array agora de vogais tem o maiusculo, aumentamos tbm o intervalo do loop kkkk para manter a logica
            for(int j = 0; j < strlen(frase); j++){ //3- sizeof nao dizia o tamanho do array, mas sim em bytes, o que nao é o caso, logo,strlen mede correto o tamanho
                if(vogais[i] == frase[j]){
                    qntvog++; //mantive tudo aqui
                }
            }
        }
    }
}