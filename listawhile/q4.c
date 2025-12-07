#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    int cont = 0;
    int i = 0;
    while(i<num){
        if(i%3 ==0 || i%5 ==0){
            cont = cont + i;
        }
        i++;
    }
    printf("%d\n",cont);
}