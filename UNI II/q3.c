#include <stdio.h>

float areaTri(float base, float altura){
    return base*altura/2;
}

int main(){
    float bas,alt;
    scanf("%f %f",&bas,&alt);
    float area = areaTri(bas,alt);
    printf("%f",area);
}