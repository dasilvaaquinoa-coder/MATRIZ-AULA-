#include<stdio.h>

int main(){

    int mat[5][5];
    int i ,j ;
    int linha , coluna, somaLinha= 0;


    mat[0][0]= 1;
    mat[0][1]= 2;
    mat[0][2]= 3;
    mat[0][3]= 4;
    mat[0][4]= 5;

    mat[1][0]= 6;
    mat[1][1]= 7;
    mat[1][2]= 8;
    mat[1][3]= 9;
    mat[1][4]=10;

    mat[2][0]= 11;
    mat[2][1]= 12;
    mat[2][2]= 13;
    mat[2][3]= 14;
    mat[2][4]=15;
  
    mat[3][0]= 16;
    mat[3][1]= 17;
    mat[3][2]= 18;
    mat[3][3]= 19;
    mat[3][4]= 20;
  
    mat[4][0]= 21;
    mat[4][1]= 22;
    mat[4][2]= 23;
    mat[4][3]= 24;
    mat[4][4]= 25;  


    for(i=0; i<0; i++){
        for(j=0; j<0; j++){

            printf("elemento %d %d:  ");
            scanf("%d" &mat[i][j]);

        }
    }

    if(linha<0 , linha< 4){

        printf("escolha um numero de 0 a 4" : );
        scanf("%d" , &linha);

    } while(linha<0 , linha<4 );

    printf("escolha um numero da coluna de 0 a 4 :  ");
    scanf("%d" , &coluna);

    for (j=0; j<5; j++){
        somaLinha += mat[j];

    } for(i=0; i<5; i++){

        somaLinha += mat[i];
    }

    printf("\n qual o valor da soma da linha da %d %d:  ");
    printf("\n qual o valor da soma da coluna da %d %d:  ");

    return 0;
}
