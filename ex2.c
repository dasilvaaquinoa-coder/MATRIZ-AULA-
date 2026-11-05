#include<stdio.h>

int mai(){

    int mat[4][4] ;
    int i , j , soma=0;

    mat[0][0] = 1;                                
    mat[0][1] = 2;
    mat[0][2] = 3;
    mat[0][3] = 4;

    mat[1][0] = 5; 
    mat[1][1] = 6;
    mat[1][2] = 7;
    mat[1][3] = 8;
    
    mat[2][0] = 9;
    mat[2][1] = 10;
    mat[2][2] = 11;
    mat[2][3] = 12;

    mat[3][0]= 13;
    mat[3][1]= 14;
    mat[3][2]= 15;
    mat[3][3]= 16;


    printf("\n digite o numero de 1 a 16 ?\n");
    scanf("%d" , mat[4][4]);

    for( i=0; i<4; i++){
        for(j=0 ; j<4 ; j++){

            printf ("Elemento %d %d: " i, j);
            scanf("%d" , &mat[i][j]);
        }
    }

    for (i = 0; i<4; i++){
        for(j=0; j<4; j++) {
            printf("%d" , mat[i][j]);
            soma+= mat[i][j];
        }
    }
       printf("Qual o valor da some de todos os elementos?");

       return 0;
}