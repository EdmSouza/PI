#include <stdio.h>

int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int i = num1;
    while(i<=num2){
        if(i%2 != 0){
            printf("%d\n",i);
        }i++;
    }
}