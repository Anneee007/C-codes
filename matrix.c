#include<stdio.h>
int main(){
    int mat[2][4];
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            scanf("%d %d ", &i,&j);
            printf("%d", mat[i][j]);

        }
        printf("\n");
    }
    return 0;
}