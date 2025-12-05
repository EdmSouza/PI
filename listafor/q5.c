#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    int col1[num];
    int col2[num];
    int col3[num];
    for(int i = 0; i < num; i++){
        col1[i]= i+1;
        int vartempcol2 = i+1;
        col2[i]= vartempcol2*vartempcol2;
        int vartempcol3 = vartempcol2*vartempcol2;
        col3[i]= vartempcol3*(i+1);
    }
    for(int n = 0; n < num; n++){
        printf("%d %d %d\n",col1[n],col2[n],col3[n]);
    }
}