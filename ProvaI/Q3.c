#include <stdio.h>

int main()
{
    int rodadas,jog1,jog2,contador1,contador2;
    while(1){           //Mudança:
        contador1 = 0; //declarei os contadores dentro do loop, isso garante que a cada iteraçao o contador resete e conte a partir do zero
        contador2 = 0;
        scanf("%d",&rodadas);
        if(rodadas>0 && rodadas<=10){
            for(int i = 0; i<rodadas; i++){ //nao lembro ao certo se usei for ou while, por via das dúvidas, fiz com for por segurança, mas a lógica é a mesma =)
                scanf("%d %d",&jog1,&jog2);
                if(jog1>jog2){
                    contador1++;
                }else if(jog2>jog1){
                    contador2++;
                }else if(jog1==jog2){
                    contador1+=0;
                    contador2+=0;
                }
            }printf("%d %d\n",contador1,contador2);
        }else if(rodadas==0){
            break;
        }
    }
}