#include<stdio.h>

int main(){

    float nota mat[5][4];
    float somaGeral =0;

    for(i=0; i<5; i++){
        printf("digite as 4 notas: %d;",i+1);
    }for(j=0; j<4;  j++){
        scanf("%d", &notas mat[i][j]);
        somaGeral + = notas mat[i][j];
    }

    for(i=0; i<5; i++){ for(j=0; j<4; j++){
        somaAluno + = notas[i][j];
    }}

    media = somaAluno = 4.0;
    if(media >=7.0){
        printf("aprovado");
    }else if(media >= 5.0){
        printf("recuperaçao");
      }else{
        printf("reprovado");

      } return 0;
}