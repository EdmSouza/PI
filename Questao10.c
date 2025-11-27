#include <stdio.h>

int main()
{
    float n1,n2,n3,mediaART;
    int cont;
    scanf("%f\n%f\n%f",&n1,&n2,&n3);
    mediaART = (n1+n2+n3)/3.0;
    cont = 0;
    if(n1>mediaART || n2>mediaART || n3>mediaART){
        cont = 1;
    }if((n2>mediaART&&n1>mediaART)||
    (n1>mediaART&&n3>mediaART)||
    (n2>mediaART&&n3>mediaART))
    {
        cont = 2;
    } printf("%d",cont);
}