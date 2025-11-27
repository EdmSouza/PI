#include <stdio.h>

int main()
{
    float altura, raio;
    scanf("%f\n%f",&altura,&raio);
    float area = (2*3.14*raio*raio)+(2*3.14*raio*altura);
    float volume = 3.14*raio*raio*altura;
    printf("%.2f\n%.2f",volume,area);
}