#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    int col1[10000];
    int col2[10000];
    int col3[10000];
    int j = 1;
    for(int i = 0; i < num; i++){
        col1[i] = j;
        col2[i] = j*j;
        col3[i] = j*j*j;
        printf("%d %d %d\n",col1[i],col2[i],col3[i]);
        col1[i+1] = j;
        col2[i+1] = j*j+1;
        col3[i+1] = j*j*j+1;
        j++;
        printf("%d %d %d\n",col1[i+1],col2[i+1],col3[i+1]);
    }
}