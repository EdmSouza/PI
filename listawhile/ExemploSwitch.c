#include <stdio.h>

int main()
{
    int dia;
        const char *diaex;

        if (scanf("%d", &dia) != 1) {
            return 1;
        }

        switch (dia) {
            case 1:
                diaex = "Domingo";
                break;
            case 2:
                diaex = "Segunda-feira";
                break;
            case 3:
                diaex = "Terça-feira";
                break;
            case 4:
                diaex = "Quarta-feira";
                break;
            case 5:
                diaex = "Quinta-feira";
                break;
            case 6:
                diaex = "Sexta-feira";
                break;
            case 7:
                diaex = "Sábado";
                break;
            default:
                diaex = "Dia inválido";
                break;
        }

        printf("%s\n", diaex);
        return 0;
        
    }p
}