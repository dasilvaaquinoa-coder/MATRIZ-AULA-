#include<stdio.h>

int main(){
   
#include<stdio.h>

int main(){

    #include<stdio.h>

int main(){

    int mat[3][3]; 
     trans[3][3];
   
     int int i ,j ;

    mat[0][0] = 1;
    mat[0][1] = 2;
    mat[0][2] = 3;

    mat[1][0] = 4; 
    mat[1][1] = 5;
    mat[1][2]= 6 ;

    mat[2][0] = 7;
    mat[2][1] = 8;
    mat[2][2] = 9;

   for(i=0; i<3; i++){  for(j=0; j<3; i++){
     
    printf("digite um valor para %d %d:  ", i,j);
    scanf("%d", &mat[i][j]);
    }
   }
     \\ matriz transportadora\\

   for(i=0; i<3; i++){  for(j=0; j<3; j++){

    trans[j][i]= mat[i][j];
   }
   }

    for(i=0; i<3; i++){ for(j=0; j<3; j++){

        printf("%d" mat[i][j]);
    }
    for(i=0; i<3; i++){ for(j=0; j<3;  j++){
    
        printf("%d" mat[j][i]);
    }

    }
     return 0;

    }
}


    


    
}

    

}