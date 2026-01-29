#include <stdio.h>

int fsomarec(int num1, int num2){
    if(num1>num2){
        return num2+fsomarec(num2+1,num1);
    }
    else if(num2>num1){
        return num1+fsomarec(num1+1,num2);
    }
    else if(num2==num1){
        return num1;
    }
    return 0;
}


int main()
{
    int n1, n2;
    scanf("%d%d",&n1,&n2);
    int result = fsomarec(n1,n2);
    printf("\n%d",result);
    return 0;
}