#include <stdio.h>
#include <stdbool.h>

int main()
{ while (true){
    int num;
    bool ehprimo;
    scanf("\n%d",&num);
    if(num == -1){
        return 0;
    }
    ehprimo = true;
    if(num <= 1 && num != -1){
        ehprimo = false;
        printf("0\n");
    }
    for (int i=2; i<num; i++){
        if(num%i != 0){
            continue;
        }else if(num%i == 0){
            printf("0\n");
            ehprimo = false;
            break;
        }
    }if(ehprimo != false){
        printf("1\n");
    }
}
}