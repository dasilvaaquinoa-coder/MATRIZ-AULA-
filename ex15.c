#include<stdio.h>

int main(){

    int mat[5][5];
    int x
    int encontrado =0; 

    for( i=0; i<5; i++){ for (j= 0; j<5; j++){
        printf("digite o numero da matriz %d %d: "); 
        scanf("%d" , mat[i][j]);

    }} printf("digite o numero x para buscar: ");
       scanf("%d" &x);

       for(i=0; i<5; i++){ for(j=0; j<5; j++){
        if(mat[i][j]==x){
            encontrado=1 ;
            printf("encontrado em posiçao %d %d : ");

            if(encontrado){
                printf("valor nao encontrado");
            }

        }}} return 0;
        
}