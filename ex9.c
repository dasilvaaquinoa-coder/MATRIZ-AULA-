#include<stdio.h>

int main(){

    int mat[3][3];
    int i,j ;
    int eidentidade=1;


    mat[0][0] = 1;
    mat[0][1] = 2; 
    mat[0][2] = 3;

    mat[1][0] = 4; 
    mat[1][1] = 5;
    mat[1][2]=  6;

    mat[2][0] = 7;
    mat[2][1] = 8;
    mat[2][2] = 9;
  

    for(i=0;  i<3; i++){ for(j=0; j<3; j++){

        printf("digite o valor para o %d %d: ");
        scanf("%d", &mat[3][3]);
    }

    }

    for(i=0; i<3; i++ ){ for(j=0; j<3; j++){

        if(i==j){

            if(mat[i][j]=1){
                eidentidade=0;
            }else{

                if(mat[i][j]=0){

                    eidentidade=0;
           }
          }
        }
      }
   }
   if(eidentidade=1){

      printf("eh\n");
   }else{
    printf(" não eh\n");
   }

   return 0;
}
