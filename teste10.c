#include <stdio.h>
int main()
{
    float n1,n2,n3,mediaART;
    int cont;
    scanf("%f\n%f\n%f",&n1,&n2,&n3);
    mediaART = (float)(n1+n2+n3)/3.0;
    cont = 0;
    if(n1>mediaART){
        cont = cont +1;
    }if(n2>mediaART){
        cont = cont +1;
    }if(n3>mediaART){
        cont = cont +1;
    } printf("%d",cont);
}