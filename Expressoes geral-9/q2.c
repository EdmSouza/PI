#include <stdio.h>

int main()
{
    int f,i,d,fur,p;
    scanf("%d\n%d\n%d\n%d\n%d",&f,&i,&d,&fur,&p);
    if(f>5 && d>5 && p>5){
        printf("Knight\n");
    }else if(f<5 && i>5 && fur>5 && p<5){
        printf("Mage\n");
    }else if(f>5 && i>5 && d>5 && fur>5 && p<5){
        printf("Paladin\n");
    }else if(f>10 && i<5 && d<5 && fur<5 && p>5){
        printf("Orc\n");
    }
}