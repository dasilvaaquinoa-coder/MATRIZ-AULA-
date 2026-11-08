#include<stdio.h>

int main(){

    mat[4][4];
   int L1 ,L2 , temp;

    for(i=0; i<4; i++){ for(j=0; j<4; j++){

        printf("digite a matriz %d %d :" i,j);
        scanf("%d" &matriz[4][4]);
    }

    }

    for(i=0; i<4; i++){ for(j=0; j<4; j++){
        temp= matriz[L1][j];
        matriz[L1][j] = matriz[L2][j];
        matriz[L2][j]= temp;

    }}

    printf("como ficou a matriz apos a troca: ");

    for(i=0; i<4; i++){ for(j=0; j<4; j++){

        printf("%d" matriz[i][j]);
    }}

    return 0;
}