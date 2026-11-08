#include<stdio.h>
int main(){
    int a[2][3] , b[3][2] , c[2][2] = 0;

    printf("digite os elementos da matriz a 2x3: ");
    for(i=0; i<2; i++){for( j=0; j<3; j++){
        scanf("%d" , a[i][j]);

    }}for( i=0; i<3; i++){for(j=0; j<2; j++){

        for(k=0; k<3; k++){
            c[i][j]= a[i][k] * b[k][j];
        }
  }}for(i=0; i<2; i++){for( j=0; j<2; j++){
    printf("%d" , c[i][j]);

  }} return 0;
}